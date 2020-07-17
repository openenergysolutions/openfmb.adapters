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
using set_t = setter_t<reclosermodule::RecloserEventProfile, V>;

template <class V>
using get_t = getter_t<reclosermodule::RecloserEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_Optional_RecloseActionKind(const set_t<commonmodule::Optional_RecloseActionKind>& setter, const get_t<commonmodule::Optional_RecloseActionKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_PhaseDPS(const set_t<commonmodule::PhaseDPS>& setter, const get_t<commonmodule::PhaseDPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_PhaseRecloseAction(const set_t<commonmodule::PhaseRecloseAction>& setter, const get_t<commonmodule::PhaseRecloseAction>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_PhaseSPS(const set_t<commonmodule::PhaseSPS>& setter, const get_t<commonmodule::PhaseSPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_reclosermodule_Recloser(const set_t<reclosermodule::Recloser>& setter, const get_t<reclosermodule::Recloser>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit_reclosermodule_RecloserEvent(const set_t<reclosermodule::RecloserEvent>& setter, const get_t<reclosermodule::RecloserEvent>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](reclosermodule::RecloserEventProfile& profile) { return &profile; };
    const auto getter = [](const reclosermodule::RecloserEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::EventMessageInfo const *
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

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("recloser", reclosermodule::Recloser::descriptor()))
    {
        visit_reclosermodule_Recloser(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_recloser();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> reclosermodule::Recloser const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_recloser() ? &value->recloser() : nullptr;
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

    if(visitor.start_message_field("recloserEvent", reclosermodule::RecloserEvent::descriptor()))
    {
        visit_reclosermodule_RecloserEvent(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_recloserevent();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> reclosermodule::RecloserEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_recloserevent() ? &value->recloserevent() : nullptr;
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<reclosermodule::RecloserEventProfile,std::string>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserEventProfile,int>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserEventProfile,int>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<reclosermodule::RecloserEventProfile,int>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::ENS_HealthKind const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_RecloseActionKind(const set_t<commonmodule::Optional_RecloseActionKind>& setter, const get_t<commonmodule::Optional_RecloseActionKind>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reclosermodule::RecloserEventProfile,int>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::RecloseActionKind>(value)); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::RecloseActionKind_descriptor()
    );
}

void visit_commonmodule_PhaseDPS(const set_t<commonmodule::PhaseDPS>& setter, const get_t<commonmodule::PhaseDPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("phsA", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("phsB", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("phsC", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusDPS const *
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

void visit_commonmodule_PhaseRecloseAction(const set_t<commonmodule::PhaseRecloseAction>& setter, const get_t<commonmodule::PhaseRecloseAction>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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

    if(visitor.start_message_field("phsA", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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

    if(visitor.start_message_field("phsB", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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

    if(visitor.start_message_field("phsC", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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

void visit_commonmodule_PhaseSPS(const set_t<commonmodule::PhaseSPS>& setter, const get_t<commonmodule::PhaseSPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("phsA", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("phsB", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("phsC", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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

    if(visitor.start_message_field("Pos", commonmodule::PhaseDPS::descriptor()))
    {
        visit_commonmodule_PhaseDPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::PhaseDPS const *
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

    if(visitor.start_message_field("ProtectionPickup", commonmodule::PhaseSPS::descriptor()))
    {
        visit_commonmodule_PhaseSPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_protectionpickup();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::PhaseSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_protectionpickup() ? &value->protectionpickup() : nullptr;
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

    if(visitor.start_message_field("ProtectionMode", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_protectionmode();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusINS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_protectionmode() ? &value->protectionmode() : nullptr;
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

    if(visitor.start_message_field("RecloseEnabled", commonmodule::PhaseDPS::descriptor()))
    {
        visit_commonmodule_PhaseDPS(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_recloseenabled();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::PhaseDPS const *
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

    if(visitor.start_message_field("ReclosingAction", commonmodule::PhaseRecloseAction::descriptor()))
    {
        visit_commonmodule_PhaseRecloseAction(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_reclosingaction();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::PhaseRecloseAction const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reclosingaction() ? &value->reclosingaction() : nullptr;
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserEventProfile,int>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->stval());
                return true;
            }
        ),
        commonmodule::DbPosKind_descriptor()
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserEventProfile,int32_t>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const int32_t& value) { setter(profile)->set_stval(value); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<int32_t>& handler)
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
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserEventProfile,bool>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<reclosermodule::RecloserEventProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reclosermodule::RecloserEventProfile,bool>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reclosermodule::RecloserEventProfile,std::string>::build(
            [setter](reclosermodule::RecloserEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const reclosermodule::RecloserEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_reclosermodule_Recloser(const set_t<reclosermodule::Recloser>& setter, const get_t<reclosermodule::Recloser>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("normalOpen", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_normalopen();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_normalopen() ? &value->normalopen() : nullptr;
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

void visit_reclosermodule_RecloserEvent(const set_t<reclosermodule::RecloserEvent>& setter, const get_t<reclosermodule::RecloserEvent>& getter, ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::EventValue const *
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

    if(visitor.start_message_field("statusAndEventXCBR", commonmodule::StatusAndEventXCBR::descriptor()))
    {
        visit_commonmodule_StatusAndEventXCBR(
            [setter](reclosermodule::RecloserEventProfile& profile)
            {
                return setter(profile)->mutable_statusandeventxcbr();
            },
            [getter](const reclosermodule::RecloserEventProfile& profile) -> commonmodule::StatusAndEventXCBR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_statusandeventxcbr() ? &value->statusandeventxcbr() : nullptr;
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
