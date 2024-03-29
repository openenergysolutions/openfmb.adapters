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
using set_t = setter_t<breakermodule::BreakerStatusProfile, V>;

template <class V>
using get_t = getter_t<breakermodule::BreakerStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_breakermodule_Breaker(const set_t<breakermodule::Breaker>& setter, const get_t<breakermodule::Breaker>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_breakermodule_BreakerStatus(const set_t<breakermodule::BreakerStatus>& setter, const get_t<breakermodule::BreakerStatus>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_ACD(const set_t<commonmodule::ACD>& setter, const get_t<commonmodule::ACD>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_Optional_PhaseFaultDirectionKind(const set_t<commonmodule::Optional_PhaseFaultDirectionKind>& setter, const get_t<commonmodule::Optional_PhaseFaultDirectionKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_Optional_RecloseActionKind(const set_t<commonmodule::Optional_RecloseActionKind>& setter, const get_t<commonmodule::Optional_RecloseActionKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_PhaseDPS(const set_t<commonmodule::PhaseDPS>& setter, const get_t<commonmodule::PhaseDPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_PhaseRecloseAction(const set_t<commonmodule::PhaseRecloseAction>& setter, const get_t<commonmodule::PhaseRecloseAction>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_PhaseSPS(const set_t<commonmodule::PhaseSPS>& setter, const get_t<commonmodule::PhaseSPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](breakermodule::BreakerStatusProfile& profile) { return &profile; };
    const auto getter = [](const breakermodule::BreakerStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
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

    if(visitor.start_message_field("breaker", breakermodule::Breaker::descriptor()))
    {
        visit_breakermodule_Breaker(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_breaker();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> breakermodule::Breaker const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_breaker() ? &value->breaker() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("breakerStatus", breakermodule::BreakerStatus::descriptor()))
    {
        visit_breakermodule_BreakerStatus(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_breakerstatus();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> breakermodule::BreakerStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_breakerstatus() ? &value->breakerstatus() : nullptr;
                }
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

void visit_breakermodule_Breaker(const set_t<breakermodule::Breaker>& setter, const get_t<breakermodule::Breaker>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_breakermodule_BreakerStatus(const set_t<breakermodule::BreakerStatus>& setter, const get_t<breakermodule::BreakerStatus>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusValue const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_statusandeventxcbr();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusAndEventXCBR const *
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

void visit_commonmodule_ACD(const set_t<commonmodule::ACD>& setter, const get_t<commonmodule::ACD>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "dirGeneral",
        AccessorBuilder<breakermodule::BreakerStatusProfile,int>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int& value) { setter(profile)->set_dirgeneral(static_cast<commonmodule::FaultDirectionKind>(value)); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->dirgeneral());
                return true;
            }
        ),
        commonmodule::FaultDirectionKind_descriptor()
    );

    if(visitor.start_message_field("dirNeut", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_dirneut();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_PhaseFaultDirectionKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirneut() ? &value->dirneut() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("dirPhsA", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_dirphsa();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_PhaseFaultDirectionKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirphsa() ? &value->dirphsa() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("dirPhsB", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_dirphsb();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_PhaseFaultDirectionKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirphsb() ? &value->dirphsb() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("dirPhsC", commonmodule::Optional_PhaseFaultDirectionKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseFaultDirectionKind(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_dirphsc();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_PhaseFaultDirectionKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirphsc() ? &value->dirphsc() : nullptr;
                }
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
        "general",
        AccessorBuilder<breakermodule::BreakerStatusProfile,bool>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const bool& value) { setter(profile)->set_general(value); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->general());
                return true;
            }
        )
    );

    if(visitor.start_message_field("neut", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_neut();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_neut() ? &value->neut() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::BoolValue const *
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

    if(visitor.start_message_field("phsB", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::BoolValue const *
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

    if(visitor.start_message_field("phsC", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<breakermodule::BreakerStatusProfile,std::string>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerStatusProfile,int>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerStatusProfile,int>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<breakermodule::BreakerStatusProfile,int>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_PhaseFaultDirectionKind(const set_t<commonmodule::Optional_PhaseFaultDirectionKind>& setter, const get_t<commonmodule::Optional_PhaseFaultDirectionKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<breakermodule::BreakerStatusProfile,int>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::PhaseFaultDirectionKind>(value)); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::PhaseFaultDirectionKind_descriptor()
    );
}

void visit_commonmodule_Optional_RecloseActionKind(const set_t<commonmodule::Optional_RecloseActionKind>& setter, const get_t<commonmodule::Optional_RecloseActionKind>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<breakermodule::BreakerStatusProfile,int>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::RecloseActionKind>(value)); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PhaseDPS(const set_t<commonmodule::PhaseDPS>& setter, const get_t<commonmodule::PhaseDPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusDPS const *
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

void visit_commonmodule_PhaseRecloseAction(const set_t<commonmodule::PhaseRecloseAction>& setter, const get_t<commonmodule::PhaseRecloseAction>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::Optional_RecloseActionKind::descriptor()))
    {
        visit_commonmodule_Optional_RecloseActionKind(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::Optional_RecloseActionKind const *
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

void visit_commonmodule_PhaseSPS(const set_t<commonmodule::PhaseSPS>& setter, const get_t<commonmodule::PhaseSPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::PhaseDPS const *
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

    if(visitor.start_message_field("ProtectionPickup", commonmodule::ACD::descriptor()))
    {
        visit_commonmodule_ACD(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_protectionpickup();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::ACD const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_protectionmode();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::StatusINS const *
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

    if(visitor.start_message_field("RecloseEnabled", commonmodule::PhaseSPS::descriptor()))
    {
        visit_commonmodule_PhaseSPS(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_recloseenabled();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::PhaseSPS const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_reclosingaction();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::PhaseRecloseAction const *
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerStatusProfile,int>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerStatusProfile,int32_t>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const int32_t& value) { setter(profile)->set_stval(value); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<int32_t>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerStatusProfile,bool>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerStatusProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](breakermodule::BreakerStatusProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const breakermodule::BreakerStatusProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<breakermodule::BreakerStatusProfile,bool>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<breakermodule::BreakerStatusProfile,std::string>::build(
            [setter](breakermodule::BreakerStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const breakermodule::BreakerStatusProfile& profile, const handler_t<std::string>& handler)
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
