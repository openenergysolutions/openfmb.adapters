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
using set_t = setter_t<generationmodule::GenerationEventProfile, V>;

template <class V>
using get_t = getter_t<generationmodule::GenerationEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ClearingTime(const set_t<commonmodule::ClearingTime>& setter, const get_t<commonmodule::ClearingTime>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_AlrmKind(const set_t<commonmodule::Optional_AlrmKind>& setter, const get_t<commonmodule::Optional_AlrmKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_GridConnectionStateKind(const set_t<commonmodule::Optional_GridConnectionStateKind>& setter, const get_t<commonmodule::Optional_GridConnectionStateKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_OperatingStateKind(const set_t<commonmodule::Optional_OperatingStateKind>& setter, const get_t<commonmodule::Optional_OperatingStateKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationEvent(const set_t<generationmodule::GenerationEvent>& setter, const get_t<generationmodule::GenerationEvent>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationEventAndStatusZGEN(const set_t<generationmodule::GenerationEventAndStatusZGEN>& setter, const get_t<generationmodule::GenerationEventAndStatusZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationEventZGEN(const set_t<generationmodule::GenerationEventZGEN>& setter, const get_t<generationmodule::GenerationEventZGEN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_generationmodule_GenerationPointStatus(const set_t<generationmodule::GenerationPointStatus>& setter, const get_t<generationmodule::GenerationPointStatus>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

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

void visit_commonmodule_ClearingTime(const set_t<commonmodule::ClearingTime>& setter, const get_t<commonmodule::ClearingTime>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "seconds",
        AccessorBuilder<generationmodule::GenerationEventProfile,uint64_t>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<uint64_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->seconds());
                return true;
            }
        )
    );

    visitor.handle(
        "nanoseconds",
        AccessorBuilder<generationmodule::GenerationEventProfile,uint32_t>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const uint32_t& value) { setter(profile)->set_nanoseconds(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<uint32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->nanoseconds());
                return true;
            }
        )
    );
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

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("enterServiceParameter", commonmodule::OperationDCTE::descriptor()))
    {
        visit_commonmodule_OperationDCTE(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_enterserviceparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDCTE const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_enterserviceparameter() ? &value->enterserviceparameter() : nullptr;
                }
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
        "hzHiLim",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_hzhilim(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->hzhilim());
                return true;
            }
        )
    );

    visitor.handle(
        "hzLoLim",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_hzlolim(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->hzlolim());
                return true;
            }
        )
    );

    visitor.handle(
        "rtnSrvAuto",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_rtnsrvauto(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->rtnsrvauto());
                return true;
            }
        )
    );

    visitor.handle(
        "vHiLim",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_vhilim(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vhilim());
                return true;
            }
        )
    );

    visitor.handle(
        "vLoLim",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_vlolim(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vlolim());
                return true;
            }
        )
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

    if(visitor.start_message_field("modBlk", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("overHzWPt", commonmodule::HzWPoint::descriptor()))
    {
        visit_commonmodule_HzWPoint(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_overhzwpt();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::HzWPoint const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_overhzwpt() ? &value->overhzwpt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("overHzWParameter", commonmodule::OperationDHFW::descriptor()))
    {
        visit_commonmodule_OperationDHFW(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_overhzwparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDHFW const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_overhzwparameter() ? &value->overhzwparameter() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("underHzWPt", commonmodule::HzWPoint::descriptor()))
    {
        visit_commonmodule_HzWPoint(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_underhzwpt();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::HzWPoint const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_underhzwpt() ? &value->underhzwpt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("underHzWParameter", commonmodule::OperationDLFW::descriptor()))
    {
        visit_commonmodule_OperationDLFW(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_underhzwparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDLFW const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_underhzwparameter() ? &value->underhzwparameter() : nullptr;
                }
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

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "deadbandHzVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_deadbandhzval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->deadbandhzval());
                return true;
            }
        )
    );

    visitor.handle(
        "slopeVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_slopeval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->slopeval());
                return true;
            }
        )
    );
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

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("maxLimParameter", commonmodule::OperationDWMX::descriptor()))
    {
        visit_commonmodule_OperationDWMX(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_maxlimparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDWMX const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_maxlimparameter() ? &value->maxlimparameter() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("minLimParameter", commonmodule::OperationDWMN::descriptor()))
    {
        visit_commonmodule_OperationDWMN(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_minlimparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDWMN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_minlimparameter() ? &value->minlimparameter() : nullptr;
                }
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
        "wMaxSptVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_wmaxsptval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wmaxsptval());
                return true;
            }
        )
    );

    visitor.handle(
        "wMinSptVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_wminsptval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wminsptval());
                return true;
            }
        )
    );
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

    if(visitor.start_message_field("HotLineTag", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "rndDlTmms",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_rnddltmms(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->rnddltmms());
                return true;
            }
        )
    );

    visitor.handle(
        "rtnDlTmms",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_rtndltmms(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->rtndltmms());
                return true;
            }
        )
    );

    visitor.handle(
        "rtnRmpTmms",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_rtnrmptmms(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->rtnrmptmms());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    visitor.handle(
        "pFExtSet",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_pfextset(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->pfextset());
                return true;
            }
        )
    );

    visitor.handle(
        "pFGnTgtMxVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_pfgntgtmxval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->pfgntgtmxval());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    if(visitor.start_message_field("OplTmmsMax", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ClearingTime const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_opltmmsmax() ? &value->opltmmsmax() : nullptr;
                }
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

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    if(visitor.start_message_field("OplTmmsMax", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ClearingTime const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_opltmmsmax() ? &value->opltmmsmax() : nullptr;
                }
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

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "varTgtSpt",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_vartgtspt(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vartgtspt());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    if(visitor.start_message_field("OplTmmsMax", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ClearingTime const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_opltmmsmax() ? &value->opltmmsmax() : nullptr;
                }
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
        "VRef",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_vref(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vref());
                return true;
            }
        )
    );

    visitor.handle(
        "VRefAdjEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_vrefadjena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vrefadjena());
                return true;
            }
        )
    );

    visitor.handle(
        "VRefTmms",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_vreftmms(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vreftmms());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    if(visitor.start_message_field("OplTmmsMax", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ClearingTime const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_opltmmsmax() ? &value->opltmmsmax() : nullptr;
                }
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

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_Optional_AlrmKind(const set_t<commonmodule::Optional_AlrmKind>& setter, const get_t<commonmodule::Optional_AlrmKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::AlrmKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::AlrmKind_descriptor()
    );
}

void visit_commonmodule_Optional_GridConnectionStateKind(const set_t<commonmodule::Optional_GridConnectionStateKind>& setter, const get_t<commonmodule::Optional_GridConnectionStateKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::GridConnectionStateKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::GridConnectionStateKind_descriptor()
    );
}

void visit_commonmodule_Optional_OperatingStateKind(const set_t<commonmodule::Optional_OperatingStateKind>& setter, const get_t<commonmodule::Optional_OperatingStateKind>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,int>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::OperatingStateKind>(value)); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::OperatingStateKind_descriptor()
    );
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

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
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

    if(visitor.start_message_field("pFParameter", commonmodule::OperationDFPF::descriptor()))
    {
        visit_commonmodule_OperationDFPF(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_pfparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDFPF const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pfparameter() ? &value->pfparameter() : nullptr;
                }
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

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmHzPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationEventProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_overcrvpts();
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
            const auto get = [getter, i](const generationmodule::GenerationEventProfile& profile) -> commonmodule::TmHzPoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->overcrvpts_size()) ? &value->overcrvpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_TmHzPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("undercrvpts", commonmodule::TmHzPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationEventProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_undercrvpts();
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
            const auto get = [getter, i](const generationmodule::GenerationEventProfile& profile) -> commonmodule::TmHzPoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->undercrvpts_size()) ? &value->undercrvpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_TmHzPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "hzVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_hzval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->hzval());
                return true;
            }
        )
    );

    if(visitor.start_message_field("tmVal", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_tmval();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ClearingTime const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tmval() ? &value->tmval() : nullptr;
                }
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

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmVoltPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationEventProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_overcrvpts();
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
            const auto get = [getter, i](const generationmodule::GenerationEventProfile& profile) -> commonmodule::TmVoltPoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->overcrvpts_size()) ? &value->overcrvpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_TmVoltPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("undercrvpts", commonmodule::TmVoltPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationEventProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_undercrvpts();
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
            const auto get = [getter, i](const generationmodule::GenerationEventProfile& profile) -> commonmodule::TmVoltPoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->undercrvpts_size()) ? &value->undercrvpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_TmVoltPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    if(visitor.start_message_field("tmVal", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_tmval();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::ClearingTime const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tmval() ? &value->tmval() : nullptr;
                }
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
        "voltVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    if(visitor.start_message_field("varParameter", commonmodule::OperationDVAR::descriptor()))
    {
        visit_commonmodule_OperationDVAR(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_varparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDVAR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varparameter() ? &value->varparameter() : nullptr;
                }
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

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationEventProfile& profile)
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
            const auto get = [getter, i](const generationmodule::GenerationEventProfile& profile) -> commonmodule::VoltVarPoint const*
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
            visit_commonmodule_VoltVarPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    if(visitor.start_message_field("vVarParameter", commonmodule::OperationDVVR::descriptor()))
    {
        visit_commonmodule_OperationDVVR(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_vvarparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDVVR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vvarparameter() ? &value->vvarparameter() : nullptr;
                }
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

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->varval());
                return true;
            }
        )
    );

    visitor.handle(
        "voltVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltWPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationEventProfile& profile)
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
            const auto get = [getter, i](const generationmodule::GenerationEventProfile& profile) -> commonmodule::VoltWPoint const*
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
            visit_commonmodule_VoltWPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    if(visitor.start_message_field("voltWParameter", commonmodule::OperationDVWC::descriptor()))
    {
        visit_commonmodule_OperationDVWC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_voltwparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDVWC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltwparameter() ? &value->voltwparameter() : nullptr;
                }
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

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "voltVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );

    visitor.handle(
        "wVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::WVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationEventProfile& profile)
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
            const auto get = [getter, i](const generationmodule::GenerationEventProfile& profile) -> commonmodule::WVarPoint const*
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
            visit_commonmodule_WVarPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    if(visitor.start_message_field("wVarParameter", commonmodule::OperationDWVR::descriptor()))
    {
        visit_commonmodule_OperationDWVR(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_wvarparameter();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::OperationDWVR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wvarparameter() ? &value->wvarparameter() : nullptr;
                }
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

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->varval());
                return true;
            }
        )
    );

    visitor.handle(
        "wVal",
        AccessorBuilder<generationmodule::GenerationEventProfile,float>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
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

    if(visitor.start_message_field("Alrm", commonmodule::Optional_AlrmKind::descriptor()))
    {
        visit_commonmodule_Optional_AlrmKind(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_alrm();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::Optional_AlrmKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_alrm() ? &value->alrm() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GridConnectionState", commonmodule::Optional_GridConnectionStateKind::descriptor()))
    {
        visit_commonmodule_Optional_GridConnectionStateKind(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_gridconnectionstate();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::Optional_GridConnectionStateKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_gridconnectionstate() ? &value->gridconnectionstate() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ManAlrmInfo", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_manalrminfo();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_manalrminfo() ? &value->manalrminfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("OperatingState", commonmodule::Optional_OperatingStateKind::descriptor()))
    {
        visit_commonmodule_Optional_OperatingStateKind(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_operatingstate();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::Optional_OperatingStateKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_operatingstate() ? &value->operatingstate() : nullptr;
                }
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
    if(visitor.start_message_field("blackStartEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("syncBackToGrid", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("enterServiceOperation", commonmodule::EnterServiceAPC::descriptor()))
    {
        visit_commonmodule_EnterServiceAPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_enterserviceoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::EnterServiceAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_enterserviceoperation() ? &value->enterserviceoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("hzWOperation", commonmodule::HzWAPC::descriptor()))
    {
        visit_commonmodule_HzWAPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_hzwoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::HzWAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_hzwoperation() ? &value->hzwoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("limitWOperation", commonmodule::LimitWAPC::descriptor()))
    {
        visit_commonmodule_LimitWAPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_limitwoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::LimitWAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_limitwoperation() ? &value->limitwoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pFOperation", commonmodule::PFSPC::descriptor()))
    {
        visit_commonmodule_PFSPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_pfoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::PFSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pfoperation() ? &value->pfoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("tmHzTripOperation", commonmodule::TmHzCSG::descriptor()))
    {
        visit_commonmodule_TmHzCSG(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_tmhztripoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::TmHzCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tmhztripoperation() ? &value->tmhztripoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("tmVoltTripOperation", commonmodule::TmVoltCSG::descriptor()))
    {
        visit_commonmodule_TmVoltCSG(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_tmvolttripoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::TmVoltCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tmvolttripoperation() ? &value->tmvolttripoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("vArOperation", commonmodule::VarSPC::descriptor()))
    {
        visit_commonmodule_VarSPC(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_varoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::VarSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varoperation() ? &value->varoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltVarOperation", commonmodule::VoltVarCSG::descriptor()))
    {
        visit_commonmodule_VoltVarCSG(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_voltvaroperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::VoltVarCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltvaroperation() ? &value->voltvaroperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltWOperation", commonmodule::VoltWCSG::descriptor()))
    {
        visit_commonmodule_VoltWCSG(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_voltwoperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::VoltWCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltwoperation() ? &value->voltwoperation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("wVarOperation", commonmodule::WVarCSG::descriptor()))
    {
        visit_commonmodule_WVarCSG(
            [setter](generationmodule::GenerationEventProfile& profile)
            {
                return setter(profile)->mutable_wvaroperation();
            },
            [getter](const generationmodule::GenerationEventProfile& profile) -> commonmodule::WVarCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wvaroperation() ? &value->wvaroperation() : nullptr;
                }
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationEventProfile,bool>::build(
            [setter](generationmodule::GenerationEventProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
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
