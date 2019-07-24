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
using set_t = setter_t<generationmodule::GenerationEventProfile, V>;

template <class V>
using get_t = getter_t<generationmodule::GenerationEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationEvent(const set_t<generationmodule::GenerationEvent>& setter, const get_t<generationmodule::GenerationEvent>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationEventAndStatusZGEN(const set_t<generationmodule::GenerationEventAndStatusZGEN>& setter, const get_t<generationmodule::GenerationEventAndStatusZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationEventZGEN(const set_t<generationmodule::GenerationEventZGEN>& setter, const get_t<generationmodule::GenerationEventZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationPointStatus(const set_t<generationmodule::GenerationPointStatus>& setter, const get_t<generationmodule::GenerationPointStatus>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](generationmodule::GenerationEventProfile& profile) { return &profile; };
    const auto getter = [](const generationmodule::GenerationEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::EventMessageInfo const *
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

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_generatingunit();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> generationmodule::GeneratingUnit const *
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

    if(visitor.start_message_field("generationEvent", generationmodule::GenerationEvent::descriptor()))
    {
        visit_generationmodule_GenerationEvent(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_generationevent();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> generationmodule::GenerationEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationevent() ? &value->generationevent() : nullptr;
                }
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::IED const *
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

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::Optional_UnitSymbolKind const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_value();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<generationmodule::GenerationEventProfile,std::string>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->overflow());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<generationmodule::GenerationEventProfile,commonmodule::Quality>::build(
            [setter](generationmodule::GenerationEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<generationmodule::GenerationEventProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<generationmodule::GenerationEventProfile,commonmodule::Quality>::build(
            [setter](generationmodule::GenerationEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<generationmodule::GenerationEventProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ENS_HealthKind const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<generationmodule::GenerationEventProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<generationmodule::GenerationEventProfile,commonmodule::Quality>::build(
            [setter](generationmodule::GenerationEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<generationmodule::GenerationEventProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
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

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ConductingEquipment const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_maxoperatingp();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ActivePower const *
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

void visit_generationmodule_GenerationEvent(const set_t<generationmodule::GenerationEvent>& setter, const get_t<generationmodule::GenerationEvent>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::EventValue const *
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

    if(visitor.start_message_field("generationEventZGEN", generationmodule::GenerationEventZGEN::descriptor()))
    {
        visit_generationmodule_GenerationEventZGEN(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_generationeventzgen();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> generationmodule::GenerationEventZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationeventzgen() ? &value->generationeventzgen() : nullptr;
                }
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

void visit_generationmodule_GenerationEventAndStatusZGEN(const set_t<generationmodule::GenerationEventAndStatusZGEN>& setter, const get_t<generationmodule::GenerationEventAndStatusZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_auxpwrst();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_gnsynst();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> generationmodule::GenerationPointStatus const *
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

void visit_generationmodule_GenerationEventZGEN(const set_t<generationmodule::GenerationEventZGEN>& setter, const get_t<generationmodule::GenerationEventZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("generationEventAndStatusZGEN", generationmodule::GenerationEventAndStatusZGEN::descriptor()))
    {
        visit_generationmodule_GenerationEventAndStatusZGEN(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_generationeventandstatuszgen();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> generationmodule::GenerationEventAndStatusZGEN const *
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

void visit_generationmodule_GenerationPointStatus(const set_t<generationmodule::GenerationPointStatus>& setter, const get_t<generationmodule::GenerationPointStatus>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ControlDPC const *
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

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,std::string>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<std::string>& handler)
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
