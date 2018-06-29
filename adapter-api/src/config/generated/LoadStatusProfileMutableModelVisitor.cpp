#include "adapter-api/config/generated/LoadStatusProfileMutableModelVisitor.h"
#include "../DescriptorPathImpl.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_EnergyConsumer(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_loadmodule_LoadStatusZGLD(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusSPS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_loadmodule_LoadEventAndStatusZGLD(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_loadmodule_LoadPointStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_loadmodule_LoadStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    DescriptorPathImpl path;

    // this is so that we can reuse the same generators for child visitors
    const auto context = [](loadmodule::LoadStatusProfile& profile) { return &profile; };

    path.push(commonmodule::StatusMessageInfo::descriptor());
    if(visitor.start_message_field("statusMessageInfo", path))
    {
        visit_commonmodule_StatusMessageInfo([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::EnergyConsumer::descriptor());
    if(visitor.start_message_field("energyConsumer", path))
    {
        visit_commonmodule_EnergyConsumer([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_energyconsumer(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_ied(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(loadmodule::LoadStatus::descriptor());
    if(visitor.start_message_field("loadStatus", path))
    {
        visit_loadmodule_LoadStatus([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_loadstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

// ---- template definitions for child types ----

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::DetailQual::descriptor());
    if(visitor.start_message_field("detailQual", path))
    {
        visit_commonmodule_DetailQual([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_detailqual(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_operatorblocked(value); };
        visitor.handle("operatorBlocked", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, int> setter = [context](loadmodule::LoadStatusProfile& profile, const int& value) { context(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); };
        visitor.handle("source", setter, commonmodule::SourceKind_descriptor());
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_test(value); };
        visitor.handle("test", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, int> setter = [context](loadmodule::LoadStatusProfile& profile, const int& value) { context(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); };
        visitor.handle("validity", setter, commonmodule::ValidityKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_EnergyConsumer(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipment::descriptor());
    if(visitor.start_message_field("conductingEquipment", path))
    {
        visit_commonmodule_ConductingEquipment([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("operatingLimit", path))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_operatinglimit(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("mRID", path))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_mrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("messageTimeStamp", path))
    {
        visit_commonmodule_Timestamp([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_loadmodule_LoadStatusZGLD(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(loadmodule::LoadEventAndStatusZGLD::descriptor());
    if(visitor.start_message_field("loadEventAndStatusZGLD", path))
    {
        visit_loadmodule_LoadEventAndStatusZGLD([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_loadeventandstatuszgld(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadStatusProfile, int> setter = [context](loadmodule::LoadStatusProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusSPS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_stval(value); };
        visitor.handle("stVal", setter);
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadStatusProfile, uint32_t> setter = [context](loadmodule::LoadStatusProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, uint64_t> setter = [context](loadmodule::LoadStatusProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    path.push(commonmodule::TimeQuality::descriptor());
    if(visitor.start_message_field("tq", path))
    {
        visit_commonmodule_TimeQuality([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_tq(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<loadmodule::LoadStatusProfile, int> setter = [context](loadmodule::LoadStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::BehaviourModeKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<loadmodule::LoadStatusProfile, int> setter = [context](loadmodule::LoadStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DynamicTestKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_loadmodule_LoadEventAndStatusZGLD(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNodeForEventAndStatus::descriptor());
    if(visitor.start_message_field("logicalNodeForEventAndStatus", path))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_DynamicTestKind::descriptor());
    if(visitor.start_message_field("DynamicTest", path))
    {
        visit_commonmodule_ENS_DynamicTestKind([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("EmgStop", path))
    {
        visit_commonmodule_StatusSPS([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_emgstop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(loadmodule::LoadPointStatus::descriptor());
    if(visitor.start_message_field("PointStatus", path))
    {
        visit_loadmodule_LoadPointStatus([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_pointstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_loadmodule_LoadPointStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::RampRate::descriptor());
    if(visitor.start_message_field("rampRates", path))
    {
        visit_commonmodule_RampRate([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_ramprates(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("reactivePwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("realPwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("reset", path))
    {
        visit_commonmodule_ControlDPC([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_reset(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Optional_StateKind::descriptor());
    if(visitor.start_message_field("state", path))
    {
        visit_commonmodule_Optional_StateKind([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_state(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("d", path))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_d(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<loadmodule::LoadStatusProfile, int> setter = [context](loadmodule::LoadStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::HealthKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, int> setter = [context](loadmodule::LoadStatusProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

template <class C>
void visit_loadmodule_LoadStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::StatusValue::descriptor());
    if(visitor.start_message_field("statusValue", path))
    {
        visit_commonmodule_StatusValue([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_statusvalue(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(loadmodule::LoadStatusZGLD::descriptor());
    if(visitor.start_message_field("loadStatusZGLD", path))
    {
        visit_loadmodule_LoadStatusZGLD([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_loadstatuszgld(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadStatusProfile, std::string> setter = [context](loadmodule::LoadStatusProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_BehaviourModeKind::descriptor());
    if(visitor.start_message_field("Beh", path))
    {
        visit_commonmodule_ENS_BehaviourModeKind([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_beh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_HealthKind::descriptor());
    if(visitor.start_message_field("EEHealth", path))
    {
        visit_commonmodule_ENS_HealthKind([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_eehealth(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::MessageInfo::descriptor());
    if(visitor.start_message_field("messageInfo", path))
    {
        visit_commonmodule_MessageInfo([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::NamedObject::descriptor());
    if(visitor.start_message_field("namedObject", path))
    {
        visit_commonmodule_NamedObject([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_namedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<loadmodule::LoadStatusProfile, std::string> setter = [context](loadmodule::LoadStatusProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_badreference(value); };
        visitor.handle("badReference", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_failure(value); };
        visitor.handle("failure", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_inaccurate(value); };
        visitor.handle("inaccurate", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_inconsistent(value); };
        visitor.handle("inconsistent", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_olddata(value); };
        visitor.handle("oldData", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_oscillatory(value); };
        visitor.handle("oscillatory", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_outofrange(value); };
        visitor.handle("outOfRange", setter);
    }

    {
        const setter_t<loadmodule::LoadStatusProfile, bool> setter = [context](loadmodule::LoadStatusProfile& profile, const bool& value) { context(profile)->set_overflow(value); };
        visitor.handle("overflow", setter);
    }
}

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadStatusProfile, float> setter = [context](loadmodule::LoadStatusProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

} // end namespace adapter
