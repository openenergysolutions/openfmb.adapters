#include "adapter-api/config/generated/SolarControlProfileConfigModelVisitor.h"
#include "../DescriptorPathImpl.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_solarmodule_SolarCSG(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ScheduleCSG(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_CheckConditions(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_solarmodule_SolarControlScheduleFSCH(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_google_protobuf_BoolValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_solarmodule_SolarControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_solarmodule_SolarControlFSCC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_solarmodule_SolarPoint(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_SchedulePoint(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlScheduleFSCH(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_solarmodule_SolarInverter(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlFSCC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_Unit(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    DescriptorPathImpl path;

    // this is so that we can reuse the same generators for child visitors
    const auto context = [](solarmodule::SolarControlProfile& profile) { return &profile; };

    path.push(commonmodule::ControlMessageInfo::descriptor());
    if(visitor.start_message_field("controlMessageInfo", path))
    {
        visit_commonmodule_ControlMessageInfo([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_controlmessageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_ied(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarControl::descriptor());
    if(visitor.start_message_field("solarControl", path))
    {
        visit_solarmodule_SolarControl([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_solarcontrol(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarInverter::descriptor());
    if(visitor.start_message_field("solarInverter", path))
    {
        visit_solarmodule_SolarInverter([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_solarinverter(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

// ---- template definitions for child types ----

template <class C>
void visit_solarmodule_SolarCSG(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        path.push(solarmodule::SolarPoint::descriptor());
        const auto count = visitor.start_repeated_message_field("crvpts", path);
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_solarmodule_SolarPoint(
                [context, i, max = count](solarmodule::SolarControlProfile& profile)
                {
                    const auto repeated = context(profile)->mutable_crvpts();
                    if(repeated->size() < max)
                    {
                        repeated->Reserve(max);
                        // add items until we're at max requested capacity
                        for(auto j = repeated->size(); j < max; ++j)
                        {
                            repeated->Add();
                        }
                    }
                    return repeated->Mutable(i);
                }
                , path, visitor
            );
            visitor.end_iteration();
        }
        visitor.end_message_field();
        path.pop();
    }
}

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, float> setter = [context](solarmodule::SolarControlProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::BoolValue::descriptor());
    if(visitor.start_message_field("modBlk", path))
    {
        visit_google_protobuf_BoolValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_modblk(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::NamedObject::descriptor());
    if(visitor.start_message_field("namedObject", path))
    {
        visit_commonmodule_NamedObject([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_namedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarControlProfile, std::string> setter = [context](solarmodule::SolarControlProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_RampRate(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("negativeRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("positiveRealPowerKWPerMin", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("messageTimeStamp", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ScheduleCSG(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        path.push(commonmodule::SchedulePoint::descriptor());
        const auto count = visitor.start_repeated_message_field("crvpts", path);
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_SchedulePoint(
                [context, i, max = count](solarmodule::SolarControlProfile& profile)
                {
                    const auto repeated = context(profile)->mutable_crvpts();
                    if(repeated->size() < max)
                    {
                        repeated->Reserve(max);
                        // add items until we're at max requested capacity
                        for(auto j = repeated->size(); j < max; ++j)
                        {
                            repeated->Add();
                        }
                    }
                    return repeated->Mutable(i);
                }
                , path, visitor
            );
            visitor.end_iteration();
        }
        visitor.end_message_field();
        path.pop();
    }

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("xD", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_xd(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("xDU", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_xdu(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("yD", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_yd(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("yDU", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_ydu(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Unit::descriptor());
    if(visitor.start_message_field("yUnits", path))
    {
        visit_commonmodule_Unit([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_yunits(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("zD", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_zd(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("zDU", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_zdu(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Unit::descriptor());
    if(visitor.start_message_field("zUnits", path))
    {
        visit_commonmodule_Unit([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_zunits(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_CheckConditions(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(google::protobuf::BoolValue::descriptor());
    if(visitor.start_message_field("interlockCheck", path))
    {
        visit_google_protobuf_BoolValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_interlockcheck(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::BoolValue::descriptor());
    if(visitor.start_message_field("synchroCheck", path))
    {
        visit_google_protobuf_BoolValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_synchrocheck(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarControlScheduleFSCH(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(solarmodule::SolarCSG::descriptor());
    if(visitor.start_message_field("ValDCSG", path))
    {
        visit_solarmodule_SolarCSG([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_valdcsg(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, bool> setter = [context](solarmodule::SolarControlProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_google_protobuf_BoolValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, bool> setter = [context](solarmodule::SolarControlProfile& profile, const bool& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::MessageInfo::descriptor());
    if(visitor.start_message_field("messageInfo", path))
    {
        visit_commonmodule_MessageInfo([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_messageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::ControlValue::descriptor());
    if(visitor.start_message_field("controlValue", path))
    {
        visit_commonmodule_ControlValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_controlvalue(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CheckConditions::descriptor());
    if(visitor.start_message_field("check", path))
    {
        visit_commonmodule_CheckConditions([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_check(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarControlFSCC::descriptor());
    if(visitor.start_message_field("solarControlFSCC", path))
    {
        visit_solarmodule_SolarControlFSCC([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_solarcontrolfscc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarControlFSCC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::ControlFSCC::descriptor());
    if(visitor.start_message_field("controlFSCC", path))
    {
        visit_commonmodule_ControlFSCC([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_controlfscc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarControlScheduleFSCH::descriptor());
    if(visitor.start_message_field("SolarControlScheduleFSCH", path))
    {
        visit_solarmodule_SolarControlScheduleFSCH([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_solarcontrolschedulefsch(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarPoint(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("frequencySetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENG_GridConnectModeKind::descriptor());
    if(visitor.start_message_field("mode", path))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_mode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("pctHzDroop", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_pcthzdroop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("pctVDroop", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_pctvdroop(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::RampRate::descriptor());
    if(visitor.start_message_field("rampRates", path))
    {
        visit_commonmodule_RampRate([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_ramprates(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("reactivePwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("realPwrSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("reset", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_reset(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Optional_StateKind::descriptor());
    if(visitor.start_message_field("state", path))
    {
        visit_commonmodule_Optional_StateKind([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_state(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("voltageSetPointEnabled", path))
    {
        visit_commonmodule_ControlDPC([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlTimestamp::descriptor());
    if(visitor.start_message_field("xVal", path))
    {
        visit_commonmodule_ControlTimestamp([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_xval(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, std::string> setter = [context](solarmodule::SolarControlProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, uint32_t> setter = [context](solarmodule::SolarControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<solarmodule::SolarControlProfile, uint64_t> setter = [context](solarmodule::SolarControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    path.push(commonmodule::TimeQuality::descriptor());
    if(visitor.start_message_field("tq", path))
    {
        visit_commonmodule_TimeQuality([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_tq(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, uint32_t> setter = [context](solarmodule::SolarControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<solarmodule::SolarControlProfile, uint64_t> setter = [context](solarmodule::SolarControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, int> setter = [context](solarmodule::SolarControlProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_SchedulePoint(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::ControlTimestamp::descriptor());
    if(visitor.start_message_field("xVal", path))
    {
        visit_commonmodule_ControlTimestamp([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_xval(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarControlProfile, float> setter = [context](solarmodule::SolarControlProfile& profile, const float& value) { context(profile)->set_yval(value); };
        visitor.handle("yVal", setter);
    }

    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("zVal", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_zval(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlScheduleFSCH(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::ScheduleCSG::descriptor());
    if(visitor.start_message_field("ValACSG", path))
    {
        visit_commonmodule_ScheduleCSG([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_valacsg(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("mRID", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_mrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, int> setter = [context](solarmodule::SolarControlProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::GridConnectModeKind_descriptor());
    }

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("setValExtension", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_setvalextension(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarInverter(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipment::descriptor());
    if(visitor.start_message_field("conductingEquipment", path))
    {
        visit_commonmodule_ConductingEquipment([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_conductingequipment(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlFSCC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    path.push(commonmodule::LogicalNodeForControl::descriptor());
    if(visitor.start_message_field("logicalNodeForControl", path))
    {
        visit_commonmodule_LogicalNodeForControl([context](solarmodule::SolarControlProfile& profile) { return context(profile)->mutable_logicalnodeforcontrol(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        path.push(commonmodule::ControlScheduleFSCH::descriptor());
        const auto count = visitor.start_repeated_message_field("controlschedulefsch", path);
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            visit_commonmodule_ControlScheduleFSCH(
                [context, i, max = count](solarmodule::SolarControlProfile& profile)
                {
                    const auto repeated = context(profile)->mutable_controlschedulefsch();
                    if(repeated->size() < max)
                    {
                        repeated->Reserve(max);
                        // add items until we're at max requested capacity
                        for(auto j = repeated->size(); j < max; ++j)
                        {
                            repeated->Add();
                        }
                    }
                    return repeated->Mutable(i);
                }
                , path, visitor
            );
            visitor.end_iteration();
        }
        visitor.end_message_field();
        path.pop();
    }
}

template <class C>
void visit_commonmodule_Unit(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, int> setter = [context](solarmodule::SolarControlProfile& profile, const int& value) { context(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); };
        visitor.handle("multiplier", setter, commonmodule::UnitMultiplierKind_descriptor());
    }

    {
        const setter_t<solarmodule::SolarControlProfile, int> setter = [context](solarmodule::SolarControlProfile& profile, const int& value) { context(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("SIUnit", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarControlProfile, bool> setter = [context](solarmodule::SolarControlProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<solarmodule::SolarControlProfile, bool> setter = [context](solarmodule::SolarControlProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<solarmodule::SolarControlProfile, bool> setter = [context](solarmodule::SolarControlProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<solarmodule::SolarControlProfile, int> setter = [context](solarmodule::SolarControlProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

} // end namespace adapter
