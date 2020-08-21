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
using set_t = setter_t<essmodule::ESSEventProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_CapacityFirming(const set_t<essmodule::CapacityFirming>& setter, const get_t<essmodule::CapacityFirming>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_ESSEvent(const set_t<essmodule::ESSEvent>& setter, const get_t<essmodule::ESSEvent>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_ESSEventAndStatusZGEN(const set_t<essmodule::ESSEventAndStatusZGEN>& setter, const get_t<essmodule::ESSEventAndStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_ESSEventZGEN(const set_t<essmodule::ESSEventZGEN>& setter, const get_t<essmodule::ESSEventZGEN>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_ESSFunction(const set_t<essmodule::ESSFunction>& setter, const get_t<essmodule::ESSFunction>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_ESSPointStatus(const set_t<essmodule::ESSPointStatus>& setter, const get_t<essmodule::ESSPointStatus>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_EssEventZBAT(const set_t<essmodule::EssEventZBAT>& setter, const get_t<essmodule::EssEventZBAT>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_FrequencyRegulation(const set_t<essmodule::FrequencyRegulation>& setter, const get_t<essmodule::FrequencyRegulation>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_PeakShaving(const set_t<essmodule::PeakShaving>& setter, const get_t<essmodule::PeakShaving>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_SOCManagement(const set_t<essmodule::SOCManagement>& setter, const get_t<essmodule::SOCManagement>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_SocLimit(const set_t<essmodule::SocLimit>& setter, const get_t<essmodule::SocLimit>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_VoltageDroop(const set_t<essmodule::VoltageDroop>& setter, const get_t<essmodule::VoltageDroop>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_VoltagePI(const set_t<essmodule::VoltagePI>& setter, const get_t<essmodule::VoltagePI>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_essmodule_VoltageRegulation(const set_t<essmodule::VoltageRegulation>& setter, const get_t<essmodule::VoltageRegulation>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSEventProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::EventMessageInfo const *
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

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::ESS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ess() ? &value->ess() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essEvent", essmodule::ESSEvent::descriptor()))
    {
        visit_essmodule_ESSEvent(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_essevent();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::ESSEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essevent() ? &value->essevent() : nullptr;
                }
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::IED const *
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

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSEventProfile,std::string>::build(
            [setter](essmodule::ESSEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setval());
                return true;
            }
        ),
        commonmodule::GridConnectModeKind_descriptor()
    );

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_setvalextension() ? &value->setvalextension() : nullptr;
                }
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

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::ENS_HealthKind const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::AnalogueValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_mag() ? &value->mag() : nullptr;
                }
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
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_q()) return false;
                handler(parent->q());
                return true;
            }
        )
    );

    visitor.handle(
        "t",
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusDPS(const set_t<commonmodule::StatusDPS>& setter, const get_t<commonmodule::StatusDPS>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DbPosKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<essmodule::ESSEventProfile,bool>::build(
            [setter](essmodule::ESSEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<essmodule::ESSEventProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<essmodule::ESSEventProfile,int>::build(
            [setter](essmodule::ESSEventProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int>& handler)
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

void visit_essmodule_CapacityFirming(const set_t<essmodule::CapacityFirming>& setter, const get_t<essmodule::CapacityFirming>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("capacityFirmingCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_capacityfirmingctl();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capacityfirmingctl() ? &value->capacityfirmingctl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("limitNegative_dp_dt", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_limitnegative_dp_dt();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_limitnegative_dp_dt() ? &value->limitnegative_dp_dt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("limitPositive_dp_dt", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_limitpositive_dp_dt();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_limitpositive_dp_dt() ? &value->limitpositive_dp_dt() : nullptr;
                }
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

void visit_essmodule_ESSEvent(const set_t<essmodule::ESSEvent>& setter, const get_t<essmodule::ESSEvent>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::EventValue const *
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

    if(visitor.start_message_field("essEventZBAT", essmodule::EssEventZBAT::descriptor()))
    {
        visit_essmodule_EssEventZBAT(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_esseventzbat();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::EssEventZBAT const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esseventzbat() ? &value->esseventzbat() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essEventZGEN", essmodule::ESSEventZGEN::descriptor()))
    {
        visit_essmodule_ESSEventZGEN(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_esseventzgen();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::ESSEventZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esseventzgen() ? &value->esseventzgen() : nullptr;
                }
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

void visit_essmodule_ESSEventAndStatusZGEN(const set_t<essmodule::ESSEventAndStatusZGEN>& setter, const get_t<essmodule::ESSEventAndStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_auxpwrst();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_gnsynst();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("PointStatus", essmodule::ESSPointStatus::descriptor()))
    {
        visit_essmodule_ESSPointStatus(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::ESSPointStatus const *
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

void visit_essmodule_ESSEventZGEN(const set_t<essmodule::ESSEventZGEN>& setter, const get_t<essmodule::ESSEventZGEN>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("eSSEventAndStatusZGEN", essmodule::ESSEventAndStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSEventAndStatusZGEN(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_esseventandstatuszgen();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::ESSEventAndStatusZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esseventandstatuszgen() ? &value->esseventandstatuszgen() : nullptr;
                }
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

void visit_essmodule_ESSFunction(const set_t<essmodule::ESSFunction>& setter, const get_t<essmodule::ESSFunction>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("capacityFirming", essmodule::CapacityFirming::descriptor()))
    {
        visit_essmodule_CapacityFirming(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_capacityfirming();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::CapacityFirming const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capacityfirming() ? &value->capacityfirming() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencyRegulation", essmodule::FrequencyRegulation::descriptor()))
    {
        visit_essmodule_FrequencyRegulation(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_frequencyregulation();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::FrequencyRegulation const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_frequencyregulation() ? &value->frequencyregulation() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("peakShaving", essmodule::PeakShaving::descriptor()))
    {
        visit_essmodule_PeakShaving(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_peakshaving();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::PeakShaving const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_peakshaving() ? &value->peakshaving() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLimit", essmodule::SocLimit::descriptor()))
    {
        visit_essmodule_SocLimit(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_soclimit();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::SocLimit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_soclimit() ? &value->soclimit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagement", essmodule::SOCManagement::descriptor()))
    {
        visit_essmodule_SOCManagement(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socmanagement();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::SOCManagement const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socmanagement() ? &value->socmanagement() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageDroop", essmodule::VoltageDroop::descriptor()))
    {
        visit_essmodule_VoltageDroop(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagedroop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::VoltageDroop const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagedroop() ? &value->voltagedroop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltagePI", essmodule::VoltagePI::descriptor()))
    {
        visit_essmodule_VoltagePI(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagepi();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::VoltagePI const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagepi() ? &value->voltagepi() : nullptr;
                }
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

void visit_essmodule_ESSPointStatus(const set_t<essmodule::ESSPointStatus>& setter, const get_t<essmodule::ESSPointStatus>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::StatusDPS::descriptor()))
    {
        visit_commonmodule_StatusDPS(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusDPS const *
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

    if(visitor.start_message_field("function", essmodule::ESSFunction::descriptor()))
    {
        visit_essmodule_ESSFunction(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_function();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::ESSFunction const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_function() ? &value->function() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_mode() ? &value->mode() : nullptr;
                }
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::RampRate const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::Optional_StateKind const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusDPS const *
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
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusDPS const *
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

void visit_essmodule_EssEventZBAT(const set_t<essmodule::EssEventZBAT>& setter, const get_t<essmodule::EssEventZBAT>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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

    if(visitor.start_message_field("BatHi", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_bathi();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_bathi() ? &value->bathi() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BatLo", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_batlo();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_batlo() ? &value->batlo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BatSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_batst();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_batst() ? &value->batst() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Soc", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_soc();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_soc() ? &value->soc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Stdby", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_stdby();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_stdby() ? &value->stdby() : nullptr;
                }
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

void visit_essmodule_FrequencyRegulation(const set_t<essmodule::FrequencyRegulation>& setter, const get_t<essmodule::FrequencyRegulation>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("frequencyDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_frequencydeadbandminus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_frequencydeadbandminus() ? &value->frequencydeadbandminus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencyDeadBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_frequencydeadbandplus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_frequencydeadbandplus() ? &value->frequencydeadbandplus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencyRegulationCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_frequencyregulationctl();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_frequencyregulationctl() ? &value->frequencyregulationctl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpoint();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_frequencysetpoint() ? &value->frequencysetpoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("gridFrequencyStableBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_gridfrequencystablebandminus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_gridfrequencystablebandminus() ? &value->gridfrequencystablebandminus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("gridFrequencyStableBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_gridfrequencystablebandplus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_gridfrequencystablebandplus() ? &value->gridfrequencystablebandplus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("overFrequencyDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_overfrequencydroop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_overfrequencydroop() ? &value->overfrequencydroop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("underFrequencyDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_underfrequencydroop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_underfrequencydroop() ? &value->underfrequencydroop() : nullptr;
                }
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

void visit_essmodule_PeakShaving(const set_t<essmodule::PeakShaving>& setter, const get_t<essmodule::PeakShaving>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("baseShavingLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_baseshavinglimit();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_baseshavinglimit() ? &value->baseshavinglimit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("peakShavingCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_peakshavingctl();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_peakshavingctl() ? &value->peakshavingctl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("peakShavingLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_peakshavinglimit();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_peakshavinglimit() ? &value->peakshavinglimit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagementAllowedHighLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socmanagementallowedhighlimit();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socmanagementallowedhighlimit() ? &value->socmanagementallowedhighlimit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagementAllowedLowLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socmanagementallowedlowlimit();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socmanagementallowedlowlimit() ? &value->socmanagementallowedlowlimit() : nullptr;
                }
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

void visit_essmodule_SOCManagement(const set_t<essmodule::SOCManagement>& setter, const get_t<essmodule::SOCManagement>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("socDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socdeadbandminus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socdeadbandminus() ? &value->socdeadbandminus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socDeadBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socdeadbandplus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socdeadbandplus() ? &value->socdeadbandplus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socManagementCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socmanagementctl();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socmanagementctl() ? &value->socmanagementctl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socPowerSetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socpowersetpoint();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socpowersetpoint() ? &value->socpowersetpoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socSetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_socsetpoint();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_socsetpoint() ? &value->socsetpoint() : nullptr;
                }
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

void visit_essmodule_SocLimit(const set_t<essmodule::SocLimit>& setter, const get_t<essmodule::SocLimit>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("socHighLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_sochighlimit();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_sochighlimit() ? &value->sochighlimit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socHighLimitHysteresis", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_sochighlimithysteresis();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_sochighlimithysteresis() ? &value->sochighlimithysteresis() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLimitCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_soclimitctl();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_soclimitctl() ? &value->soclimitctl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLowLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_soclowlimit();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_soclowlimit() ? &value->soclowlimit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("socLowLimitHysteresis", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_soclowlimithysteresis();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_soclowlimithysteresis() ? &value->soclowlimithysteresis() : nullptr;
                }
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

void visit_essmodule_VoltageDroop(const set_t<essmodule::VoltageDroop>& setter, const get_t<essmodule::VoltageDroop>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("voltageDroopCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagedroopctl();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagedroopctl() ? &value->voltagedroopctl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageRegulation", essmodule::VoltageRegulation::descriptor()))
    {
        visit_essmodule_VoltageRegulation(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltageregulation();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::VoltageRegulation const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltageregulation() ? &value->voltageregulation() : nullptr;
                }
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

void visit_essmodule_VoltagePI(const set_t<essmodule::VoltagePI>& setter, const get_t<essmodule::VoltagePI>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("voltagePICtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagepictl();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagepictl() ? &value->voltagepictl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageRegulation", essmodule::VoltageRegulation::descriptor()))
    {
        visit_essmodule_VoltageRegulation(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltageregulation();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> essmodule::VoltageRegulation const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltageregulation() ? &value->voltageregulation() : nullptr;
                }
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

void visit_essmodule_VoltageRegulation(const set_t<essmodule::VoltageRegulation>& setter, const get_t<essmodule::VoltageRegulation>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    if(visitor.start_message_field("overVoltageDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_overvoltagedroop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_overvoltagedroop() ? &value->overvoltagedroop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("underVoltageDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_undervoltagedroop();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_undervoltagedroop() ? &value->undervoltagedroop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagedeadbandminus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagedeadbandminus() ? &value->voltagedeadbandminus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageDeadBandPlus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagedeadbandplus();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagedeadbandplus() ? &value->voltagedeadbandplus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSEventProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpoint();
            },
            [getter](const essmodule::ESSEventProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagesetpoint() ? &value->voltagesetpoint() : nullptr;
                }
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSEventProfile,bool>::build(
            [setter](essmodule::ESSEventProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSEventProfile,float>::build(
            [setter](essmodule::ESSEventProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSEventProfile,int32_t>::build(
            [setter](essmodule::ESSEventProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSEventProfile,std::string>::build(
            [setter](essmodule::ESSEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSEventProfile& profile, const handler_t<std::string>& handler)
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
