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
using set_t = setter_t<switchmodule::SwitchStatusProfile, V>;

template <class V>
using get_t = getter_t<switchmodule::SwitchStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_switchmodule_SwitchStatus(const set_t<switchmodule::SwitchStatus>& setter, const get_t<switchmodule::SwitchStatus>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit_switchmodule_SwitchStatusXSWI(const set_t<switchmodule::SwitchStatusXSWI>& setter, const get_t<switchmodule::SwitchStatusXSWI>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](switchmodule::SwitchStatusProfile& profile) { return &profile; };
    const auto getter = [](const switchmodule::SwitchStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_statusmessageinfo() ? &value->statusmessageinfo() : nullptr;
                }
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::IED const *
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_protectedswitch();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> switchmodule::ProtectedSwitch const *
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

    if(visitor.start_message_field("switchStatus", switchmodule::SwitchStatus::descriptor()))
    {
        visit_switchmodule_SwitchStatus(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_switchstatus();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> switchmodule::SwitchStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchstatus() ? &value->switchstatus() : nullptr;
                }
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<switchmodule::SwitchStatusProfile,std::string>::build(
            [setter](switchmodule::SwitchStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<switchmodule::SwitchStatusProfile,commonmodule::Quality>::build(
            [setter](switchmodule::SwitchStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<switchmodule::SwitchStatusProfile,int>::build(
            [setter](switchmodule::SwitchStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<switchmodule::SwitchStatusProfile,commonmodule::Timestamp>::build(
            [setter](switchmodule::SwitchStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<switchmodule::SwitchStatusProfile,commonmodule::Quality>::build(
            [setter](switchmodule::SwitchStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<switchmodule::SwitchStatusProfile,int>::build(
            [setter](switchmodule::SwitchStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<switchmodule::SwitchStatusProfile,commonmodule::Timestamp>::build(
            [setter](switchmodule::SwitchStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<switchmodule::SwitchStatusProfile,int>::build(
            [setter](switchmodule::SwitchStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<switchmodule::SwitchStatusProfile,commonmodule::Timestamp>::build(
            [setter](switchmodule::SwitchStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<switchmodule::SwitchStatusProfile,commonmodule::Quality>::build(
            [setter](switchmodule::SwitchStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<switchmodule::SwitchStatusProfile,int>::build(
            [setter](switchmodule::SwitchStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<switchmodule::SwitchStatusProfile,commonmodule::Timestamp>::build(
            [setter](switchmodule::SwitchStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchStatusProfile,std::string>::build(
            [setter](switchmodule::SwitchStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_switchmodule_SwitchStatus(const set_t<switchmodule::SwitchStatus>& setter, const get_t<switchmodule::SwitchStatus>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::StatusValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_statusvalue() ? &value->statusvalue() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("switchStatusXSWI", switchmodule::SwitchStatusXSWI::descriptor()))
    {
        visit_switchmodule_SwitchStatusXSWI(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_switchstatusxswi();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> switchmodule::SwitchStatusXSWI const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchstatusxswi() ? &value->switchstatusxswi() : nullptr;
                }
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

void visit_switchmodule_SwitchStatusXSWI(const set_t<switchmodule::SwitchStatusXSWI>& setter, const get_t<switchmodule::SwitchStatusXSWI>& getter, ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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

    if(visitor.start_message_field("Pos", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](switchmodule::SwitchStatusProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const switchmodule::SwitchStatusProfile& profile) -> commonmodule::StatusDPS const *
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
