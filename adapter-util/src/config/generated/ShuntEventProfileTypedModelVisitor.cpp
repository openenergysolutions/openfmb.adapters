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
using set_t = setter_t<shuntmodule::ShuntEventProfile, V>;

template <class V>
using get_t = getter_t<shuntmodule::ShuntEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_shuntmodule_ENS_SwitchingCapabilityKind(const set_t<shuntmodule::ENS_SwitchingCapabilityKind>& setter, const get_t<shuntmodule::ENS_SwitchingCapabilityKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_shuntmodule_ShuntEvent(const set_t<shuntmodule::ShuntEvent>& setter, const get_t<shuntmodule::ShuntEvent>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_shuntmodule_ShuntEventAndStatusPoint(const set_t<shuntmodule::ShuntEventAndStatusPoint>& setter, const get_t<shuntmodule::ShuntEventAndStatusPoint>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_shuntmodule_ShuntEventAndStatusYPSH(const set_t<shuntmodule::ShuntEventAndStatusYPSH>& setter, const get_t<shuntmodule::ShuntEventAndStatusYPSH>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_shuntmodule_ShuntEventAndStatusZCAP(const set_t<shuntmodule::ShuntEventAndStatusZCAP>& setter, const get_t<shuntmodule::ShuntEventAndStatusZCAP>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

void visit_shuntmodule_ShuntSystem(const set_t<shuntmodule::ShuntSystem>& setter, const get_t<shuntmodule::ShuntSystem>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](shuntmodule::ShuntEventProfile& profile) { return &profile; };
    const auto getter = [](const shuntmodule::ShuntEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::EventMessageInfo const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("shuntEvent", shuntmodule::ShuntEvent::descriptor()))
    {
        visit_shuntmodule_ShuntEvent(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_shuntevent();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> shuntmodule::ShuntEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_shuntevent() ? &value->shuntevent() : nullptr;
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_shuntsystem();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> shuntmodule::ShuntSystem const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<shuntmodule::ShuntEventProfile,std::string>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<shuntmodule::ShuntEventProfile,bool>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<shuntmodule::ShuntEventProfile,bool>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<shuntmodule::ShuntEventProfile,commonmodule::Quality>::build(
            [setter](shuntmodule::ShuntEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<shuntmodule::ShuntEventProfile,int>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<shuntmodule::ShuntEventProfile,commonmodule::Timestamp>::build(
            [setter](shuntmodule::ShuntEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<shuntmodule::ShuntEventProfile,commonmodule::Quality>::build(
            [setter](shuntmodule::ShuntEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<shuntmodule::ShuntEventProfile,int>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<shuntmodule::ShuntEventProfile,commonmodule::Timestamp>::build(
            [setter](shuntmodule::ShuntEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<shuntmodule::ShuntEventProfile,int>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::ENS_HealthKind const *
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
}

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<shuntmodule::ShuntEventProfile,commonmodule::Timestamp>::build(
            [setter](shuntmodule::ShuntEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<shuntmodule::ShuntEventProfile,bool>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<shuntmodule::ShuntEventProfile,std::string>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_shuntmodule_ENS_SwitchingCapabilityKind(const set_t<shuntmodule::ENS_SwitchingCapabilityKind>& setter, const get_t<shuntmodule::ENS_SwitchingCapabilityKind>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("blkEna", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_blkena();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> google::protobuf::BoolValue const *
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
        MessageAccessorBuilder<shuntmodule::ShuntEventProfile,commonmodule::Quality>::build(
            [setter](shuntmodule::ShuntEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<shuntmodule::ShuntEventProfile,int>::build(
            [setter](shuntmodule::ShuntEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<shuntmodule::SwitchingCapabilityKind>(value)); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<shuntmodule::ShuntEventProfile,commonmodule::Timestamp>::build(
            [setter](shuntmodule::ShuntEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const shuntmodule::ShuntEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_shuntmodule_ShuntEvent(const set_t<shuntmodule::ShuntEvent>& setter, const get_t<shuntmodule::ShuntEvent>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::EventValue const *
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

    if(visitor.start_message_field("shuntEventAndStatusZCAP", shuntmodule::ShuntEventAndStatusZCAP::descriptor()))
    {
        visit_shuntmodule_ShuntEventAndStatusZCAP(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_shunteventandstatuszcap();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> shuntmodule::ShuntEventAndStatusZCAP const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_shunteventandstatuszcap() ? &value->shunteventandstatuszcap() : nullptr;
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

void visit_shuntmodule_ShuntEventAndStatusPoint(const set_t<shuntmodule::ShuntEventAndStatusPoint>& setter, const get_t<shuntmodule::ShuntEventAndStatusPoint>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("eventAndStatus", shuntmodule::ShuntEventAndStatusYPSH::descriptor()))
    {
        visit_shuntmodule_ShuntEventAndStatusYPSH(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_eventandstatus();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> shuntmodule::ShuntEventAndStatusYPSH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_eventandstatus() ? &value->eventandstatus() : nullptr;
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

void visit_shuntmodule_ShuntEventAndStatusYPSH(const set_t<shuntmodule::ShuntEventAndStatusYPSH>& setter, const get_t<shuntmodule::ShuntEventAndStatusYPSH>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("BlkCls", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_blkcls();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_blkopn();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_shopcap();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> shuntmodule::ENS_SwitchingCapabilityKind const *
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

void visit_shuntmodule_ShuntEventAndStatusZCAP(const set_t<shuntmodule::ShuntEventAndStatusZCAP>& setter, const get_t<shuntmodule::ShuntEventAndStatusZCAP>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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

    if(visitor.start_message_field("PointStatus", shuntmodule::ShuntEventAndStatusPoint::descriptor()))
    {
        visit_shuntmodule_ShuntEventAndStatusPoint(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> shuntmodule::ShuntEventAndStatusPoint const *
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

void visit_shuntmodule_ShuntSystem(const set_t<shuntmodule::ShuntSystem>& setter, const get_t<shuntmodule::ShuntSystem>& getter, ITypedModelVisitor<shuntmodule::ShuntEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](shuntmodule::ShuntEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const shuntmodule::ShuntEventProfile& profile) -> commonmodule::ConductingEquipment const *
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
