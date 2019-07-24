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
using set_t = setter_t<regulatormodule::RegulatorEventProfile, V>;

template <class V>
using get_t = getter_t<regulatormodule::RegulatorEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_AnalogueValueCtl(const set_t<commonmodule::AnalogueValueCtl>& setter, const get_t<commonmodule::AnalogueValueCtl>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_StatusISC(const set_t<commonmodule::StatusISC>& setter, const get_t<commonmodule::StatusISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_StatusSPC(const set_t<commonmodule::StatusSPC>& setter, const get_t<commonmodule::StatusSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_regulatormodule_RegulatorEvent(const set_t<regulatormodule::RegulatorEvent>& setter, const get_t<regulatormodule::RegulatorEvent>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_regulatormodule_RegulatorEventAndStatusANCR(const set_t<regulatormodule::RegulatorEventAndStatusANCR>& setter, const get_t<regulatormodule::RegulatorEventAndStatusANCR>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_regulatormodule_RegulatorEventAndStatusATCC(const set_t<regulatormodule::RegulatorEventAndStatusATCC>& setter, const get_t<regulatormodule::RegulatorEventAndStatusATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_regulatormodule_RegulatorEventAndStatusPoint(const set_t<regulatormodule::RegulatorEventAndStatusPoint>& setter, const get_t<regulatormodule::RegulatorEventAndStatusPoint>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](regulatormodule::RegulatorEventProfile& profile) { return &profile; };
    const auto getter = [](const regulatormodule::RegulatorEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::EventMessageInfo const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("regulatorEvent", regulatormodule::RegulatorEvent::descriptor()))
    {
        visit_regulatormodule_RegulatorEvent(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_regulatorevent();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> regulatormodule::RegulatorEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorevent() ? &value->regulatorevent() : nullptr;
                }
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_regulatorsystem();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> regulatormodule::RegulatorSystem const *
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("setMag", commonmodule::AnalogueValueCtl::descriptor()))
    {
        visit_commonmodule_AnalogueValueCtl(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_setmag();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::AnalogueValueCtl const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_AnalogueValueCtl(const set_t<commonmodule::AnalogueValueCtl>& setter, const get_t<commonmodule::AnalogueValueCtl>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,std::string>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->overflow());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ENS_HealthKind const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusISC(const set_t<commonmodule::StatusISC>& setter, const get_t<commonmodule::StatusISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int32_t& value) { setter(profile)->set_stval(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int32_t>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusSPC(const set_t<commonmodule::StatusSPC>& setter, const get_t<commonmodule::StatusSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Quality>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<regulatormodule::RegulatorEventProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,bool>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int>& handler)
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

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorEventProfile,float>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorEventProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorEventProfile,std::string>::build(
            [setter](regulatormodule::RegulatorEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_regulatormodule_RegulatorEvent(const set_t<regulatormodule::RegulatorEvent>& setter, const get_t<regulatormodule::RegulatorEvent>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::EventValue const *
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

    if(visitor.start_message_field("regulatorEventAndStatusANCR", regulatormodule::RegulatorEventAndStatusANCR::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusANCR(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_regulatoreventandstatusancr();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> regulatormodule::RegulatorEventAndStatusANCR const *
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

void visit_regulatormodule_RegulatorEventAndStatusANCR(const set_t<regulatormodule::RegulatorEventAndStatusANCR>& setter, const get_t<regulatormodule::RegulatorEventAndStatusANCR>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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

    if(visitor.start_message_field("PointStatus", regulatormodule::RegulatorEventAndStatusPoint::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusPoint(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> regulatormodule::RegulatorEventAndStatusPoint const *
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

void visit_regulatormodule_RegulatorEventAndStatusATCC(const set_t<regulatormodule::RegulatorEventAndStatusATCC>& setter, const get_t<regulatormodule::RegulatorEventAndStatusATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("BndCtr", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_bndctr();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ASG const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_bndwid();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ASG const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_ldcr();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ASG const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_ldcx();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ASG const *
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

    if(visitor.start_message_field("LDCZ", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_ldcz();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ldcz() ? &value->ldcz() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ParOp", commonmodule::StatusSPC::descriptor()))
    {
        visit_commonmodule_StatusSPC(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_parop();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::StatusSPC const *
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

    if(visitor.start_message_field("TapOpErr", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_tapoperr();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("TapPos", commonmodule::StatusISC::descriptor()))
    {
        visit_commonmodule_StatusISC(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_tappos();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::StatusISC const *
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
}

void visit_regulatormodule_RegulatorEventAndStatusPoint(const set_t<regulatormodule::RegulatorEventAndStatusPoint>& setter, const get_t<regulatormodule::RegulatorEventAndStatusPoint>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("eventAndStatus", regulatormodule::RegulatorEventAndStatusATCC::descriptor()))
    {
        visit_regulatormodule_RegulatorEventAndStatusATCC(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_eventandstatus();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> regulatormodule::RegulatorEventAndStatusATCC const *
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

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::StatusSPC::descriptor()))
    {
        visit_commonmodule_StatusSPC(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::StatusSPC const *
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

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusSPC::descriptor()))
    {
        visit_commonmodule_StatusSPC(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::StatusSPC const *
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

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](regulatormodule::RegulatorEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const regulatormodule::RegulatorEventProfile& profile) -> commonmodule::ConductingEquipment const *
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
