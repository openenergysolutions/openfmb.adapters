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
using set_t = setter_t<loadmodule::LoadEventProfile, V>;

template <class V>
using get_t = getter_t<loadmodule::LoadEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_EnergyConsumer(const set_t<commonmodule::EnergyConsumer>& setter, const get_t<commonmodule::EnergyConsumer>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_loadmodule_LoadEvent(const set_t<loadmodule::LoadEvent>& setter, const get_t<loadmodule::LoadEvent>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_loadmodule_LoadEventAndStatusZGLD(const set_t<loadmodule::LoadEventAndStatusZGLD>& setter, const get_t<loadmodule::LoadEventAndStatusZGLD>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_loadmodule_LoadEventZGLD(const set_t<loadmodule::LoadEventZGLD>& setter, const get_t<loadmodule::LoadEventZGLD>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit_loadmodule_LoadPointStatus(const set_t<loadmodule::LoadPointStatus>& setter, const get_t<loadmodule::LoadPointStatus>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](loadmodule::LoadEventProfile& profile) { return &profile; };
    const auto getter = [](const loadmodule::LoadEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::EventMessageInfo const *
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

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_energyconsumer();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::EnergyConsumer const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_energyconsumer() ? &value->energyconsumer() : nullptr;
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

    if(visitor.start_message_field("loadEvent", loadmodule::LoadEvent::descriptor()))
    {
        visit_loadmodule_LoadEvent(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_loadevent();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> loadmodule::LoadEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadevent() ? &value->loadevent() : nullptr;
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<loadmodule::LoadEventProfile,std::string>::build(
            [setter](loadmodule::LoadEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<loadmodule::LoadEventProfile,commonmodule::Quality>::build(
            [setter](loadmodule::LoadEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<loadmodule::LoadEventProfile,int>::build(
            [setter](loadmodule::LoadEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::BehaviourModeKind_descriptor()
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<loadmodule::LoadEventProfile,commonmodule::Timestamp>::build(
            [setter](loadmodule::LoadEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<loadmodule::LoadEventProfile,commonmodule::Quality>::build(
            [setter](loadmodule::LoadEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<loadmodule::LoadEventProfile,int>::build(
            [setter](loadmodule::LoadEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::DynamicTestKind_descriptor()
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<loadmodule::LoadEventProfile,commonmodule::Timestamp>::build(
            [setter](loadmodule::LoadEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_d() ? &value->d() : nullptr;
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
        "stVal",
        AccessorBuilder<loadmodule::LoadEventProfile,int>::build(
            [setter](loadmodule::LoadEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::HealthKind_descriptor()
    );
}

void visit_commonmodule_EnergyConsumer(const set_t<commonmodule::EnergyConsumer>& setter, const get_t<commonmodule::EnergyConsumer>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("operatingLimit", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_operatinglimit();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_operatinglimit() ? &value->operatinglimit() : nullptr;
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

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("Beh", commonmodule::ENS_BehaviourModeKind::descriptor()))
    {
        visit_commonmodule_ENS_BehaviourModeKind(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_beh() ? &value->beh() : nullptr;
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

    if(visitor.start_message_field("EEHealth", commonmodule::ENS_HealthKind::descriptor()))
    {
        visit_commonmodule_ENS_HealthKind(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::ENS_HealthKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_eehealth() ? &value->eehealth() : nullptr;
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

    if(visitor.start_message_field("HotLineTag", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("RemoteBlk", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_remoteblk() ? &value->remoteblk() : nullptr;
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<loadmodule::LoadEventProfile,commonmodule::Timestamp>::build(
            [setter](loadmodule::LoadEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadEventProfile,int>::build(
            [setter](loadmodule::LoadEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::StateKind_descriptor()
    );
}

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_negativereactivepowerkvarpermin() ? &value->negativereactivepowerkvarpermin() : nullptr;
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

    if(visitor.start_message_field("negativeRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_negativerealpowerkwpermin() ? &value->negativerealpowerkwpermin() : nullptr;
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

    if(visitor.start_message_field("positiveReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_positivereactivepowerkvarpermin() ? &value->positivereactivepowerkvarpermin() : nullptr;
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

    if(visitor.start_message_field("positiveRealPowerKWPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_positiverealpowerkwpermin() ? &value->positiverealpowerkwpermin() : nullptr;
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<loadmodule::LoadEventProfile,commonmodule::Quality>::build(
            [setter](loadmodule::LoadEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<loadmodule::LoadEventProfile,bool>::build(
            [setter](loadmodule::LoadEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<loadmodule::LoadEventProfile,commonmodule::Timestamp>::build(
            [setter](loadmodule::LoadEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadEventProfile,bool>::build(
            [setter](loadmodule::LoadEventProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadEventProfile,float>::build(
            [setter](loadmodule::LoadEventProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadEventProfile,std::string>::build(
            [setter](loadmodule::LoadEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_loadmodule_LoadEvent(const set_t<loadmodule::LoadEvent>& setter, const get_t<loadmodule::LoadEvent>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::EventValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_eventvalue() ? &value->eventvalue() : nullptr;
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

    if(visitor.start_message_field("loadEventZGLD", loadmodule::LoadEventZGLD::descriptor()))
    {
        visit_loadmodule_LoadEventZGLD(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_loadeventzgld();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> loadmodule::LoadEventZGLD const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadeventzgld() ? &value->loadeventzgld() : nullptr;
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

void visit_loadmodule_LoadEventAndStatusZGLD(const set_t<loadmodule::LoadEventAndStatusZGLD>& setter, const get_t<loadmodule::LoadEventAndStatusZGLD>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforeventandstatus() ? &value->logicalnodeforeventandstatus() : nullptr;
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

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dynamictest() ? &value->dynamictest() : nullptr;
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

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_emgstop() ? &value->emgstop() : nullptr;
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

    if(visitor.start_message_field("PointStatus", loadmodule::LoadPointStatus::descriptor()))
    {
        visit_loadmodule_LoadPointStatus(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> loadmodule::LoadPointStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pointstatus() ? &value->pointstatus() : nullptr;
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

void visit_loadmodule_LoadEventZGLD(const set_t<loadmodule::LoadEventZGLD>& setter, const get_t<loadmodule::LoadEventZGLD>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("loadEventAndStatusZGLD", loadmodule::LoadEventAndStatusZGLD::descriptor()))
    {
        visit_loadmodule_LoadEventAndStatusZGLD(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_loadeventandstatuszgld();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> loadmodule::LoadEventAndStatusZGLD const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadeventandstatuszgld() ? &value->loadeventandstatuszgld() : nullptr;
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

void visit_loadmodule_LoadPointStatus(const set_t<loadmodule::LoadPointStatus>& setter, const get_t<loadmodule::LoadPointStatus>& getter, ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor)
{
    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::RampRate const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ramprates() ? &value->ramprates() : nullptr;
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reactivepwrsetpointenabled() ? &value->reactivepwrsetpointenabled() : nullptr;
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

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_realpwrsetpointenabled() ? &value->realpwrsetpointenabled() : nullptr;
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

    if(visitor.start_message_field("reset", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(
            [setter](loadmodule::LoadEventProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const loadmodule::LoadEventProfile& profile) -> commonmodule::Optional_StateKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_state() ? &value->state() : nullptr;
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
