#include "catch.hpp"

#include "adapter-util/util/ProtoChangeFilter.h"
#include <proto-api/breakermodule/breakermodule.pb.h>

using namespace adapter;

template <typename P>
class IPublisherMock : public api::IPublishOne<P> {
public:
    void publish(const P& message) override
    {
        last_message = message;
        ++num_calls;
    }

    unsigned int num_calls = 0;
    P last_message;
};

TEST_CASE("ProtoChangeFilter")
{
    auto publisher = std::make_shared<IPublisherMock<breakermodule::BreakerEventProfile>>();
    util::ProtoChangeFilter<breakermodule::BreakerEventProfile> filter{publisher};

    breakermodule::BreakerEventProfile msg{};
    const auto device_mrid = "7cc229e2-0a69-4383-bd55-a3599fb2bb71";
    const auto message_mrid = "ebbb0049-d5b0-45b4-840a-9df37489e475";
    msg.mutable_breaker()->mutable_conductingequipment()->set_mrid(device_mrid);
    msg.mutable_eventmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(message_mrid);
    msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->mutable_phs3()->set_stval(commonmodule::DbPosKind::DbPosKind_open);
    msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->mutable_phs3()->mutable_q()->set_validity(commonmodule::ValidityKind::ValidityKind_questionable);

    filter.publish(msg);
    REQUIRE(publisher->num_calls == 1);
    CHECK(publisher->last_message.DebugString() == msg.DebugString());

    SECTION("Send same message")
    {
        filter.publish(msg);
        CHECK(publisher->num_calls == 1);
    }

    SECTION("Change value")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->mutable_phs3()->set_stval(commonmodule::DbPosKind::DbPosKind_closed);
        filter.publish(msg);
        CHECK(publisher->num_calls == 2);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().stval() == commonmodule::DbPosKind::DbPosKind_closed);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().has_q() == false); // Should not contain other events
        CHECK(publisher->last_message.breaker().conductingequipment().DebugString() == msg.breaker().conductingequipment().DebugString()); // Keep conducting equipment
        CHECK(publisher->last_message.eventmessageinfo().messageinfo().DebugString() == msg.eventmessageinfo().messageinfo().DebugString()); // Keep message info
    }

    SECTION("Change other value")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->mutable_phs3()->mutable_q()->set_validity(commonmodule::ValidityKind::ValidityKind_invalid);
        filter.publish(msg);
        CHECK(publisher->num_calls == 2);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().q().validity() == commonmodule::ValidityKind::ValidityKind_invalid);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().stval() == 0); // Should not contain other events
        CHECK(publisher->last_message.breaker().conductingequipment().DebugString() == msg.breaker().conductingequipment().DebugString()); // Keep conducting equipment
        CHECK(publisher->last_message.eventmessageinfo().messageinfo().DebugString() == msg.eventmessageinfo().messageinfo().DebugString()); // Keep message info
    }

    SECTION("Add value")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_dynamictest()->set_stval(commonmodule::DynamicTestKind::DynamicTestKind_operating);
        filter.publish(msg);
        CHECK(publisher->num_calls == 2);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().dynamictest().stval() == commonmodule::DynamicTestKind::DynamicTestKind_operating);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().has_pos() == false); // Should not contain other events
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().has_q() == false); // Should not contain other events
        CHECK(publisher->last_message.breaker().conductingequipment().DebugString() == msg.breaker().conductingequipment().DebugString()); // Keep conducting equipment
        CHECK(publisher->last_message.eventmessageinfo().messageinfo().DebugString() == msg.eventmessageinfo().messageinfo().DebugString()); // Keep message info
    }

    SECTION("Remove value")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->clear_pos();
        filter.publish(msg);
        CHECK(publisher->num_calls == 1);
    }

    SECTION("Set to default value")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->mutable_phs3()->set_stval(commonmodule::DbPosKind::DbPosKind_transient);
        filter.publish(msg);
        CHECK(publisher->num_calls == 2);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().stval() == commonmodule::DbPosKind::DbPosKind_transient);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().has_q() == false); // Should not contain other events
        CHECK(publisher->last_message.breaker().conductingequipment().DebugString() == msg.breaker().conductingequipment().DebugString()); // Keep conducting equipment
        CHECK(publisher->last_message.eventmessageinfo().messageinfo().DebugString() == msg.eventmessageinfo().messageinfo().DebugString()); // Keep message info
    }

    SECTION("Set to default value whole section")
    {
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->mutable_phs3()->set_stval(commonmodule::DbPosKind::DbPosKind_transient);
        msg.mutable_breakerevent()->mutable_statusandeventxcbr()->mutable_pos()->mutable_phs3()->clear_q();
        filter.publish(msg);
        CHECK(publisher->num_calls == 2);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().stval() == commonmodule::DbPosKind::DbPosKind_transient);
        CHECK(publisher->last_message.breakerevent().statusandeventxcbr().pos().phs3().has_q() == false); // Should not contain other events
        CHECK(publisher->last_message.breaker().conductingequipment().DebugString() == msg.breaker().conductingequipment().DebugString()); // Keep conducting equipment
        CHECK(publisher->last_message.eventmessageinfo().messageinfo().DebugString() == msg.eventmessageinfo().messageinfo().DebugString()); // Keep message info
    }

    SECTION("Change value in message identifier")
    {
        msg.mutable_eventmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value("2c7e7334-48b2-4948-9c09-77968e07ee95");
        filter.publish(msg);
        CHECK(publisher->num_calls == 1);
    }
}
