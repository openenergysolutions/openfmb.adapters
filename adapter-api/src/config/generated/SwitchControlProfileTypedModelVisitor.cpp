// 
//   _   _         ______    _ _ _   _             _ _ _
//  | \ | |       |  ____|  | (_) | (_)           | | | |
//  |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
//  | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
//  | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
//  |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                            __/ |
//                                           |___/
// 
//  This file is auto-generated. Do not edit manually
// 

#include "adapter-api/config/generated/TypedModelVisitors.h"
#include "../AccessorImpl.h"

namespace adapter {

template <class V>
using set_t = setter_t<switchmodule::SwitchControlProfile, V>;

template <class V>
using get_t = getter_t<switchmodule::SwitchControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_switchmodule_SwitchCSG(const set_t<switchmodule::SwitchCSG>& setter, const get_t<switchmodule::SwitchCSG>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_switchmodule_SwitchControl(const set_t<switchmodule::SwitchControl>& setter, const get_t<switchmodule::SwitchControl>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_switchmodule_SwitchControlFSCC(const set_t<switchmodule::SwitchControlFSCC>& setter, const get_t<switchmodule::SwitchControlFSCC>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_switchmodule_SwitchControlScheduleFSCH(const set_t<switchmodule::SwitchControlScheduleFSCH>& setter, const get_t<switchmodule::SwitchControlScheduleFSCH>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit_switchmodule_SwitchPoint(const set_t<switchmodule::SwitchPoint>& setter, const get_t<switchmodule::SwitchPoint>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](switchmodule::SwitchControlProfile& profile) { return &profile; };
    const auto getter = [](const switchmodule::SwitchControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::ControlMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlmessageinfo() ? &value->controlmessageinfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::IED const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ied() ? &value->ied() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_protectedswitch();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> switchmodule::ProtectedSwitch const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_protectedswitch() ? &value->protectedswitch() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchControl", switchmodule::SwitchControl::descriptor()))
    {
        visit_switchmodule_SwitchControl(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_switchcontrol();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> switchmodule::SwitchControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchcontrol() ? &value->switchcontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

// ---- template definitions for child types ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_interlockcheck() ? &value->interlockcheck() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_synchrocheck() ? &value->synchrocheck() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::NamedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_namedobject() ? &value->namedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    visitor.handle(
        "mRID",
        AccessorBuilder<switchmodule::SwitchControlProfile,std::string>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<switchmodule::SwitchControlProfile,bool>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::MessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_messageinfo() ? &value->messageinfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::IdentifiedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_identifiedobject() ? &value->identifiedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_modblk() ? &value->modblk() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::IdentifiedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_identifiedobject() ? &value->identifiedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_description() ? &value->description() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_mrid() ? &value->mrid() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_name() ? &value->name() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::IdentifiedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_identifiedobject() ? &value->identifiedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::LogicalNode const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnode() ? &value->logicalnode() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::IdentifiedObject const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_identifiedobject() ? &value->identifiedobject() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    visitor.handle(
        "messageTimeStamp",
        MessageAccessorBuilder<switchmodule::SwitchControlProfile,commonmodule::Timestamp>::build(
            [setter](switchmodule::SwitchControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler) { return false; }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_description() ? &value->description() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_name() ? &value->name() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<switchmodule::SwitchControlProfile,bool>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<switchmodule::SwitchControlProfile,bool>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<switchmodule::SwitchControlProfile,bool>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<switchmodule::SwitchControlProfile,int>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchControlProfile,bool>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchControlProfile,std::string>::build(
            [setter](switchmodule::SwitchControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::ConductingEquipment const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_conductingequipment() ? &value->conductingequipment() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchCSG(const set_t<switchmodule::SwitchCSG>& setter, const get_t<switchmodule::SwitchCSG>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", switchmodule::SwitchPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](switchmodule::SwitchControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_crvpts();
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
            };
            const auto get = [getter, i](const switchmodule::SwitchControlProfile& profile) -> switchmodule::SwitchPoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->crvpts_size()) ? &value->crvpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_switchmodule_SwitchPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_switchmodule_SwitchControl(const set_t<switchmodule::SwitchControl>& setter, const get_t<switchmodule::SwitchControl>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::ControlValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlvalue() ? &value->controlvalue() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::CheckConditions const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_check() ? &value->check() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SwitchControlFSCC", switchmodule::SwitchControlFSCC::descriptor()))
    {
        visit_switchmodule_SwitchControlFSCC(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_switchcontrolfscc();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> switchmodule::SwitchControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchcontrolfscc() ? &value->switchcontrolfscc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchControlFSCC(const set_t<switchmodule::SwitchControlFSCC>& setter, const get_t<switchmodule::SwitchControlFSCC>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforcontrol() ? &value->logicalnodeforcontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchControlScheduleFSCH", switchmodule::SwitchControlScheduleFSCH::descriptor()))
    {
        visit_switchmodule_SwitchControlScheduleFSCH(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_switchcontrolschedulefsch();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> switchmodule::SwitchControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchcontrolschedulefsch() ? &value->switchcontrolschedulefsch() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchControlScheduleFSCH(const set_t<switchmodule::SwitchControlScheduleFSCH>& setter, const get_t<switchmodule::SwitchControlScheduleFSCH>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", switchmodule::SwitchCSG::descriptor()))
    {
        visit_switchmodule_SwitchCSG(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> switchmodule::SwitchCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valdcsg() ? &value->valdcsg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }
}

void visit_switchmodule_SwitchPoint(const set_t<switchmodule::SwitchPoint>& setter, const get_t<switchmodule::SwitchPoint>& getter, ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor)
{
    if(visitor.start_message_field("Pos", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](switchmodule::SwitchControlProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const switchmodule::SwitchControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pos() ? &value->pos() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    visitor.handle(
        "xVal",
        MessageAccessorBuilder<switchmodule::SwitchControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](switchmodule::SwitchControlProfile& profile) { return setter(profile)->mutable_xval(); },
            [getter](const switchmodule::SwitchControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler) { return false; }
        )
    );
}

} // end namespace adapter
