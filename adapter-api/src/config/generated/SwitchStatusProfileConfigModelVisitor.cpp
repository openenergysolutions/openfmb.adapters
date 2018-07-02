#include "adapter-api/config/generated/SwitchStatusProfileConfigModelVisitor.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_commonmodule_StatusValue(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusDPS(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchStatusXSWI(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_switchmodule_ProtectedSwitch(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchStatus(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto context = [](switchmodule::SwitchStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_ied(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_protectedswitch(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("switchStatus", switchmodule::SwitchStatus::descriptor()))
    {
        visit_switchmodule_SwitchStatus([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatus(); }, visitor);
    }
    visitor.end_message_field();
}

// ---- template definitions for child types ----

template <class C>
void visit_commonmodule_StatusValue(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_StatusDPS(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DbPosKind_descriptor());
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchStatusProfile, std::string> setter = [context](switchmodule::SwitchStatusProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchStatusProfile, uint32_t> setter = [context](switchmodule::SwitchStatusProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, uint64_t> setter = [context](switchmodule::SwitchStatusProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_tq(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_d(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::HealthKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_badreference(value); };
        visitor.handle("badReference", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_failure(value); };
        visitor.handle("failure", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_inaccurate(value); };
        visitor.handle("inaccurate", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_inconsistent(value); };
        visitor.handle("inconsistent", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_olddata(value); };
        visitor.handle("oldData", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_oscillatory(value); };
        visitor.handle("oscillatory", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_outofrange(value); };
        visitor.handle("outOfRange", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_overflow(value); };
        visitor.handle("overflow", setter);
    }
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_namedobject(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<switchmodule::SwitchStatusProfile, std::string> setter = [context](switchmodule::SwitchStatusProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("Beh", commonmodule::ENS_BehaviourModeKind::descriptor()))
    {
        visit_commonmodule_ENS_BehaviourModeKind([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_beh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("EEHealth", commonmodule::ENS_HealthKind::descriptor()))
    {
        visit_commonmodule_ENS_HealthKind([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_eehealth(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::BehaviourModeKind_descriptor());
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_mrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_switchmodule_SwitchStatusXSWI(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("Pos", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_pos(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_detailqual(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_operatorblocked(value); };
        visitor.handle("operatorBlocked", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); };
        visitor.handle("source", setter, commonmodule::SourceKind_descriptor());
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_test(value); };
        visitor.handle("test", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); };
        visitor.handle("validity", setter, commonmodule::ValidityKind_descriptor());
    }
}

template <class C>
void visit_switchmodule_ProtectedSwitch(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_switchmodule_SwitchStatus(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusvalue(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("switchStatusXSWI", switchmodule::SwitchStatusXSWI::descriptor()))
    {
        visit_switchmodule_SwitchStatusXSWI([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatusxswi(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DynamicTestKind_descriptor());
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, bool> setter = [context](switchmodule::SwitchStatusProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

} // end namespace adapter
