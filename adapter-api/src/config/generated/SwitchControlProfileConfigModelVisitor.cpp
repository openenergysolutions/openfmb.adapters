#include "adapter-api/config/generated/SwitchControlProfileConfigModelVisitor.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_switchmodule_SwitchControl(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchControlScheduleFSCH(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlValue(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_CheckConditions(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchControlFSCC(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchCSG(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_ProtectedSwitch(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchPoint(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto context = [](switchmodule::SwitchControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_controlmessageinfo(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_ied(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_protectedswitch(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("switchControl", switchmodule::SwitchControl::descriptor()))
    {
        visit_switchmodule_SwitchControl([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrol(); }, visitor);
    }
    visitor.end_message_field();
}

// ---- template definitions for child types ----

template <class C>
void visit_switchmodule_SwitchControl(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_controlvalue(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_check(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("SwitchControlFSCC", switchmodule::SwitchControlFSCC::descriptor()))
    {
        visit_switchmodule_SwitchControlFSCC([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrolfscc(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_switchmodule_SwitchControlScheduleFSCH(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", switchmodule::SwitchCSG::descriptor()))
    {
        visit_switchmodule_SwitchCSG([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_valdcsg(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlValue(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_modblk(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, std::string> setter = [context](switchmodule::SwitchControlProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, uint32_t> setter = [context](switchmodule::SwitchControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<switchmodule::SwitchControlProfile, uint64_t> setter = [context](switchmodule::SwitchControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_tq(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, uint32_t> setter = [context](switchmodule::SwitchControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<switchmodule::SwitchControlProfile, uint64_t> setter = [context](switchmodule::SwitchControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }
}

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_namedobject(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<switchmodule::SwitchControlProfile, std::string> setter = [context](switchmodule::SwitchControlProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_CheckConditions(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_interlockcheck(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_synchrocheck(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_switchmodule_SwitchControlFSCC(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_logicalnodeforcontrol(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("switchControlScheduleFSCH", switchmodule::SwitchControlScheduleFSCH::descriptor()))
    {
        visit_switchmodule_SwitchControlScheduleFSCH([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrolschedulefsch(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_mrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, bool> setter = [context](switchmodule::SwitchControlProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_switchmodule_SwitchCSG(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", switchmodule::SwitchPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
                visit_switchmodule_SwitchPoint(
                    [context, i, max = count](switchmodule::SwitchControlProfile& profile)
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
void visit_switchmodule_ProtectedSwitch(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_conductingequipment(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_switchmodule_SwitchPoint(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("Pos", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_pos(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_xval(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, bool> setter = [context](switchmodule::SwitchControlProfile& profile, const bool& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, bool> setter = [context](switchmodule::SwitchControlProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<switchmodule::SwitchControlProfile, bool> setter = [context](switchmodule::SwitchControlProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<switchmodule::SwitchControlProfile, bool> setter = [context](switchmodule::SwitchControlProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<switchmodule::SwitchControlProfile, int> setter = [context](switchmodule::SwitchControlProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_messageinfo(); }, visitor);
    }
    visitor.end_message_field();
}

} // end namespace adapter
