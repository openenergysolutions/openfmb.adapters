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
using set_t = setter_t<reclosermodule::RecloserStatusProfile, V>;

template <class V>
using get_t = getter_t<reclosermodule::RecloserStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_reclosermodule_Recloser(const set_t<reclosermodule::Recloser>& setter, const get_t<reclosermodule::Recloser>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit_reclosermodule_RecloserStatus(const set_t<reclosermodule::RecloserStatus>& setter, const get_t<reclosermodule::RecloserStatus>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](reclosermodule::RecloserStatusProfile& profile) { return &profile; };
    const auto getter = [](const reclosermodule::RecloserStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::IED const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_recloser();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> reclosermodule::Recloser const *
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

    if(visitor.start_message_field("recloserStatus", reclosermodule::RecloserStatus::descriptor()))
    {
        visit_reclosermodule_RecloserStatus(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_recloserstatus();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> reclosermodule::RecloserStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_recloserstatus() ? &value->recloserstatus() : nullptr;
                }
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<reclosermodule::RecloserStatusProfile,std::string>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->badreference());
                return true;
            }
        )
    );

    visitor.handle(
        "failure",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->failure());
                return true;
            }
        )
    );

    visitor.handle(
        "inaccurate",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->inaccurate());
                return true;
            }
        )
    );

    visitor.handle(
        "inconsistent",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->inconsistent());
                return true;
            }
        )
    );

    visitor.handle(
        "oldData",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->olddata());
                return true;
            }
        )
    );

    visitor.handle(
        "oscillatory",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->oscillatory());
                return true;
            }
        )
    );

    visitor.handle(
        "outOfRange",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->outofrange());
                return true;
            }
        )
    );

    visitor.handle(
        "overflow",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->overflow());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserStatusProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserStatusProfile,int>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<reclosermodule::RecloserStatusProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserStatusProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserStatusProfile,int>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<reclosermodule::RecloserStatusProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<reclosermodule::RecloserStatusProfile,int>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<reclosermodule::RecloserStatusProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::StatusDPS const *
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<reclosermodule::RecloserStatusProfile,commonmodule::Quality>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<reclosermodule::RecloserStatusProfile,int>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<reclosermodule::RecloserStatusProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->clockfailure());
                return true;
            }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->clocknotsynchronized());
                return true;
            }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->leapsecondsknown());
                return true;
            }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,int>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->timeaccuracy());
                return true;
            }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,bool>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reclosermodule::RecloserStatusProfile,std::string>::build(
            [setter](reclosermodule::RecloserStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const reclosermodule::RecloserStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_reclosermodule_Recloser(const set_t<reclosermodule::Recloser>& setter, const get_t<reclosermodule::Recloser>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_normalopen();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_reclosermodule_RecloserStatus(const set_t<reclosermodule::RecloserStatus>& setter, const get_t<reclosermodule::RecloserStatus>& getter, ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::StatusValue const *
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

    if(visitor.start_message_field("statusAndEventXCBR", commonmodule::StatusAndEventXCBR::descriptor()))
    {
        visit_commonmodule_StatusAndEventXCBR(
            [setter](reclosermodule::RecloserStatusProfile& profile)
            {
                return setter(profile)->mutable_statusandeventxcbr();
            },
            [getter](const reclosermodule::RecloserStatusProfile& profile) -> commonmodule::StatusAndEventXCBR const *
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
