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
using set_t = setter_t<breakermodule::BreakerEventProfile, V>;

template <class V>
using get_t = getter_t<breakermodule::BreakerEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_breakermodule_Breaker(const set_t<breakermodule::Breaker>& setter, const get_t<breakermodule::Breaker>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_breakermodule_BreakerEvent(const set_t<breakermodule::BreakerEvent>& setter, const get_t<breakermodule::BreakerEvent>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](breakermodule::BreakerEventProfile& profile) { return &profile; };
    const auto getter = [](const breakermodule::BreakerEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::EventMessageInfo const *
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

    if(visitor.start_message_field("breaker", breakermodule::Breaker::descriptor()))
    {
        visit_breakermodule_Breaker(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_breaker();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> breakermodule::Breaker const *
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

    if(visitor.start_message_field("breakerEvent", breakermodule::BreakerEvent::descriptor()))
    {
        visit_breakermodule_BreakerEvent(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_breakerevent();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> breakermodule::BreakerEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_breakerevent() ? &value->breakerevent() : nullptr;
                }
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::IED const *
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

void visit_breakermodule_Breaker(const set_t<breakermodule::Breaker>& setter, const get_t<breakermodule::Breaker>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_breakermodule_BreakerEvent(const set_t<breakermodule::BreakerEvent>& setter, const get_t<breakermodule::BreakerEvent>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::EventValue const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_statusandeventxcbr();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::StatusAndEventXCBR const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<breakermodule::BreakerEventProfile,std::string>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->overflow());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerEventProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,int>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerEventProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerEventProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,int>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerEventProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<breakermodule::BreakerEventProfile,int>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::ENS_HealthKind const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<breakermodule::BreakerEventProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_StatusAndEventXCBR(const set_t<commonmodule::StatusAndEventXCBR>& setter, const get_t<commonmodule::StatusAndEventXCBR>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](breakermodule::BreakerEventProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const breakermodule::BreakerEventProfile& profile) -> commonmodule::StatusDPS const *
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<breakermodule::BreakerEventProfile,commonmodule::Quality>::build(
            [setter](breakermodule::BreakerEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,int>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<breakermodule::BreakerEventProfile,commonmodule::Timestamp>::build(
            [setter](breakermodule::BreakerEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,bool>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<breakermodule::BreakerEventProfile,int>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<int>& handler)
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<breakermodule::BreakerEventProfile,std::string>::build(
            [setter](breakermodule::BreakerEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const breakermodule::BreakerEventProfile& profile, const handler_t<std::string>& handler)
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
