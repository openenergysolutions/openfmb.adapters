#include "catch.hpp"

#include "adapter-util/util/ProtoChangeFilter.h"
#include <proto-api/breakermodule/breakermodule.pb.h>

using namespace adapter;

template <typename P>
class IPublisherMock : public api::IPublishOne<P> {
public:
    void publish(const P& message) override
    {
        ++num_calls;
    }

    unsigned int num_calls = 0;
};

TEST_CASE("ProtoChangeFilter")
{
    auto publisher = std::make_shared<IPublisherMock<breakermodule::BreakerEventProfile>>();
    util::ProtoChangeFilter<breakermodule::BreakerEventProfile> filter{publisher};

    breakermodule::BreakerEventProfile msg{};
    msg.mutable_breaker()->mutable_conductingequipment()->set_mrid("7cc229e2-0a69-4383-bd55-a3599fb2bb71");
    msg.mutable_eventmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value("ebbb0049-d5b0-45b4-840a-9df37489e475");
    msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->set_stval(commonmodule::DbPosKind::DbPosKind_open);

    filter.publish(msg);
    REQUIRE(publisher->num_calls == 1);

    SECTION("Send same message")
    {
        filter.publish(msg);
        CHECK(publisher->num_calls == 1);
    }

    SECTION("Change value")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->set_stval(commonmodule::DbPosKind::DbPosKind_closed);
        filter.publish(msg);
        CHECK(publisher->num_calls == 2);
    }

    SECTION("Add value")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_dynamictest()->set_stval(commonmodule::DynamicTestKind::DynamicTestKind_operating);
        filter.publish(msg);
        CHECK(publisher->num_calls == 2);
    }

    SECTION("Change value in message identifier")
    {
        msg.mutable_eventmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value("2c7e7334-48b2-4948-9c09-77968e07ee95");
        filter.publish(msg);
        CHECK(publisher->num_calls == 1);
    }
}
