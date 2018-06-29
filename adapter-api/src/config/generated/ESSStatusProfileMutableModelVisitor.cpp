#include "adapter-api/config/generated/ESSStatusProfileMutableModelVisitor.h"
#include "../DescriptorPathImpl.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_Int32Value(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSPointStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusSPS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Unit(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ENG_ESSFunctionKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSEventAndStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MV(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_EssStatusZBAT(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ENG_ESSFunctionParameter(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ESS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    DescriptorPathImpl path;

    // this is so that we can reuse the same generators for child visitors
    const auto context = [](essmodule::ESSStatusProfile& profile) { return &profile; };

    path.push(commonmodule::StatusMessageInfo::descriptor());
    if(visitor.start_message_field("statusMessageInfo", path))
    {
        visit_commonmodule_StatusMessageInfo([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ESS::descriptor());
    if(visitor.start_message_field("ess", path))
    {
        visit_commonmodule_ESS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ess(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(essmodule::ESSStatus::descriptor());
    if(visitor.start_message_field("essStatus", path))
    {
        visit_essmodule_ESSStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ied(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

// ---- template definitions for child types ----

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::DetailQual::descriptor());
    if(visitor.start_message_field("detailQual", path))
    {
        visit_commonmodule_DetailQual([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_detailqual(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_operatorblocked(value); };
        visitor.handle("operatorBlocked", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); };
        visitor.handle("source", setter, commonmodule::SourceKind_descriptor());
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_test(value); };
        visitor.handle("test", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); };
        visitor.handle("validity", setter, commonmodule::ValidityKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("mRID", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_mrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("messageTimeStamp", path))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_google_protobuf_Int32Value(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int32_t> setter = [context](essmodule::ESSStatusProfile& profile, const int32_t& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_essmodule_ESSPointStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("blackStartEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_blackstartenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("frequencySetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(essmodule::ENG_ESSFunctionKind::descriptor());
    if(visitor.start_message_field("function", path))
    {
        visit_essmodule_ENG_ESSFunctionKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_function(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(essmodule::ENG_ESSFunctionParameter::descriptor());
    if(visitor.start_message_field("functionParameter", path))
    {
        visit_essmodule_ENG_ESSFunctionParameter([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_functionparameter(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENG_GridConnectModeKind::descriptor());
    if(visitor.start_message_field("mode", path))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_mode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("pctHzDroop", path))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pcthzdroop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("pctVDroop", path))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pctvdroop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::RampRate::descriptor());
    if(visitor.start_message_field("rampRates", path))
    {
        visit_commonmodule_RampRate([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ramprates(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("reactivePwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("realPwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Optional_StateKind::descriptor());
    if(visitor.start_message_field("state", path))
    {
        visit_commonmodule_Optional_StateKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_state(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("syncBackToGrid", path))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_syncbacktogrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("transToIslndOnGridLossEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_transtoislndongridlossenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("voltageSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusSPS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_stval(value); };
        visitor.handle("stVal", setter);
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_Unit(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); };
        visitor.handle("multiplier", setter, commonmodule::UnitMultiplierKind_descriptor());
    }

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("SIUnit", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, uint32_t> setter = [context](essmodule::ESSStatusProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, uint64_t> setter = [context](essmodule::ESSStatusProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    path.push(commonmodule::TimeQuality::descriptor());
    if(visitor.start_message_field("tq", path))
    {
        visit_commonmodule_TimeQuality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_tq(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_essmodule_ESSStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(essmodule::ESSEventAndStatusZGEN::descriptor());
    if(visitor.start_message_field("eSSEventAndStatusZGEN", path))
    {
        visit_essmodule_ESSEventAndStatusZGEN([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_esseventandstatuszgen(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_essmodule_ESSStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::StatusValue::descriptor());
    if(visitor.start_message_field("statusValue", path))
    {
        visit_commonmodule_StatusValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_statusvalue(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(essmodule::EssStatusZBAT::descriptor());
    if(visitor.start_message_field("essStatusZBAT", path))
    {
        visit_essmodule_EssStatusZBAT([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatuszbat(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(essmodule::ESSStatusZGEN::descriptor());
    if(visitor.start_message_field("essStatusZGEN", path))
    {
        visit_essmodule_ESSStatusZGEN([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatuszgen(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::GridConnectModeKind_descriptor());
    }

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("setValExtension", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_setvalextension(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_essmodule_ENG_ESSFunctionKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_setval(static_cast<essmodule::ESSFunctionKind>(value)); };
        visitor.handle("setVal", setter, essmodule::ESSFunctionKind_descriptor());
    }

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("setValExtension", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_setvalextension(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::BehaviourModeKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DynamicTestKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("f", path))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_f(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::Int32Value::descriptor());
    if(visitor.start_message_field("i", path))
    {
        visit_google_protobuf_Int32Value([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_i(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_essmodule_ESSEventAndStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNodeForEventAndStatus::descriptor());
    if(visitor.start_message_field("logicalNodeForEventAndStatus", path))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("AuxPwrSt", path))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_auxpwrst(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_DynamicTestKind::descriptor());
    if(visitor.start_message_field("DynamicTest", path))
    {
        visit_commonmodule_ENS_DynamicTestKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("EmgStop", path))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_emgstop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("GnSynSt", path))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_gnsynst(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(essmodule::ESSPointStatus::descriptor());
    if(visitor.start_message_field("PointStatus", path))
    {
        visit_essmodule_ESSPointStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pointstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("d", path))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_d(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::HealthKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, std::string> setter = [context](essmodule::ESSStatusProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_BehaviourModeKind::descriptor());
    if(visitor.start_message_field("Beh", path))
    {
        visit_commonmodule_ENS_BehaviourModeKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_beh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_HealthKind::descriptor());
    if(visitor.start_message_field("EEHealth", path))
    {
        visit_commonmodule_ENS_HealthKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_eehealth(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_MV(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::AnalogueValue::descriptor());
    if(visitor.start_message_field("mag", path))
    {
        visit_commonmodule_AnalogueValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_mag(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Unit::descriptor());
    if(visitor.start_message_field("units", path))
    {
        visit_commonmodule_Unit([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_units(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::MessageInfo::descriptor());
    if(visitor.start_message_field("messageInfo", path))
    {
        visit_commonmodule_MessageInfo([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_essmodule_EssStatusZBAT(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNodeForEventAndStatus::descriptor());
    if(visitor.start_message_field("logicalNodeForEventAndStatus", path))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("BatSt", path))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_batst(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENG_GridConnectModeKind::descriptor());
    if(visitor.start_message_field("GriMod", path))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_grimod(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::MV::descriptor());
    if(visitor.start_message_field("Soc", path))
    {
        visit_commonmodule_MV([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_soc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("Stdby", path))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_stdby(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::NamedObject::descriptor());
    if(visitor.start_message_field("namedObject", path))
    {
        visit_commonmodule_NamedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_namedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<essmodule::ESSStatusProfile, std::string> setter = [context](essmodule::ESSStatusProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_essmodule_ENG_ESSFunctionParameter(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_name(static_cast<essmodule::ESSFunctionParameterKind>(value)); };
        visitor.handle("name", setter, essmodule::ESSFunctionParameterKind_descriptor());
    }

    path.push(commonmodule::Unit::descriptor());
    if(visitor.start_message_field("unit", path))
    {
        visit_commonmodule_Unit([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_unit(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<essmodule::ESSStatusProfile, int32_t> setter = [context](essmodule::ESSStatusProfile& profile, const int32_t& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_badreference(value); };
        visitor.handle("badReference", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_failure(value); };
        visitor.handle("failure", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_inaccurate(value); };
        visitor.handle("inaccurate", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_inconsistent(value); };
        visitor.handle("inconsistent", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_olddata(value); };
        visitor.handle("oldData", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_oscillatory(value); };
        visitor.handle("oscillatory", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_outofrange(value); };
        visitor.handle("outOfRange", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_overflow(value); };
        visitor.handle("overflow", setter);
    }
}

template <class C>
void visit_commonmodule_ESS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipment::descriptor());
    if(visitor.start_message_field("conductingEquipment", path))
    {
        visit_commonmodule_ConductingEquipment([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, float> setter = [context](essmodule::ESSStatusProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

} // end namespace adapter
