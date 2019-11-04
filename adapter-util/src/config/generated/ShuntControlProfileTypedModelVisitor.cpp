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
using set_t = setter_t<shuntmodule::ShuntControlProfile, V>;

template <class V>
using get_t = getter_t<shuntmodule::ShuntControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ENS_SwitchingCapabilityKind(const set_t<shuntmodule::ENS_SwitchingCapabilityKind>& setter, const get_t<shuntmodule::ENS_SwitchingCapabilityKind>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ShuntCSG(const set_t<shuntmodule::ShuntCSG>& setter, const get_t<shuntmodule::ShuntCSG>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ShuntControl(const set_t<shuntmodule::ShuntControl>& setter, const get_t<shuntmodule::ShuntControl>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ShuntControlFSCC(const set_t<shuntmodule::ShuntControlFSCC>& setter, const get_t<shuntmodule::ShuntControlFSCC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ShuntControlScheduleFSCH(const set_t<shuntmodule::ShuntControlScheduleFSCH>& setter, const get_t<shuntmodule::ShuntControlScheduleFSCH>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ShuntEventAndStatusYPSH(const set_t<shuntmodule::ShuntEventAndStatusYPSH>& setter, const get_t<shuntmodule::ShuntEventAndStatusYPSH>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ShuntPoint(const set_t<shuntmodule::ShuntPoint>& setter, const get_t<shuntmodule::ShuntPoint>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

void visit_shuntmodule_ShuntSystem(const set_t<shuntmodule::ShuntSystem>& setter, const get_t<shuntmodule::ShuntSystem>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](shuntmodule::ShuntControlProfile& profile) { return &profile; };
    const auto getter = [](const shuntmodule::ShuntControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("shuntControl", shuntmodule::ShuntControl::descriptor()))
    {
        visit_shuntmodule_ShuntControl(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_shuntcontrol();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ShuntControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_shuntcontrol() ? &value->shuntcontrol() : nullptr;
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

    if(visitor.start_message_field("shuntSystem", shuntmodule::ShuntSystem::descriptor()))
    {
        visit_shuntmodule_ShuntSystem(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_shuntsystem();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ShuntSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_shuntsystem() ? &value->shuntsystem() : nullptr;
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<shuntmodule::ShuntControlProfile,std::string>::build(
            [setter](shuntmodule::ShuntControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<shuntmodule::ShuntControlProfile,bool>::build(
            [setter](shuntmodule::ShuntControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("controlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_controlschedulefsch();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlschedulefsch() ? &value->controlschedulefsch() : nullptr;
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

    if(visitor.start_message_field("islandControlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_islandcontrolschedulefsch();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_islandcontrolschedulefsch() ? &value->islandcontrolschedulefsch() : nullptr;
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

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<shuntmodule::ShuntControlProfile,bool>::build(
            [setter](shuntmodule::ShuntControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ScheduleCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valacsg() ? &value->valacsg() : nullptr;
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<shuntmodule::ShuntControlProfile,commonmodule::Timestamp>::build(
            [setter](shuntmodule::ShuntControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](shuntmodule::ShuntControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_schpts();
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
            const auto get = [getter, i](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::SchedulePoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->schpts_size()) ? &value->schpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_SchedulePoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    // repeated schedule parameter
    visitor.handle(
        "scheduleParameter",
        [getter](const shuntmodule::ShuntControlProfile& profile) -> const google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>*
        {
            const auto value = getter(profile);
            if(value)
            {
                return &value->scheduleparameter();
            }
            else
            {
                return nullptr;
            }
        }
    );

    visitor.handle(
        "startTime",
        MessageAccessorBuilder<shuntmodule::ShuntControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](shuntmodule::ShuntControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<shuntmodule::ShuntControlProfile,bool>::build(
            [setter](shuntmodule::ShuntControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<shuntmodule::ShuntControlProfile,std::string>::build(
            [setter](shuntmodule::ShuntControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_shuntmodule_ENS_SwitchingCapabilityKind(const set_t<shuntmodule::ENS_SwitchingCapabilityKind>& setter, const get_t<shuntmodule::ENS_SwitchingCapabilityKind>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("blkEna", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_blkena();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_blkena() ? &value->blkena() : nullptr;
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
        "q",
        MessageAccessorBuilder<shuntmodule::ShuntControlProfile,commonmodule::Quality>::build(
            [setter](shuntmodule::ShuntControlProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<commonmodule::Quality>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_q()) return false;
                handler(parent->q());
                return true;
            }
        )
    );

    visitor.handle(
        "stVal",
        AccessorBuilder<shuntmodule::ShuntControlProfile,int>::build(
            [setter](shuntmodule::ShuntControlProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<shuntmodule::SwitchingCapabilityKind>(value)); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        shuntmodule::SwitchingCapabilityKind_descriptor()
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<shuntmodule::ShuntControlProfile,commonmodule::Timestamp>::build(
            [setter](shuntmodule::ShuntControlProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_shuntmodule_ShuntCSG(const set_t<shuntmodule::ShuntCSG>& setter, const get_t<shuntmodule::ShuntCSG>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", shuntmodule::ShuntPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](shuntmodule::ShuntControlProfile& profile)
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
            const auto get = [getter, i](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ShuntPoint const*
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
            visit_shuntmodule_ShuntPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_shuntmodule_ShuntControl(const set_t<shuntmodule::ShuntControl>& setter, const get_t<shuntmodule::ShuntControl>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("shuntControlFSCC", shuntmodule::ShuntControlFSCC::descriptor()))
    {
        visit_shuntmodule_ShuntControlFSCC(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_shuntcontrolfscc();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ShuntControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_shuntcontrolfscc() ? &value->shuntcontrolfscc() : nullptr;
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

void visit_shuntmodule_ShuntControlFSCC(const set_t<shuntmodule::ShuntControlFSCC>& setter, const get_t<shuntmodule::ShuntControlFSCC>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlfscc() ? &value->controlfscc() : nullptr;
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

    if(visitor.start_message_field("shuntControlScheduleFSCH", shuntmodule::ShuntControlScheduleFSCH::descriptor()))
    {
        visit_shuntmodule_ShuntControlScheduleFSCH(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_shuntcontrolschedulefsch();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ShuntControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_shuntcontrolschedulefsch() ? &value->shuntcontrolschedulefsch() : nullptr;
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

void visit_shuntmodule_ShuntControlScheduleFSCH(const set_t<shuntmodule::ShuntControlScheduleFSCH>& setter, const get_t<shuntmodule::ShuntControlScheduleFSCH>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("ValCSG", shuntmodule::ShuntCSG::descriptor()))
    {
        visit_shuntmodule_ShuntCSG(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_valcsg();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ShuntCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valcsg() ? &value->valcsg() : nullptr;
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

void visit_shuntmodule_ShuntEventAndStatusYPSH(const set_t<shuntmodule::ShuntEventAndStatusYPSH>& setter, const get_t<shuntmodule::ShuntEventAndStatusYPSH>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("BlkCls", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_blkcls();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_blkcls() ? &value->blkcls() : nullptr;
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

    if(visitor.start_message_field("BlkOpn", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_blkopn();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_blkopn() ? &value->blkopn() : nullptr;
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
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("ShOpCap", shuntmodule::ENS_SwitchingCapabilityKind::descriptor()))
    {
        visit_shuntmodule_ENS_SwitchingCapabilityKind(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_shopcap();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ENS_SwitchingCapabilityKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_shopcap() ? &value->shopcap() : nullptr;
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

void visit_shuntmodule_ShuntPoint(const set_t<shuntmodule::ShuntPoint>& setter, const get_t<shuntmodule::ShuntPoint>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("control", shuntmodule::ShuntEventAndStatusYPSH::descriptor()))
    {
        visit_shuntmodule_ShuntEventAndStatusYPSH(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_control();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> shuntmodule::ShuntEventAndStatusYPSH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_control() ? &value->control() : nullptr;
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
        "startTime",
        MessageAccessorBuilder<shuntmodule::ShuntControlProfile,commonmodule::Timestamp>::build(
            [setter](shuntmodule::ShuntControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const shuntmodule::ShuntControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_shuntmodule_ShuntSystem(const set_t<shuntmodule::ShuntSystem>& setter, const get_t<shuntmodule::ShuntSystem>& getter, ITypedModelVisitor<shuntmodule::ShuntControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](shuntmodule::ShuntControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const shuntmodule::ShuntControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

} // end namespace util

} // end namespace adapter
