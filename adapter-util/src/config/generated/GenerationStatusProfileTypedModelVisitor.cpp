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
using set_t = setter_t<generationmodule::GenerationStatusProfile, V>;

template <class V>
using get_t = getter_t<generationmodule::GenerationStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_generationmodule_GenerationEventAndStatusZGEN(const set_t<generationmodule::GenerationEventAndStatusZGEN>& setter, const get_t<generationmodule::GenerationEventAndStatusZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_generationmodule_GenerationPointStatus(const set_t<generationmodule::GenerationPointStatus>& setter, const get_t<generationmodule::GenerationPointStatus>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_generationmodule_GenerationStatus(const set_t<generationmodule::GenerationStatus>& setter, const get_t<generationmodule::GenerationStatus>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_generationmodule_GenerationStatusZGEN(const set_t<generationmodule::GenerationStatusZGEN>& setter, const get_t<generationmodule::GenerationStatusZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](generationmodule::GenerationStatusProfile& profile) { return &profile; };
    const auto getter = [](const generationmodule::GenerationStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
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

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_generatingunit();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> generationmodule::GeneratingUnit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generatingunit() ? &value->generatingunit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationStatus", generationmodule::GenerationStatus::descriptor()))
    {
        visit_generationmodule_GenerationStatus(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_generationstatus();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> generationmodule::GenerationStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationstatus() ? &value->generationstatus() : nullptr;
                }
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::IED const *
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
}

// ---- template definitions for child types ----

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_multiplier() ? &value->multiplier() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("unit", commonmodule::Optional_UnitSymbolKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitSymbolKind(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::Optional_UnitSymbolKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_unit() ? &value->unit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("value", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_value();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_value() ? &value->value() : nullptr;
                }
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<generationmodule::GenerationStatusProfile,std::string>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Quality>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<generationmodule::GenerationStatusProfile,int>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Quality>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<generationmodule::GenerationStatusProfile,int>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<generationmodule::GenerationStatusProfile,int>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationStatusProfile,int>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationStatusProfile,int>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::UnitMultiplierKind_descriptor()
    );
}

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationStatusProfile,int>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Quality>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<generationmodule::GenerationStatusProfile,int>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Quality>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<generationmodule::GenerationStatusProfile,bool>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<generationmodule::GenerationStatusProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("maxOperatingP", commonmodule::ActivePower::descriptor()))
    {
        visit_commonmodule_ActivePower(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_maxoperatingp();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::ActivePower const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_maxoperatingp() ? &value->maxoperatingp() : nullptr;
                }
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

void visit_generationmodule_GenerationEventAndStatusZGEN(const set_t<generationmodule::GenerationEventAndStatusZGEN>& setter, const get_t<generationmodule::GenerationEventAndStatusZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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

    if(visitor.start_message_field("AuxPwrSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_auxpwrst();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_auxpwrst() ? &value->auxpwrst() : nullptr;
                }
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("GnSynSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_gnsynst();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_gnsynst() ? &value->gnsynst() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PointStatus", generationmodule::GenerationPointStatus::descriptor()))
    {
        visit_generationmodule_GenerationPointStatus(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> generationmodule::GenerationPointStatus const *
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

void visit_generationmodule_GenerationPointStatus(const set_t<generationmodule::GenerationPointStatus>& setter, const get_t<generationmodule::GenerationPointStatus>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusDPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_blackstartenabled() ? &value->blackstartenabled() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusDPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_frequencysetpointenabled() ? &value->frequencysetpointenabled() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pcthzdroop() ? &value->pcthzdroop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pctvdroop() ? &value->pctvdroop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("syncBackToGrid", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusDPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_syncbacktogrid() ? &value->syncbacktogrid() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusDPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_transtoislndongridlossenabled() ? &value->transtoislndongridlossenabled() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusDPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagesetpointenabled() ? &value->voltagesetpointenabled() : nullptr;
                }
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

void visit_generationmodule_GenerationStatus(const set_t<generationmodule::GenerationStatus>& setter, const get_t<generationmodule::GenerationStatus>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> commonmodule::StatusValue const *
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

    if(visitor.start_message_field("generationStatusZGEN", generationmodule::GenerationStatusZGEN::descriptor()))
    {
        visit_generationmodule_GenerationStatusZGEN(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_generationstatuszgen();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> generationmodule::GenerationStatusZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationstatuszgen() ? &value->generationstatuszgen() : nullptr;
                }
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

void visit_generationmodule_GenerationStatusZGEN(const set_t<generationmodule::GenerationStatusZGEN>& setter, const get_t<generationmodule::GenerationStatusZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    if(visitor.start_message_field("generationEventAndStatusZGEN", generationmodule::GenerationEventAndStatusZGEN::descriptor()))
    {
        visit_generationmodule_GenerationEventAndStatusZGEN(
            [setter](generationmodule::GenerationStatusProfile& profile)
            {
                return setter(profile)->mutable_generationeventandstatuszgen();
            },
            [getter](const generationmodule::GenerationStatusProfile& profile) -> generationmodule::GenerationEventAndStatusZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationeventandstatuszgen() ? &value->generationeventandstatuszgen() : nullptr;
                }
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationStatusProfile,bool>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationStatusProfile,float>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationStatusProfile,std::string>::build(
            [setter](generationmodule::GenerationStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationStatusProfile& profile, const handler_t<std::string>& handler)
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
