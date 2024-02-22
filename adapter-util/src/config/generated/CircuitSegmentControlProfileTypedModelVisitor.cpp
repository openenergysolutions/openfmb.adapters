// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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
using set_t = setter_t<circuitsegmentservicemodule::CircuitSegmentControlProfile, V>;

template <class V>
using get_t = getter_t<circuitsegmentservicemodule::CircuitSegmentControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_circuitsegmentservicemodule_CircuitSegmentControl(const set_t<circuitsegmentservicemodule::CircuitSegmentControl>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentControl>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_circuitsegmentservicemodule_CircuitSegmentControlDCSC(const set_t<circuitsegmentservicemodule::CircuitSegmentControlDCSC>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentControlDCSC>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_circuitsegmentservicemodule_ENG_CircuitSegmentServiceModeKind(const set_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& setter, const get_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) { return &profile; };
    const auto getter = [](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("applicationSystem", commonmodule::ApplicationSystem::descriptor()))
    {
        visit_commonmodule_ApplicationSystem(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_applicationsystem();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::ApplicationSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_applicationsystem() ? &value->applicationsystem() : nullptr;
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

    if(visitor.start_message_field("circuitSegmentControl", circuitsegmentservicemodule::CircuitSegmentControl::descriptor()))
    {
        visit_circuitsegmentservicemodule_CircuitSegmentControl(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_circuitsegmentcontrol();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> circuitsegmentservicemodule::CircuitSegmentControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_circuitsegmentcontrol() ? &value->circuitsegmentcontrol() : nullptr;
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

void visit_circuitsegmentservicemodule_CircuitSegmentControl(const set_t<circuitsegmentservicemodule::CircuitSegmentControl>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentControl>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("circuitSegmentControlDCSC", circuitsegmentservicemodule::CircuitSegmentControlDCSC::descriptor()))
    {
        visit_circuitsegmentservicemodule_CircuitSegmentControlDCSC(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_circuitsegmentcontroldcsc();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> circuitsegmentservicemodule::CircuitSegmentControlDCSC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_circuitsegmentcontroldcsc() ? &value->circuitsegmentcontroldcsc() : nullptr;
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

void visit_circuitsegmentservicemodule_CircuitSegmentControlDCSC(const set_t<circuitsegmentservicemodule::CircuitSegmentControlDCSC>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentControlDCSC>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("CircuitSegmentServiceMode", circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind::descriptor()))
    {
        visit_circuitsegmentservicemodule_ENG_CircuitSegmentServiceModeKind(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_circuitsegmentservicemode();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_circuitsegmentservicemode() ? &value->circuitsegmentservicemode() : nullptr;
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

    if(visitor.start_message_field("Island", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_island();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_island() ? &value->island() : nullptr;
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

void visit_circuitsegmentservicemodule_ENG_CircuitSegmentServiceModeKind(const set_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& setter, const get_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentControlProfile,int>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<circuitsegmentservicemodule::CircuitSegmentServiceModeKind>(value)); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setval());
                return true;
            }
        ),
        circuitsegmentservicemodule::CircuitSegmentServiceModeKind_descriptor()
    );

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_setvalextension() ? &value->setvalextension() : nullptr;
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

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentControlProfile,std::string>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentControlProfile,bool>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<circuitsegmentservicemodule::CircuitSegmentControlProfile,commonmodule::Timestamp>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentControlProfile,bool>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentControlProfile,std::string>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const handler_t<std::string>& handler)
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
