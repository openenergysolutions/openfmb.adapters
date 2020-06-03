#include "catch.hpp"

#include "adapter-util/schedule/ScheduleSplit.h"
#include "adapter-util/util/Time.h"
#include <adapter-api/ProfileRegistry.h>

#include <boost/uuid/uuid_io.hpp>

using namespace adapter;

template <typename T>
struct ProfileReader
{
    template <bool condition>
    using return_t = typename std::enable_if<condition, void>::type;

    template <typename U = T>
    static return_t<util::profile_info<U>::type == util::ProfileType::Control> handle()
    {
        util::ScheduleSplit<U> splitter(std::chrono::seconds(5));
        U profile;
        splitter.split(profile);
    }

    template <typename U = T>
    static return_t<util::profile_info<U>::type != util::ProfileType::Control> handle()
    {
        // Do nothing for profiles that are not controls
    }
};

TEST_CASE("ScheduleSplit")
{
    const auto now = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    util::ScheduleSplit<essmodule::ESSControlProfile> splitter(std::chrono::seconds(5));

    SECTION("verify schedule splitting is implemented for each control profiles")
    {
        adapter::api::ProfileRegistry::handle_all<ProfileReader>();
    }

    SECTION("properly splits ESSControlProfile")
    {
        const auto initialize = [now]() -> essmodule::ESSControlProfile {
            boost::uuids::random_generator rg;
            // setup the input profile
            essmodule::ESSControlProfile profile;
            // setup the metadata
            profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
            profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
            profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));
            // setup some points
            {
                const auto schpts = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
                {
                    const auto point = schpts->Add();
                    point->mutable_starttime()->set_seconds(now + 1);
                    const auto param = point->mutable_scheduleparameter()->Add();
                    param->set_value(47.3f);
                    param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
                }
                {
                    const auto point = schpts->Add();
                    point->mutable_starttime()->set_seconds(now + 24);
                    const auto param = point->mutable_scheduleparameter()->Add();
                    param->set_value(103);
                    param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag);
                }
                {
                    // create a 3rd point with the same time as the 2nd
                    const auto point = schpts->Add();
                    point->mutable_starttime()->set_seconds(now + 24);
                    const auto param = point->mutable_scheduleparameter()->Add();
                    param->set_value(104);
                    param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_net_mag);
                }
            }
            // create an islanded point
            {
                const auto schpts = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_islandcontrolschedulefsch()->mutable_valacsg()->mutable_schpts();
                {
                    // create an islanded point
                    const auto point = schpts->Add();
                    point->mutable_starttime()->set_seconds(now + 2);
                    const auto param = point->mutable_scheduleparameter()->Add();
                    param->set_value(105);
                    param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsC_mag);
                }
            }
            // create a custom point
            {
                const auto crvpts = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_esscontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
                const auto point = crvpts->Add();
                point->mutable_starttime()->set_seconds(now + 3);
                point->mutable_pcthzdroop()->set_value(56.78f);
            }
            return profile;
        };

        const auto profile = initialize();
        const auto result = splitter.split(profile);

        // there should be no schedule points to be performed now
        CHECK(result.now->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts_size() == 0);
        CHECK(result.now->esscontrol().esscontrolfscc().controlfscc().islandcontrolschedulefsch().valacsg().schpts_size() == 0);

        // there should only be two later profiles b/c 2 of the point timestamps were the same
        REQUIRE(result.later.size() == 4);
        {
            auto item = result.later.find(std::chrono::system_clock::time_point(std::chrono::seconds(now + 1)));
            REQUIRE(item != result.later.end());

            // check that the conducting equip mRID is preserved
            CHECK(item->second->ess().conductingequipment().mrid() == profile.ess().conductingequipment().mrid());

            // check that the message mRID is non-empty and not equal to the source
            CHECK_FALSE(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value().empty());
            CHECK(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value() != profile.controlmessageinfo().messageinfo().identifiedobject().mrid().value());

            // check the message timestamp is the time of the control
            CHECK(item->second->controlmessageinfo().messageinfo().messagetimestamp().seconds() == now + 1);

            // check the actual control value is preserved
            {
                REQUIRE(item->second->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts_size() == 1);
                REQUIRE(item->second->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts().begin()->scheduleparameter_size() == 1);

                auto point = *item->second->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts().begin()->scheduleparameter().begin();
                CHECK(point.value() == 47.3f);
                CHECK(point.scheduleparametertype() == commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
        }
        // check two points on the same timestamp
        {
            auto item = result.later.find(std::chrono::system_clock::time_point(std::chrono::seconds(now + 24)));
            REQUIRE(item != result.later.end());

            // check that the conducting equip mRID is preserved
            CHECK(item->second->ess().conductingequipment().mrid() == profile.ess().conductingequipment().mrid());

            // check that the message mRID is non-empty and not equal to the source
            CHECK_FALSE(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value().empty());
            CHECK(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value() != profile.controlmessageinfo().messageinfo().identifiedobject().mrid().value());

            // check the message timestamp is the time of the control
            CHECK(item->second->controlmessageinfo().messageinfo().messagetimestamp().seconds() == now + 24);

            // check the schedule control value is preserved
            {
                REQUIRE(item->second->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts_size() == 2);
                REQUIRE(item->second->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts().begin()->scheduleparameter_size() == 1);

                auto point = *item->second->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts().begin()->scheduleparameter().begin();
                CHECK(point.value() == 103);
                CHECK(point.scheduleparametertype() == commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag);
            }
        }
        // Check islanded point
        {
            auto item = result.later.find(std::chrono::system_clock::time_point(std::chrono::seconds(now + 2)));
            REQUIRE(item != result.later.end());

            // check that the conducting equip mRID is preserved
            CHECK(item->second->ess().conductingequipment().mrid() == profile.ess().conductingequipment().mrid());

            // check that the message mRID is non-empty and not equal to the source
            CHECK_FALSE(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value().empty());
            CHECK(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value() != profile.controlmessageinfo().messageinfo().identifiedobject().mrid().value());

            // check the message timestamp is the time of the control
            CHECK(item->second->controlmessageinfo().messageinfo().messagetimestamp().seconds() == now + 2);

            // check the schedule control value is preserved
            {
                REQUIRE(item->second->esscontrol().esscontrolfscc().controlfscc().islandcontrolschedulefsch().valacsg().schpts_size() == 1);
                REQUIRE(item->second->esscontrol().esscontrolfscc().controlfscc().islandcontrolschedulefsch().valacsg().schpts().begin()->scheduleparameter_size() == 1);

                auto point = *item->second->esscontrol().esscontrolfscc().controlfscc().islandcontrolschedulefsch().valacsg().schpts().begin()->scheduleparameter().begin();
                CHECK(point.value() == 105);
                CHECK(point.scheduleparametertype() == commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_phsC_mag);
            }
        }
        // Check custom point
        {
            auto item = result.later.find(std::chrono::system_clock::time_point(std::chrono::seconds(now + 3)));
            REQUIRE(item != result.later.end());

            // check that the conducting equip mRID is preserved
            CHECK(item->second->ess().conductingequipment().mrid() == profile.ess().conductingequipment().mrid());

            // check that the message mRID is non-empty and not equal to the source
            CHECK_FALSE(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value().empty());
            CHECK(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value() != profile.controlmessageinfo().messageinfo().identifiedobject().mrid().value());

            // check the message timestamp is the time of the control
            CHECK(item->second->controlmessageinfo().messageinfo().messagetimestamp().seconds() == now + 3);

            // check the schedule control value is preserved
            {
                REQUIRE(item->second->esscontrol().esscontrolfscc().esscontrolschedulefsch().valdcsg().crvpts_size() == 1);

                auto point = *item->second->esscontrol().esscontrolfscc().esscontrolschedulefsch().valdcsg().crvpts().begin();
                CHECK(point.pcthzdroop().value() == 56.78f);
            }
        }

        /*
        // Print out the profiles before and after
        std::cout << "source:" << std::endl;
        std::cout << profile.DebugString() << std::endl;

        std::cout << "now:" << std::endl;
        std::cout << result.now->DebugString() << std::endl;

        for(const auto& later : result.later)
        {
            const auto time = adapter::util::time::get(later.second->controlmessageinfo().messageinfo().messagetimestamp());
            std::cout << "at: " << std::chrono::duration_cast<std::chrono::milliseconds>(time.time_since_epoch()).count() << std::endl;
            std::cout << later.second->DebugString() << std::endl;
        }
        */
    }

    SECTION("missing timestamp")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        const auto point = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts()->Add();
        // This point doesn't have a timestamp
        const auto param = point->mutable_scheduleparameter()->Add();
        param->set_value(47.3f);
        param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);

        REQUIRE_THROWS_WITH(splitter.split(profile), "Schedule point is missing a timestamp");
    }

    SECTION("points not in order")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
        {
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }
        {
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now + 40);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }
        {
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now + 20); // Not in order!
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(34.7f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }

        REQUIRE_THROWS_WITH(splitter.split(profile), "Schedule points not in order");
    }

    SECTION("points in order across different types")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        {
            const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
            {
                const auto point = points->Add();
                point->mutable_starttime()->set_seconds(now);
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(47.3f);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
            {
                const auto point = points->Add();
                point->mutable_starttime()->set_seconds(now + 20);
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(47.3f);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
            {
                const auto point = points->Add();
                point->mutable_starttime()->set_seconds(now + 40); // Not in order!
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(34.7f);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
        }

        {
            const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_islandcontrolschedulefsch()->mutable_valacsg()->mutable_schpts();
            {
                const auto point = points->Add();
                point->mutable_starttime()->set_seconds(now + 1);
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(47.3f);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
            {
                const auto point = points->Add();
                point->mutable_starttime()->set_seconds(now + 20);
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(47.3f);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
            {
                const auto point = points->Add();
                point->mutable_starttime()->set_seconds(now + 40); // Not in order!
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(34.7f);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
        }

        REQUIRE_NOTHROW(splitter.split(profile));
    }

    SECTION("points of other type doesn't have now point")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        {
            const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }

        {
            const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_islandcontrolschedulefsch()->mutable_valacsg()->mutable_schpts();
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now + 20);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }

        REQUIRE_THROWS(splitter.split(profile), "Schedule points not in order");
    }

    SECTION("first point outside of tolerance (after)")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
        {
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now + 6); // After tolerance
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }

        REQUIRE_THROWS_WITH(splitter.split(profile), "First schedule point not within tolerance");
    }

    SECTION("first point outside of tolerance (before)")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
        {
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now - 6); // Before tolerance
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }

        REQUIRE_THROWS_WITH(splitter.split(profile), "First schedule point not within tolerance");
    }

    SECTION("no value associated with a timestamp")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
        {
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now);
            // But no values
        }

        REQUIRE_THROWS_WITH(splitter.split(profile), "Schedule point does not have a value associated with a timestamp");
    }

    SECTION("first value before now is put in now")
    {
        boost::uuids::random_generator rg;
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(now);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));

        const auto points = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
        {
            const auto point = points->Add();
            point->mutable_starttime()->set_seconds(now - 1);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }

        const auto result = splitter.split(profile);
        CHECK(result.now->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts_size() == 1);
        CHECK(result.later.size() == 0);
    }
}
