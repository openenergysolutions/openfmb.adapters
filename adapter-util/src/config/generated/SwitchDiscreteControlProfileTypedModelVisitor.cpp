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

#include "adapter-util/config/generated/TypedModelVisitors.h"
#include "../AccessorImpl.h"

namespace adapter {

namespace util {

template <class V>
using set_t = setter_t<switchmodule::SwitchDiscreteControlProfile, V>;

template <class V>
using get_t = getter_t<switchmodule::SwitchDiscreteControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_DeviceControl(const set_t<commonmodule::DeviceControl>& setter, const get_t<commonmodule::DeviceControl>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_switchmodule_SwitchDiscreteControl(const set_t<switchmodule::SwitchDiscreteControl>& setter, const get_t<switchmodule::SwitchDiscreteControl>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit_switchmodule_SwitchDiscreteControlXSWI(const set_t<switchmodule::SwitchDiscreteControlXSWI>& setter, const get_t<switchmodule::SwitchDiscreteControlXSWI>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](switchmodule::SwitchDiscreteControlProfile& profile) { return &profile; };
    const auto getter = [](const switchmodule::SwitchDiscreteControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::IED const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_protectedswitch();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> switchmodule::ProtectedSwitch const *
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

    if(visitor.start_message_field("switchDiscreteControl", switchmodule::SwitchDiscreteControl::descriptor()))
    {
        visit_switchmodule_SwitchDiscreteControl(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_switchdiscretecontrol();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> switchmodule::SwitchDiscreteControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchdiscretecontrol() ? &value->switchdiscretecontrol() : nullptr;
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<switchmodule::SwitchDiscreteControlProfile,std::string>::build(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<switchmodule::SwitchDiscreteControlProfile,bool>::build(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<switchmodule::SwitchDiscreteControlProfile,bool>::build(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_DeviceControl(const set_t<commonmodule::DeviceControl>& setter, const get_t<commonmodule::DeviceControl>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("ANSI79LO", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ansi79lo();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ansi79lo() ? &value->ansi79lo() : nullptr;
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

    if(visitor.start_message_field("FaultLatch", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_faultlatch();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_faultlatch() ? &value->faultlatch() : nullptr;
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

    if(visitor.start_message_field("HotLineTag", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_hotlinetag() ? &value->hotlinetag() : nullptr;
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

    if(visitor.start_message_field("IEDTrouble", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_iedtrouble();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_iedtrouble() ? &value->iedtrouble() : nullptr;
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

    if(visitor.start_message_field("RecloseEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_recloseenabled();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_recloseenabled() ? &value->recloseenabled() : nullptr;
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<switchmodule::SwitchDiscreteControlProfile,commonmodule::Timestamp>::build(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchDiscreteControlProfile,bool>::build(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchDiscreteControlProfile,std::string>::build(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_switchmodule_SwitchDiscreteControl(const set_t<switchmodule::SwitchDiscreteControl>& setter, const get_t<switchmodule::SwitchDiscreteControl>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("deviceControl", commonmodule::DeviceControl::descriptor()))
    {
        visit_commonmodule_DeviceControl(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_devicecontrol();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::DeviceControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_devicecontrol() ? &value->devicecontrol() : nullptr;
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

    if(visitor.start_message_field("switchDiscreteControlXSWI", switchmodule::SwitchDiscreteControlXSWI::descriptor()))
    {
        visit_switchmodule_SwitchDiscreteControlXSWI(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_switchdiscretecontrolxswi();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> switchmodule::SwitchDiscreteControlXSWI const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchdiscretecontrolxswi() ? &value->switchdiscretecontrolxswi() : nullptr;
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

void visit_switchmodule_SwitchDiscreteControlXSWI(const set_t<switchmodule::SwitchDiscreteControlXSWI>& setter, const get_t<switchmodule::SwitchDiscreteControlXSWI>& getter, ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("Pos", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](switchmodule::SwitchDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const switchmodule::SwitchDiscreteControlProfile& profile) -> commonmodule::ControlDPC const *
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
}

} // end namespace util

} // end namespace adapter
