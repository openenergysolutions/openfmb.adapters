#include "adapter-api/config/generated/LoadControlProfileConfigModelVisitor.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_loadmodule_LoadControlFSCC(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_EnergyConsumer(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_loadmodule_LoadControl(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ScheduleCSG(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_CheckConditions(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_loadmodule_LoadCSG(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_loadmodule_LoadControlScheduleFSCH(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_SchedulePoint(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlScheduleFSCH(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_loadmodule_LoadPoint(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlFSCC(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto context = [](loadmodule::LoadControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_controlmessageinfo(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_energyconsumer(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_ied(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("loadControl", loadmodule::LoadControl::descriptor()))
    {
        visit_loadmodule_LoadControl([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_loadcontrol(); }, visitor);
    }
    visitor.end_message_field();
}

// ---- template definitions for child types ----

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, float> setter = [context](loadmodule::LoadControlProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_loadmodule_LoadControlFSCC(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_controlfscc(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("loadControlScheduleFSCH", loadmodule::LoadControlScheduleFSCH::descriptor()))
    {
        visit_loadmodule_LoadControlScheduleFSCH([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_loadcontrolschedulefsch(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_modblk(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_EnergyConsumer(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_conductingequipment(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("operatingLimit", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_operatinglimit(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_namedobject(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<loadmodule::LoadControlProfile, std::string> setter = [context](loadmodule::LoadControlProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_loadmodule_LoadControl(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_controlvalue(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_check(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("loadControlFSCC", loadmodule::LoadControlFSCC::descriptor()))
    {
        visit_loadmodule_LoadControlFSCC([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_loadcontrolfscc(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_RampRate(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_negativereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("negativeRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_negativerealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_positivereactivepowerkvarpermin(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("positiveRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_positiverealpowerkwpermin(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ScheduleCSG(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_commonmodule_SchedulePoint(
                    [context, i, max = count](loadmodule::LoadControlProfile& profile)
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
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_xd(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("xDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_xdu(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("yD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_yd(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("yDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_ydu(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("yUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_yunits(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("zD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_zd(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("zDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_zdu(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("zUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_zunits(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_CheckConditions(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_interlockcheck(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_synchrocheck(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, bool> setter = [context](loadmodule::LoadControlProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, bool> setter = [context](loadmodule::LoadControlProfile& profile, const bool& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_messageinfo(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_loadmodule_LoadCSG(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", loadmodule::LoadPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_loadmodule_LoadPoint(
                    [context, i, max = count](loadmodule::LoadControlProfile& profile)
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
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, std::string> setter = [context](loadmodule::LoadControlProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, uint32_t> setter = [context](loadmodule::LoadControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<loadmodule::LoadControlProfile, uint64_t> setter = [context](loadmodule::LoadControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_tq(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, uint32_t> setter = [context](loadmodule::LoadControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<loadmodule::LoadControlProfile, uint64_t> setter = [context](loadmodule::LoadControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }
}

template <class C>
void visit_loadmodule_LoadControlScheduleFSCH(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", loadmodule::LoadCSG::descriptor()))
    {
        visit_loadmodule_LoadCSG([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_valdcsg(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_Optional_StateKind(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, int> setter = [context](loadmodule::LoadControlProfile& profile, const int& value) { context(profile)->set_value(static_cast<commonmodule::StateKind>(value)); };
        visitor.handle("value", setter, commonmodule::StateKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_SchedulePoint(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_xval(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<loadmodule::LoadControlProfile, float> setter = [context](loadmodule::LoadControlProfile& profile, const float& value) { context(profile)->set_yval(value); };
        visitor.handle("yVal", setter);
    }

    if(visitor.start_message_field("zVal", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_zval(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlScheduleFSCH(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_valacsg(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_mrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_loadmodule_LoadPoint(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_ramprates(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_reactivepwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_realpwrsetpointenabled(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_reset(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_state(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_xval(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlFSCC(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl([context](loadmodule::LoadControlProfile& profile) { return context(profile)->mutable_logicalnodeforcontrol(); }, visitor);
    }
    visitor.end_message_field();

    {
        const auto count = visitor.start_repeated_message_field("controlschedulefsch", commonmodule::ControlScheduleFSCH::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_commonmodule_ControlScheduleFSCH(
                    [context, i, max = count](loadmodule::LoadControlProfile& profile)
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
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, int> setter = [context](loadmodule::LoadControlProfile& profile, const int& value) { context(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); };
        visitor.handle("multiplier", setter, commonmodule::UnitMultiplierKind_descriptor());
    }

    {
        const setter_t<loadmodule::LoadControlProfile, int> setter = [context](loadmodule::LoadControlProfile& profile, const int& value) { context(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("SIUnit", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const setter_t<loadmodule::LoadControlProfile, bool> setter = [context](loadmodule::LoadControlProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<loadmodule::LoadControlProfile, bool> setter = [context](loadmodule::LoadControlProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<loadmodule::LoadControlProfile, bool> setter = [context](loadmodule::LoadControlProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<loadmodule::LoadControlProfile, int> setter = [context](loadmodule::LoadControlProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

} // end namespace adapter
