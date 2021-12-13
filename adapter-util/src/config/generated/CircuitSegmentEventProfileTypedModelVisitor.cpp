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
using set_t = setter_t<circuitsegmentservicemodule::CircuitSegmentEventProfile, V>;

template <class V>
using get_t = getter_t<circuitsegmentservicemodule::CircuitSegmentEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_circuitsegmentservicemodule_CircuitSegmentEvent(const set_t<circuitsegmentservicemodule::CircuitSegmentEvent>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentEvent>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_circuitsegmentservicemodule_CircuitSegmentEventDCSC(const set_t<circuitsegmentservicemodule::CircuitSegmentEventDCSC>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentEventDCSC>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_circuitsegmentservicemodule_ENG_CircuitSegmentServiceModeKind(const set_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& setter, const get_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) { return &profile; };
    const auto getter = [](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::EventMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_eventmessageinfo() ? &value->eventmessageinfo() : nullptr;
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
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_applicationsystem();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::ApplicationSystem const *
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

    if(visitor.start_message_field("circuitSegmentEvent", circuitsegmentservicemodule::CircuitSegmentEvent::descriptor()))
    {
        visit_circuitsegmentservicemodule_CircuitSegmentEvent(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_circuitsegmentevent();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> circuitsegmentservicemodule::CircuitSegmentEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_circuitsegmentevent() ? &value->circuitsegmentevent() : nullptr;
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

void visit_circuitsegmentservicemodule_CircuitSegmentEvent(const set_t<circuitsegmentservicemodule::CircuitSegmentEvent>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentEvent>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("circuitSegmentEventDCSC", circuitsegmentservicemodule::CircuitSegmentEventDCSC::descriptor()))
    {
        visit_circuitsegmentservicemodule_CircuitSegmentEventDCSC(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_circuitsegmenteventdcsc();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> circuitsegmentservicemodule::CircuitSegmentEventDCSC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_circuitsegmenteventdcsc() ? &value->circuitsegmenteventdcsc() : nullptr;
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

void visit_circuitsegmentservicemodule_CircuitSegmentEventDCSC(const set_t<circuitsegmentservicemodule::CircuitSegmentEventDCSC>& setter, const get_t<circuitsegmentservicemodule::CircuitSegmentEventDCSC>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("CircuitSegmentServiceMode", circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind::descriptor()))
    {
        visit_circuitsegmentservicemodule_ENG_CircuitSegmentServiceModeKind(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_circuitsegmentservicemode();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind const *
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

    if(visitor.start_message_field("Island", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_island();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("PermissibleAuto", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_permissibleauto();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_permissibleauto() ? &value->permissibleauto() : nullptr;
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

    if(visitor.start_message_field("PermissibleManual", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_permissiblemanual();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_permissiblemanual() ? &value->permissiblemanual() : nullptr;
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

    if(visitor.start_message_field("PermissibleNetzero", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_permissiblenetzero();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_permissiblenetzero() ? &value->permissiblenetzero() : nullptr;
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

    if(visitor.start_message_field("PermissibleStart", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_permissiblestart();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_permissiblestart() ? &value->permissiblestart() : nullptr;
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

    if(visitor.start_message_field("PermissibleStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_permissiblestop();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_permissiblestop() ? &value->permissiblestop() : nullptr;
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

void visit_circuitsegmentservicemodule_ENG_CircuitSegmentServiceModeKind(const set_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& setter, const get_t<circuitsegmentservicemodule::ENG_CircuitSegmentServiceModeKind>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentEventProfile,int>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<circuitsegmentservicemodule::CircuitSegmentServiceModeKind>(value)); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const handler_t<int>& handler)
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
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentEventProfile,std::string>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<circuitsegmentservicemodule::CircuitSegmentEventProfile,commonmodule::Timestamp>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<circuitsegmentservicemodule::CircuitSegmentEventProfile,commonmodule::Quality>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentEventProfile,bool>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        )
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<circuitsegmentservicemodule::CircuitSegmentEventProfile,commonmodule::Timestamp>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<circuitsegmentservicemodule::CircuitSegmentEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<circuitsegmentservicemodule::CircuitSegmentEventProfile,std::string>::build(
            [setter](circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile, const handler_t<std::string>& handler)
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
