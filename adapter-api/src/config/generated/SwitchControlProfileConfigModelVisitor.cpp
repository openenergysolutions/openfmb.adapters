#include "adapter-api/config/generated/SwitchControlProfileConfigModelVisitor.h"
#include "../DescriptorPathImpl.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_switchmodule_SwitchControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchControlScheduleFSCH(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_CheckConditions(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchControlFSCC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchCSG(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_ProtectedSwitch(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_switchmodule_SwitchPoint(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_google_protobuf_BoolValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

template <class C>
void visit_commonmodule_ControlMessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    DescriptorPathImpl path;

    // this is so that we can reuse the same generators for child visitors
    const auto context = [](switchmodule::SwitchControlProfile& profile) { return &profile; };

    path.push(commonmodule::ControlMessageInfo::descriptor());
    if(visitor.start_message_field("controlMessageInfo", path))
    {
        visit_commonmodule_ControlMessageInfo([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_controlmessageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_ied(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(switchmodule::ProtectedSwitch::descriptor());
    if(visitor.start_message_field("protectedSwitch", path))
    {
        visit_switchmodule_ProtectedSwitch([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_protectedswitch(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(switchmodule::SwitchControl::descriptor());
    if(visitor.start_message_field("switchControl", path))
    {
        visit_switchmodule_SwitchControl([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrol(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

// ---- template definitions for child types ----

template <class C>
void visit_switchmodule_SwitchControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::ControlValue::descriptor());
    if(visitor.start_message_field("controlValue", path))
    {
        visit_commonmodule_ControlValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_controlvalue(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CheckConditions::descriptor());
    if(visitor.start_message_field("check", path))
    {
        visit_commonmodule_CheckConditions([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_check(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(switchmodule::SwitchControlFSCC::descriptor());
    if(visitor.start_message_field("SwitchControlFSCC", path))
    {
        visit_switchmodule_SwitchControlFSCC([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrolfscc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_switchmodule_SwitchControlScheduleFSCH(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(switchmodule::SwitchCSG::descriptor());
    if(visitor.start_message_field("ValDCSG", path))
    {
        visit_switchmodule_SwitchCSG([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_valdcsg(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::BoolValue::descriptor());
    if(visitor.start_message_field("modBlk", path))
    {
        visit_google_protobuf_BoolValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_modblk(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, std::string> setter = [context](switchmodule::SwitchControlProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, uint32_t> setter = [context](switchmodule::SwitchControlProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<switchmodule::SwitchControlProfile, uint64_t> setter = [context](switchmodule::SwitchControlProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    path.push(commonmodule::TimeQuality::descriptor());
    if(visitor.start_message_field("tq", path))
    {
        visit_commonmodule_TimeQuality([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_tq(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlTimestamp(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
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
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::NamedObject::descriptor());
    if(visitor.start_message_field("namedObject", path))
    {
        visit_commonmodule_NamedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_namedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<switchmodule::SwitchControlProfile, std::string> setter = [context](switchmodule::SwitchControlProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("messageTimeStamp", path))
    {
        visit_commonmodule_Timestamp([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_CheckConditions(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(google::protobuf::BoolValue::descriptor());
    if(visitor.start_message_field("interlockCheck", path))
    {
        visit_google_protobuf_BoolValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_interlockcheck(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::BoolValue::descriptor());
    if(visitor.start_message_field("synchroCheck", path))
    {
        visit_google_protobuf_BoolValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_synchrocheck(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_LogicalNodeForControl(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_switchmodule_SwitchControlFSCC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::LogicalNodeForControl::descriptor());
    if(visitor.start_message_field("logicalNodeForControl", path))
    {
        visit_commonmodule_LogicalNodeForControl([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_logicalnodeforcontrol(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(switchmodule::SwitchControlScheduleFSCH::descriptor());
    if(visitor.start_message_field("switchControlScheduleFSCH", path))
    {
        visit_switchmodule_SwitchControlScheduleFSCH([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_switchcontrolschedulefsch(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("mRID", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_mrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ControlDPC(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, bool> setter = [context](switchmodule::SwitchControlProfile& profile, const bool& value) { context(profile)->set_ctlval(value); };
        visitor.handle("ctlVal", setter);
    }
}

template <class C>
void visit_switchmodule_SwitchCSG(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        path.push(switchmodule::SwitchPoint::descriptor());
        const auto count = visitor.start_repeated_message_field("crvpts", path);
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
                , path, visitor
            );
            visitor.end_iteration();
        }
        visitor.end_message_field();
        path.pop();
    }
}

template <class C>
void visit_switchmodule_ProtectedSwitch(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipment::descriptor());
    if(visitor.start_message_field("conductingEquipment", path))
    {
        visit_commonmodule_ConductingEquipment([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_conductingequipment(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_switchmodule_SwitchPoint(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::ControlDPC::descriptor());
    if(visitor.start_message_field("Pos", path))
    {
        visit_commonmodule_ControlDPC([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_pos(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ControlTimestamp::descriptor());
    if(visitor.start_message_field("xVal", path))
    {
        visit_commonmodule_ControlTimestamp([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_xval(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_BoolValue(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const setter_t<switchmodule::SwitchControlProfile, bool> setter = [context](switchmodule::SwitchControlProfile& profile, const bool& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
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
void visit_commonmodule_ControlMessageInfo(const C& context, DescriptorPathImpl& path, IConfigModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    path.push(commonmodule::MessageInfo::descriptor());
    if(visitor.start_message_field("messageInfo", path))
    {
        visit_commonmodule_MessageInfo([context](switchmodule::SwitchControlProfile& profile) { return context(profile)->mutable_messageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

} // end namespace adapter
