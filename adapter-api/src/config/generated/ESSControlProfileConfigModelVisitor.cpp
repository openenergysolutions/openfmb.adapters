#include "adapter-api/config/generated/ESSControlProfileConfigModelVisitor.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_essmodule_ESSCSG(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ESS(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ScheduleCSG(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_CheckConditions(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_essmodule_ESSControlScheduleFSCH(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_essmodule_ESSControl(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_essmodule_ENG_ESSFunctionKind(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_essmodule_ESSPoint(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_SchedulePoint(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlScheduleFSCH(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_essmodule_ENG_ESSFunctionParameter(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlFSCC(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_essmodule_EssControlFSCC(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto context = [](essmodule::ESSControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_controlmessageinfo(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_ess(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("essControl", essmodule::ESSControl::descriptor()))
    {
        visit_essmodule_ESSControl([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_esscontrol(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_ied(); }, visitor);
    }
    visitor.end_message_field();
}

// ---- template definitions for child types ----

template <class C>
void visit_essmodule_ESSCSG(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", essmodule::ESSPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_essmodule_ESSPoint(
                    [context, i, max = count](essmodule::ESSControlProfile& profile)
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
                    , visitor
                );
                visitor.end_iteration();
        }
        visitor.end_message_field();
    }
}

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, float> setter = [context](essmodule::ESSControlProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_modblk(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ESS(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_conductingequipment(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_namedobject(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSControlProfile, std::string> setter = [context](essmodule::ESSControlProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("negativeRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ScheduleCSG(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_commonmodule_SchedulePoint(
                    [context, i, max = count](essmodule::ESSControlProfile& profile)
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
                    , visitor
                );
                visitor.end_iteration();
        }
        visitor.end_message_field();
    }

    if(visitor.start_message_field("xD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_xd(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("xDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_xdu(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("yD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_yd(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("yDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_ydu(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("yUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_yunits(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("zD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_zd(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("zDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_zdu(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("zUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_zunits(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_CheckConditions(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_interlockcheck(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_synchrocheck(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ESSControlScheduleFSCH(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", essmodule::ESSCSG::descriptor()))
    {
        visit_essmodule_ESSCSG([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_valdcsg(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, bool> setter = [context](essmodule::ESSControlProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_essmodule_ESSControl(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_controlvalue(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_check(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("essControlFSCC", essmodule::EssControlFSCC::descriptor()))
    {
        visit_essmodule_EssControlFSCC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_esscontrolfscc(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ENG_ESSFunctionKind(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, int> setter = [context](essmodule::ESSControlProfile& profile, const int& value) { context(profile)->set_setval(static_cast<essmodule::ESSFunctionKind>(value)); };
        visitor.handle("setVal", setter, essmodule::ESSFunctionKind_descriptor());
    }

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_setvalextension(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, bool> setter = [context](essmodule::ESSControlProfile& profile, const bool& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_messageinfo(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ESSPoint(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_blackstartenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_frequencysetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("function", essmodule::ENG_ESSFunctionKind::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionKind([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_function(); }, visitor);
    }
    visitor.end_message_field();

    {
        const auto count = visitor.start_repeated_message_field("functionparameter", essmodule::ENG_ESSFunctionParameter::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_essmodule_ENG_ESSFunctionParameter(
                    [context, i, max = count](essmodule::ESSControlProfile& profile)
                    {
                        const auto repeated = context(profile)->mutable_functionparameter();
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
                    , visitor
                );
                visitor.end_iteration();
        }
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_mode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_pcthzdroop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_pctvdroop(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_ramprates(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_reset(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_state(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_syncbacktogrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_transtoislndongridlossenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_voltagesetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_xval(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, std::string> setter = [context](essmodule::ESSControlProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, uint32_t> setter = [context](essmodule::ESSControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<essmodule::ESSControlProfile, uint64_t> setter = [context](essmodule::ESSControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_tq(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, uint32_t> setter = [context](essmodule::ESSControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<essmodule::ESSControlProfile, uint64_t> setter = [context](essmodule::ESSControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, int> setter = [context](essmodule::ESSControlProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_SchedulePoint(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_xval(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSControlProfile, float> setter = [context](essmodule::ESSControlProfile& profile, const float& value) { context(profile)->set_yval(value); };
        visitor.handle("yVal", setter);
    }

    if(visitor.start_message_field("zVal", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_zval(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlScheduleFSCH(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_valacsg(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_mrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ENG_ESSFunctionParameter(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, int> setter = [context](essmodule::ESSControlProfile& profile, const int& value) { context(profile)->set_name(static_cast<essmodule::ESSFunctionParameterKind>(value)); };
        visitor.handle("name", setter, essmodule::ESSFunctionParameterKind_descriptor());
    }

    if(visitor.start_message_field("unit", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_unit(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSControlProfile, int32_t> setter = [context](essmodule::ESSControlProfile& profile, const int32_t& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_ENG_GridConnectModeKind(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, int> setter = [context](essmodule::ESSControlProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::GridConnectModeKind_descriptor());
    }

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_setvalextension(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlFSCC(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_logicalnodeforcontrol(); }, visitor);
    }
    visitor.end_message_field();

    {
        const auto count = visitor.start_repeated_message_field("controlschedulefsch", commonmodule::ControlScheduleFSCH::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_commonmodule_ControlScheduleFSCH(
                    [context, i, max = count](essmodule::ESSControlProfile& profile)
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
                    , visitor
                );
                visitor.end_iteration();
        }
        visitor.end_message_field();
    }
}

template <class C>
void visit_essmodule_EssControlFSCC(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_controlfscc(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("essControlScheduleFSCH", essmodule::ESSControlScheduleFSCH::descriptor()))
    {
        visit_essmodule_ESSControlScheduleFSCH([context](essmodule::ESSControlProfile& profile) { return context(profile)->mutable_esscontrolschedulefsch(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, int> setter = [context](essmodule::ESSControlProfile& profile, const int& value) { context(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); };
        visitor.handle("multiplier", setter, commonmodule::UnitMultiplierKind_descriptor());
    }

    {
        const setter_t<essmodule::ESSControlProfile, int> setter = [context](essmodule::ESSControlProfile& profile, const int& value) { context(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("SIUnit", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSControlProfile, bool> setter = [context](essmodule::ESSControlProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<essmodule::ESSControlProfile, bool> setter = [context](essmodule::ESSControlProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<essmodule::ESSControlProfile, bool> setter = [context](essmodule::ESSControlProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<essmodule::ESSControlProfile, int> setter = [context](essmodule::ESSControlProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

} // end namespace adapter
