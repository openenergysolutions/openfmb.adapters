#include "catch.hpp"

#include <boost/uuid/uuid_io.hpp>
#include <exe4cpp/MockExecutor.h>
#include "adapter-util/schedule/ScheduleExecutor.h"

using namespace adapter;

class MockSubscriber final : public api::ISubscriptionHandler<essmodule::ESSControlProfile>
{
public:
    void process(const essmodule::ESSControlProfile& message) override
    {
        ++num_calls;
    }

    unsigned int num_calls = 0;
};

TEST_CASE("ScheduleExecutor")
{
    api::Logger logger("test", std::vector<spdlog::sink_ptr>());
    auto executor = std::make_shared<exe4cpp::MockExecutor>();
    auto subscriber = std::make_shared<MockSubscriber>();
    const auto start = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    util::ScheduleExecutor<essmodule::ESSControlProfile> sched_executor{logger, "f20e4b90-ba3c-4c60-bf19-a7c2e9336a5c", executor, std::chrono::seconds(5), subscriber};

    boost::uuids::random_generator rg;
    // setup the input profile
    essmodule::ESSControlProfile profile;
    // setup the metadata
    profile.mutable_ess()->mutable_conductingequipment()->set_mrid(boost::uuids::to_string(rg()));
    profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp()->set_seconds(start);
    profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));
    // setup some points
    {
        const auto schpts = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
        {
            const auto point = schpts->Add();
            point->mutable_starttime()->set_seconds(start);
            point->mutable_starttime()->set_nanoseconds(0);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(47.3f);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_A_net_mag);
        }
        {
            const auto point = schpts->Add();
            point->mutable_starttime()->set_seconds(start + 24);
            point->mutable_starttime()->set_nanoseconds(0);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(103);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_PhV_net_mag);
        }
        {
            // create a 3rd point with the same time as the 2nd
            const auto point = schpts->Add();
            point->mutable_starttime()->set_seconds(start + 24);
            point->mutable_starttime()->set_nanoseconds(0);
            const auto param = point->mutable_scheduleparameter()->Add();
            param->set_value(104);
            param->set_scheduleparametertype(commonmodule::ScheduleParameterKind::ScheduleParameterKind_W_net_mag);
        }
    }

    sched_executor.process(profile);

    CHECK(executor->run_many() == 1);
    REQUIRE(subscriber->num_calls == 1);

    executor->advance_time(std::chrono::seconds(24));
    CHECK(executor->run_many() == 1);
    REQUIRE(subscriber->num_calls == 2);
}
