#include "adapter-api/config/generated/SolarStatusProfileMutableModelVisitor.h"
#include "../DescriptorPathImpl.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_solarmodule_SolarStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarPointStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_StatusSPS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarEventAndStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_solarmodule_SolarInverter(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    DescriptorPathImpl path;

    // this is so that we can reuse the same generators for child visitors
    const auto context = [](solarmodule::SolarStatusProfile& profile) { return &profile; };

    path.push(commonmodule::StatusMessageInfo::descriptor());
    if(visitor.start_message_field("statusMessageInfo", path))
    {
        visit_commonmodule_StatusMessageInfo([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_statusmessageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_ied(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarInverter::descriptor());
    if(visitor.start_message_field("solarInverter", path))
    {
        visit_solarmodule_SolarInverter([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarinverter(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarStatus::descriptor());
    if(visitor.start_message_field("solarStatus", path))
    {
        visit_solarmodule_SolarStatus([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

// ---- template definitions for child types ----

template <class C>
void visit_solarmodule_SolarStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(solarmodule::SolarEventAndStatusZGEN::descriptor());
    if(visitor.start_message_field("solarEventAndStatusZGEN", path))
    {
        visit_solarmodule_SolarEventAndStatusZGEN([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solareventandstatuszgen(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENG_GridConnectModeKind::descriptor());
    if(visitor.start_message_field("GriMod", path))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_grimod(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, float> setter = [context](solarmodule::SolarStatusProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarPointStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("frequencySetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENG_GridConnectModeKind::descriptor());
    if(visitor.start_message_field("mode", path))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_mode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("pctHzDroop", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pcthzdroop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("pctVDroop", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pctvdroop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::RampRate::descriptor());
    if(visitor.start_message_field("rampRates", path))
    {
        visit_commonmodule_RampRate([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_ramprates(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("reactivePwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("realPwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Optional_StateKind::descriptor());
    if(visitor.start_message_field("state", path))
    {
        visit_commonmodule_Optional_StateKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_state(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("voltageSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::NamedObject::descriptor());
    if(visitor.start_message_field("namedObject", path))
    {
        visit_commonmodule_NamedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_namedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarStatusProfile, std::string> setter = [context](solarmodule::SolarStatusProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("messageTimeStamp", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::MessageInfo::descriptor());
    if(visitor.start_message_field("messageInfo", path))
    {
        visit_commonmodule_MessageInfo([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_messageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_StatusSPS(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_stval(value); };
        visitor.handle("stVal", setter);
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, bool> setter = [context](solarmodule::SolarStatusProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::DetailQual::descriptor());
    if(visitor.start_message_field("detailQual", path))
    {
        visit_commonmodule_DetailQual([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_detailqual(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

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
void visit_solarmodule_SolarStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::StatusValue::descriptor());
    if(visitor.start_message_field("statusValue", path))
    {
        visit_commonmodule_StatusValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_statusvalue(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarStatusZGEN::descriptor());
    if(visitor.start_message_field("solarStatusZGEN", path))
    {
        visit_solarmodule_SolarStatusZGEN([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_solarstatuszgen(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, std::string> setter = [context](solarmodule::SolarStatusProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, uint32_t> setter = [context](solarmodule::SolarStatusProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<solarmodule::SolarStatusProfile, uint64_t> setter = [context](solarmodule::SolarStatusProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    path.push(commonmodule::TimeQuality::descriptor());
    if(visitor.start_message_field("tq", path))
    {
        visit_commonmodule_TimeQuality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_tq(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_HealthKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("d", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_d(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::HealthKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_solarmodule_SolarEventAndStatusZGEN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNodeForEventAndStatus::descriptor());
    if(visitor.start_message_field("logicalNodeForEventAndStatus", path))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_logicalnodeforeventandstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("AuxPwrSt", path))
    {
        visit_commonmodule_StatusSPS([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_auxpwrst(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_DynamicTestKind::descriptor());
    if(visitor.start_message_field("DynamicTest", path))
    {
        visit_commonmodule_ENS_DynamicTestKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_dynamictest(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::StatusSPS::descriptor());
    if(visitor.start_message_field("EmgStop", path))
    {
        visit_commonmodule_StatusSPS([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_emgstop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarPointStatus::descriptor());
    if(visitor.start_message_field("PointStatus", path))
    {
        visit_solarmodule_SolarPointStatus([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_pointstatus(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
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
void visit_commonmodule_LogicalNodeForEventAndStatus(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_BehaviourModeKind::descriptor());
    if(visitor.start_message_field("Beh", path))
    {
        visit_commonmodule_ENS_BehaviourModeKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_beh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENS_HealthKind::descriptor());
    if(visitor.start_message_field("EEHealth", path))
    {
        visit_commonmodule_ENS_HealthKind([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_eehealth(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_BehaviourModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::BehaviourModeKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("mRID", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_mrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarInverter(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipment::descriptor());
    if(visitor.start_message_field("conductingEquipment", path))
    {
        visit_commonmodule_ConductingEquipment([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_conductingequipment(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::GridConnectModeKind_descriptor());
    }

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("setValExtension", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_setvalextension(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENS_DynamicTestKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
{
    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarStatusProfile, int> setter = [context](solarmodule::SolarStatusProfile& profile, const int& value) { context(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); };
        visitor.handle("stVal", setter, commonmodule::DynamicTestKind_descriptor());
    }

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarStatusProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarStatusProfile>& visitor)
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
