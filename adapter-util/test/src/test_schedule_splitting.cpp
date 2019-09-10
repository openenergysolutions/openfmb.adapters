#include "catch.hpp"

#include "adapter-util/schedule/ScheduleSplit.h"
#include "adapter-util/util/Time.h"

#include <boost/uuid/uuid_io.hpp>

TEST_CASE("properly splits ESSControlProfile")
{
    boost::uuids::random_generator rg;

    const auto initialize = [](boost::uuids::random_generator& rg) -> essmodule::ESSControlProfile {
        // setup the input profile
        essmodule::ESSControlProfile profile;
        // setup the metadata
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(42);
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));
        // setup some points
        {
            const auto schpts = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
            {
                const auto point = schpts->Add();
                point->mutable_starttime()->set_seconds(23);
                point->mutable_starttime()->set_fraction(1);
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(47.3);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
            }
            {
                const auto point = schpts->Add();
                point->mutable_starttime()->set_seconds(24);
                point->mutable_starttime()->set_fraction(2);
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(103);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag);
            }
            {
                // create a 3rd point with the same time as the 2nd
                const auto point = schpts->Add();
                point->mutable_starttime()->set_seconds(24);
                point->mutable_starttime()->set_fraction(2);
                const auto param = point->mutable_scheduleparameter()->Add();
                param->set_value(104);
                param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_net_mag);
            }
        }
        return profile;
    };

    const auto profile = initialize(rg);
    const auto result = adapter::util::split(profile, rg);

    // there should be no schedule points to be performed now
    REQUIRE(result.now->esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().valacsg().schpts_size() == 0);
    // there should only be two later profiles b/c 2 of the 3 point timestamps were the same
    REQUIRE(result.later.size() == 2);

    {
        const auto item = result.later.find(std::chrono::system_clock::time_point(std::chrono::seconds(23)));
        REQUIRE(item != result.later.end());
        // check that the conducting equip mRID is preserved
        REQUIRE(item->second->ess().conductingequipment().mrid() == profile.ess().conductingequipment().mrid());
        // check that the message mRID is non-empty and not equal to the source
        REQUIRE_FALSE(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value().empty());
        REQUIRE(item->second->controlmessageinfo().messageinfo().identifiedobject().mrid().value() != profile.controlmessageinfo().messageinfo().identifiedobject().mrid().value());
        // check the message timestamp is the time of the control
        REQUIRE(item->second->controlmessageinfo().messageinfo().messagetimestamp().seconds() == 23);
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
