#include "adapter-api/config/generated/SolarStatusProfileConfigModelVisitor.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_solarmodule_SolarStatusZGEN(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusValue(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarPointStatus(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusSPS(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarStatus(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarEventAndStatusZGEN(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarInverter(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto context = [](solarmodule::SolarStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_ied(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("solarInverter", solarmodule::SolarInverter::descriptor()))
    {
        visit_solarmodule_SolarInverter([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarinverter(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("solarStatus", solarmodule::SolarStatus::descriptor()))
    {
        visit_solarmodule_SolarStatus([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarstatus(); }, visitor);
    }
    visitor.end_message_field();
}

// ---- template definitions for child types ----

template <class C>
void visit_solarmodule_SolarStatusZGEN(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("solarEventAndStatusZGEN", solarmodule::SolarEventAndStatusZGEN::descriptor()))
    {
        visit_solarmodule_SolarEventAndStatusZGEN([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solareventandstatuszgen(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_grimod(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_StatusValue(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, float> setter = [context](solarmodule::SolarStatusProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_solarmodule_SolarPointStatus(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_mode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pcthzdroop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pctvdroop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_ramprates(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_state(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_namedobject(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<solarmodule::SolarStatusProfile, std::string> setter = [context](solarmodule::SolarStatusProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("negativeRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_StatusSPS(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_stval(value); };
        visitor.handle("stVal", setter);
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_detailqual(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_operatorblocked(value); };
        visitor.handle("operatorBlocked", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); };
        visitor.handle("source", setter, commonmodule::SourceKind_descriptor());
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_test(value); };
        visitor.handle("test", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); };
        visitor.handle("validity", setter, commonmodule::ValidityKind_descriptor());
    }
}

template <class C>
void visit_solarmodule_SolarStatus(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_statusvalue(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("solarStatusZGEN", solarmodule::SolarStatusZGEN::descriptor()))
    {
        visit_solarmodule_SolarStatusZGEN([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarstatuszgen(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, std::string> setter = [context](solarmodule::SolarStatusProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, uint32_t> setter = [context](solarmodule::SolarStatusProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, uint64_t> setter = [context](solarmodule::SolarStatusProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_tq(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_d(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::HealthKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_solarmodule_SolarEventAndStatusZGEN(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("AuxPwrSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_auxpwrst(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_emgstop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("PointStatus", solarmodule::SolarPointStatus::descriptor()))
    {
        visit_solarmodule_SolarPointStatus([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pointstatus(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_badreference(value); };
        visitor.handle("badReference", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_failure(value); };
        visitor.handle("failure", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_inaccurate(value); };
        visitor.handle("inaccurate", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_inconsistent(value); };
        visitor.handle("inconsistent", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_olddata(value); };
        visitor.handle("oldData", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_oscillatory(value); };
        visitor.handle("oscillatory", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_outofrange(value); };
        visitor.handle("outOfRange", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_overflow(value); };
        visitor.handle("overflow", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("Beh", commonmodule::ENS_BehaviourModeKind::descriptor()))
    {
        visit_commonmodule_ENS_BehaviourModeKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_beh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("EEHealth", commonmodule::ENS_HealthKind::descriptor()))
    {
        visit_commonmodule_ENS_HealthKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_eehealth(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::BehaviourModeKind_descriptor());
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_mrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_solarmodule_SolarInverter(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::GridConnectModeKind_descriptor());
    }

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_setvalextension(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DynamicTestKind_descriptor());
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

} // end namespace adapter
