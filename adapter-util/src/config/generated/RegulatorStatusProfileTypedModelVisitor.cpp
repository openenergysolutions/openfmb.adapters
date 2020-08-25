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
using set_t = setter_t<regulatormodule::RegulatorStatusProfile, V>;

template <class V>
using get_t = getter_t<regulatormodule::RegulatorStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_AnalogueValueCtl(const set_t<commonmodule::AnalogueValueCtl>& setter, const get_t<commonmodule::AnalogueValueCtl>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_PhaseINS(const set_t<commonmodule::PhaseINS>& setter, const get_t<commonmodule::PhaseINS>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_StatusINC(const set_t<commonmodule::StatusINC>& setter, const get_t<commonmodule::StatusINC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_StatusSPC(const set_t<commonmodule::StatusSPC>& setter, const get_t<commonmodule::StatusSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_regulatormodule_RegulatorEventAndStatusANCR(const set_t<regulatormodule::RegulatorEventAndStatusANCR>& setter, const get_t<regulatormodule::RegulatorEventAndStatusANCR>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_regulatormodule_RegulatorEventAndStatusATCC(const set_t<regulatormodule::RegulatorEventAndStatusATCC>& setter, const get_t<regulatormodule::RegulatorEventAndStatusATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_regulatormodule_RegulatorStatus(const set_t<regulatormodule::RegulatorStatus>& setter, const get_t<regulatormodule::RegulatorStatus>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](regulatormodule::RegulatorStatusProfile& profile) { return &profile; };
    const auto getter = [](const regulatormodule::RegulatorStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("regulatorStatus", regulatormodule::RegulatorStatus::descriptor()))
    {
        visit_regulatormodule_RegulatorStatus(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_regulatorstatus();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> regulatormodule::RegulatorStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorstatus() ? &value->regulatorstatus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorSystem", regulatormodule::RegulatorSystem::descriptor()))
    {
        visit_regulatormodule_RegulatorSystem(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_regulatorsystem();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> regulatormodule::RegulatorSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorsystem() ? &value->regulatorsystem() : nullptr;
                }
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("setMag", commonmodule::AnalogueValueCtl::descriptor()))
    {
        visit_commonmodule_AnalogueValueCtl(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_setmag();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::AnalogueValueCtl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_setmag() ? &value->setmag() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::Unit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_units() ? &value->units() : nullptr;
                }
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

void visit_commonmodule_AnalogueValueCtl(const set_t<commonmodule::AnalogueValueCtl>& setter, const get_t<commonmodule::AnalogueValueCtl>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_f() ? &value->f() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("i", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::Int32Value const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_i() ? &value->i() : nullptr;
                }
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,std::string>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("ctlVal", commonmodule::AnalogueValueCtl::descriptor()))
    {
        visit_commonmodule_AnalogueValueCtl(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_ctlval();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::AnalogueValueCtl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ctlval() ? &value->ctlval() : nullptr;
                }
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

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ControlAPC const *
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

    if(visitor.start_message_field("phsA", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ControlAPC const *
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

    if(visitor.start_message_field("phsB", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ControlAPC const *
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

    if(visitor.start_message_field("phsC", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ControlAPC const *
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

void visit_commonmodule_PhaseINS(const set_t<commonmodule::PhaseINS>& setter, const get_t<commonmodule::PhaseINS>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusINS const *
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

    if(visitor.start_message_field("phsA", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusINS const *
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

    if(visitor.start_message_field("phsB", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusINS const *
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

    if(visitor.start_message_field("phsC", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusINS const *
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusINC(const set_t<commonmodule::StatusINC>& setter, const get_t<commonmodule::StatusINC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int32_t& value) { setter(profile)->set_stval(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int32_t>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int32_t& value) { setter(profile)->set_stval(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int32_t>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPC(const set_t<commonmodule::StatusSPC>& setter, const get_t<commonmodule::StatusSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,bool>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,bool>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorStatusProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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

    visitor.handle(
        "SIUnit",
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->siunit());
                return true;
            }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,bool>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,float>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorStatusProfile,std::string>::build(
            [setter](regulatormodule::RegulatorStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_regulatormodule_RegulatorEventAndStatusANCR(const set_t<regulatormodule::RegulatorEventAndStatusANCR>& setter, const get_t<regulatormodule::RegulatorEventAndStatusANCR>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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

    if(visitor.start_message_field("PointStatus", regulatormodule::RegulatorEventAndStatusATCC::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusATCC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> regulatormodule::RegulatorEventAndStatusATCC const *
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

void visit_regulatormodule_RegulatorEventAndStatusATCC(const set_t<regulatormodule::RegulatorEventAndStatusATCC>& setter, const get_t<regulatormodule::RegulatorEventAndStatusATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("BndCtr", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_bndctr();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_bndctr() ? &value->bndctr() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BndWid", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_bndwid();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_bndwid() ? &value->bndwid() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCR", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_ldcr();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ldcr() ? &value->ldcr() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCX", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_ldcx();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ldcx() ? &value->ldcx() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ParOp", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_parop();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_parop() ? &value->parop() : nullptr;
                }
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
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("StDlTmms", commonmodule::StatusINC::descriptor()))
    {
        visit_commonmodule_StatusINC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_stdltmms();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusINC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_stdltmms() ? &value->stdltmms() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TapOpErr", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_tapoperr();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tapoperr() ? &value->tapoperr() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TapPos", commonmodule::PhaseINS::descriptor()))
    {
        visit_commonmodule_PhaseINS(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_tappos();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::PhaseINS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tappos() ? &value->tappos() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolSpt", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_volspt();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_volspt() ? &value->volspt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusSPC::descriptor()))
    {
        visit_commonmodule_StatusSPC(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusSPC const *
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

void visit_regulatormodule_RegulatorStatus(const set_t<regulatormodule::RegulatorStatus>& setter, const get_t<regulatormodule::RegulatorStatus>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::StatusValue const *
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

    if(visitor.start_message_field("regulatorEventAndStatusANCR", regulatormodule::RegulatorEventAndStatusANCR::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusANCR(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_regulatoreventandstatusancr();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> regulatormodule::RegulatorEventAndStatusANCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatoreventandstatusancr() ? &value->regulatoreventandstatusancr() : nullptr;
                }
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

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](regulatormodule::RegulatorStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const regulatormodule::RegulatorStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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
