#include "adapter-api/config/generated/SwitchStatusProfileConfigModelVisitor.h"
#include "../DescriptorPathImpl.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusDPS(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchStatusXSWI(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_switchmodule_ProtectedSwitch(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchStatus(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    DescriptorPathImpl path;

    // this is so that we can reuse the same generators for child visitors
    const auto context = [](switchmodule::SwitchStatusProfile& profile) { return &profile; };

    path.push(commonmodule::StatusMessageInfo::descriptor());
    if(visitor.start_message_field("statusMessageInfo", path))
    {
        visit_commonmodule_StatusMessageInfo([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_ied(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(switchmodule::ProtectedSwitch::descriptor());
    if(visitor.start_message_field("protectedSwitch", path))
    {
        visit_switchmodule_ProtectedSwitch([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_protectedswitch(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(switchmodule::SwitchStatus::descriptor());
    if(visitor.start_message_field("switchStatus", path))
    {
        visit_switchmodule_SwitchStatus([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

// ---- template definitions for child types ----

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusDPS(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DbPosKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchStatusProfile, std::string> setter = [context](switchmodule::SwitchStatusProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchStatusProfile, uint32_t> setter = [context](switchmodule::SwitchStatusProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<switchmodule::SwitchStatusProfile, uint64_t> setter = [context](switchmodule::SwitchStatusProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    path.push(commonmodule::TimeQuality::descriptor());
    if(visitor.start_message_field("tq", path))
    {
        visit_commonmodule_TimeQuality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_tq(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("d", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_d(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::HealthKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
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
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::NamedObject::descriptor());
    if(visitor.start_message_field("namedObject", path))
    {
        visit_commonmodule_NamedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_namedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<switchmodule::SwitchStatusProfile, std::string> setter = [context](switchmodule::SwitchStatusProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_BehaviourModeKind::descriptor());
    if(visitor.start_message_field("Beh", path))
    {
        visit_commonmodule_ENS_BehaviourModeKind([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_beh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_HealthKind::descriptor());
    if(visitor.start_message_field("EEHealth", path))
    {
        visit_commonmodule_ENS_HealthKind([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_eehealth(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::BehaviourModeKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("messageTimeStamp", path))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::MessageInfo::descriptor());
    if(visitor.start_message_field("messageInfo", path))
    {
        visit_commonmodule_MessageInfo([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("mRID", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_mrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_switchmodule_SwitchStatusXSWI(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNodeForEventAndStatus::descriptor());
    if(visitor.start_message_field("logicalNodeForEventAndStatus", path))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_DynamicTestKind::descriptor());
    if(visitor.start_message_field("DynamicTest", path))
    {
        visit_commonmodule_ENS_DynamicTestKind([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusDPS::descriptor());
    if(visitor.start_message_field("Pos", path))
    {
        visit_commonmodule_StatusDPS([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_pos(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::DetailQual::descriptor());
    if(visitor.start_message_field("detailQual", path))
    {
        visit_commonmodule_DetailQual([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_detailqual(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

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
void visit_switchmodule_ProtectedSwitch(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipment::descriptor());
    if(visitor.start_message_field("conductingEquipment", path))
    {
        visit_commonmodule_ConductingEquipment([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_switchmodule_SwitchStatus(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::StatusValue::descriptor());
    if(visitor.start_message_field("statusValue", path))
    {
        visit_commonmodule_StatusValue([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_statusvalue(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(switchmodule::SwitchStatusXSWI::descriptor());
    if(visitor.start_message_field("switchStatusXSWI", path))
    {
        visit_switchmodule_SwitchStatusXSWI([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_switchstatusxswi(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<switchmodule::SwitchStatusProfile, int> setter = [context](switchmodule::SwitchStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DynamicTestKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
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
