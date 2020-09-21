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
using set_t = setter_t<capbankmodule::CapBankDiscreteControlProfile, V>;

template <class V>
using get_t = getter_t<capbankmodule::CapBankDiscreteControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_capbankmodule_CapBankDiscreteControl(const set_t<capbankmodule::CapBankDiscreteControl>& setter, const get_t<capbankmodule::CapBankDiscreteControl>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_capbankmodule_CapBankDiscreteControlYPSH(const set_t<capbankmodule::CapBankDiscreteControlYPSH>& setter, const get_t<capbankmodule::CapBankDiscreteControlYPSH>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_commonmodule_PhaseDPC(const set_t<commonmodule::PhaseDPC>& setter, const get_t<commonmodule::PhaseDPC>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](capbankmodule::CapBankDiscreteControlProfile& profile) { return &profile; };
    const auto getter = [](const capbankmodule::CapBankDiscreteControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("capBankControl", capbankmodule::CapBankDiscreteControl::descriptor()))
    {
        visit_capbankmodule_CapBankDiscreteControl(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_capbankcontrol();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> capbankmodule::CapBankDiscreteControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankcontrol() ? &value->capbankcontrol() : nullptr;
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

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_capbanksystem();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> capbankmodule::CapBankSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbanksystem() ? &value->capbanksystem() : nullptr;
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

void visit_capbankmodule_CapBankDiscreteControl(const set_t<capbankmodule::CapBankDiscreteControl>& setter, const get_t<capbankmodule::CapBankDiscreteControl>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("capBankDiscreteControlYPSH", capbankmodule::CapBankDiscreteControlYPSH::descriptor()))
    {
        visit_capbankmodule_CapBankDiscreteControlYPSH(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_capbankdiscretecontrolypsh();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> capbankmodule::CapBankDiscreteControlYPSH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankdiscretecontrolypsh() ? &value->capbankdiscretecontrolypsh() : nullptr;
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

void visit_capbankmodule_CapBankDiscreteControlYPSH(const set_t<capbankmodule::CapBankDiscreteControlYPSH>& setter, const get_t<capbankmodule::CapBankDiscreteControlYPSH>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPC::descriptor()))
    {
        visit_commonmodule_PhaseDPC(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::PhaseDPC const *
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

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<capbankmodule::CapBankDiscreteControlProfile,std::string>::build(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<capbankmodule::CapBankDiscreteControlProfile,bool>::build(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

    if(visitor.start_message_field("reset", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reset() ? &value->reset() : nullptr;
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<capbankmodule::CapBankDiscreteControlProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_PhaseDPC(const set_t<commonmodule::PhaseDPC>& setter, const get_t<commonmodule::PhaseDPC>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phs3() ? &value->phs3() : nullptr;
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

    if(visitor.start_message_field("phsA", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsa() ? &value->phsa() : nullptr;
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

    if(visitor.start_message_field("phsB", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsb() ? &value->phsb() : nullptr;
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

    if(visitor.start_message_field("phsC", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsc() ? &value->phsc() : nullptr;
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankDiscreteControlProfile,bool>::build(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankDiscreteControlProfile,std::string>::build(
            [setter](capbankmodule::CapBankDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

} // end namespace util

} // end namespace adapter
