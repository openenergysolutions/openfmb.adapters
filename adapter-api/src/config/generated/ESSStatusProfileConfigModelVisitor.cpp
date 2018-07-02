#include "adapter-api/config/generated/ESSStatusProfileConfigModelVisitor.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_commonmodule_StatusValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSPointStatus(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ESS(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusSPS(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_EssStatusZBAT(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MV(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ENG_ESSFunctionKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_Int32Value(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSStatus(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSEventAndStatusZGEN(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ESSStatusZGEN(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_essmodule_ENG_ESSFunctionParameter(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto context = [](essmodule::ESSStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ess(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("essStatus", essmodule::ESSStatus::descriptor()))
    {
        visit_essmodule_ESSStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatus(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ied(); }, visitor);
    }
    visitor.end_message_field();
}

// ---- template definitions for child types ----

template <class C>
void visit_commonmodule_StatusValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, float> setter = [context](essmodule::ESSStatusProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_essmodule_ESSPointStatus(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_blackstartenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("function", essmodule::ENG_ESSFunctionKind::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_function(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("functionParameter", essmodule::ENG_ESSFunctionParameter::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionParameter([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_functionparameter(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_mode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pcthzdroop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pctvdroop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_ramprates(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_state(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_syncbacktogrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_transtoislndongridlossenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ESS(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_namedobject(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSStatusProfile, std::string> setter = [context](essmodule::ESSStatusProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("negativeRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_StatusSPS(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_stval(value); };
        visitor.handle("stVal", setter);
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_EssStatusZBAT(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("BatSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_batst(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_grimod(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("Soc", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_soc(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("Stdby", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_stdby(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, bool> setter = [context](essmodule::ESSStatusProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_detailqual(); }, visitor);
    }
    visitor.end_message_field();

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
void visit_commonmodule_MV(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_mag(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_units(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ENG_ESSFunctionKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_setval(static_cast<essmodule::ESSFunctionKind>(value)); };
        visitor.handle("setVal", setter, essmodule::ESSFunctionKind_descriptor());
    }

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_setvalextension(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_Int32Value(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int32_t> setter = [context](essmodule::ESSStatusProfile& profile, const int32_t& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_essmodule_ESSStatus(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_statusvalue(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("essStatusZBAT", essmodule::EssStatusZBAT::descriptor()))
    {
        visit_essmodule_EssStatusZBAT([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatuszbat(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("essStatusZGEN", essmodule::ESSStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSStatusZGEN([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_essstatuszgen(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ESSEventAndStatusZGEN(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("AuxPwrSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_auxpwrst(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_emgstop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("GnSynSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_gnsynst(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("PointStatus", essmodule::ESSPointStatus::descriptor()))
    {
        visit_essmodule_ESSPointStatus([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_pointstatus(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ESSStatusZGEN(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("eSSEventAndStatusZGEN", essmodule::ESSEventAndStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSEventAndStatusZGEN([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_esseventandstatuszgen(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, std::string> setter = [context](essmodule::ESSStatusProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, uint32_t> setter = [context](essmodule::ESSStatusProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<essmodule::ESSStatusProfile, uint64_t> setter = [context](essmodule::ESSStatusProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_tq(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_d(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::HealthKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
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
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("Beh", commonmodule::ENS_BehaviourModeKind::descriptor()))
    {
        visit_commonmodule_ENS_BehaviourModeKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_beh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("EEHealth", commonmodule::ENS_HealthKind::descriptor()))
    {
        visit_commonmodule_ENS_HealthKind([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_eehealth(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::BehaviourModeKind_descriptor());
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_mrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ENG_ESSFunctionParameter(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_name(static_cast<essmodule::ESSFunctionParameterKind>(value)); };
        visitor.handle("name", setter, essmodule::ESSFunctionParameterKind_descriptor());
    }

    if(visitor.start_message_field("unit", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_unit(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSStatusProfile, int32_t> setter = [context](essmodule::ESSStatusProfile& profile, const int32_t& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_f(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("i", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_i(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::GridConnectModeKind_descriptor());
    }

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_setvalextension(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSStatusProfile, int> setter = [context](essmodule::ESSStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DynamicTestKind_descriptor());
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
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
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<essmodule::ESSStatusProfile>& visitor)
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

} // end namespace adapter
