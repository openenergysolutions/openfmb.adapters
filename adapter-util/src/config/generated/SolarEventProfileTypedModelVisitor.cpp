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
using set_t = setter_t<solarmodule::SolarEventProfile, V>;

template <class V>
using get_t = getter_t<solarmodule::SolarEventProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_Optional_AlrmKind(const set_t<commonmodule::Optional_AlrmKind>& setter, const get_t<commonmodule::Optional_AlrmKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_Optional_GridConnectionStateKind(const set_t<commonmodule::Optional_GridConnectionStateKind>& setter, const get_t<commonmodule::Optional_GridConnectionStateKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_Optional_OperatingStateKind(const set_t<commonmodule::Optional_OperatingStateKind>& setter, const get_t<commonmodule::Optional_OperatingStateKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_solarmodule_SolarEvent(const set_t<solarmodule::SolarEvent>& setter, const get_t<solarmodule::SolarEvent>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_solarmodule_SolarEventAndStatusZGEN(const set_t<solarmodule::SolarEventAndStatusZGEN>& setter, const get_t<solarmodule::SolarEventAndStatusZGEN>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_solarmodule_SolarEventZGEN(const set_t<solarmodule::SolarEventZGEN>& setter, const get_t<solarmodule::SolarEventZGEN>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

void visit_solarmodule_SolarPointStatus(const set_t<solarmodule::SolarPointStatus>& setter, const get_t<solarmodule::SolarPointStatus>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](solarmodule::SolarEventProfile& profile) { return &profile; };
    const auto getter = [](const solarmodule::SolarEventProfile& profile) { return &profile; };

    if(visitor.start_message_field("eventMessageInfo", commonmodule::EventMessageInfo::descriptor()))
    {
        visit_commonmodule_EventMessageInfo(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_eventmessageinfo();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::EventMessageInfo const *
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

    if(visitor.start_message_field("solarEvent", solarmodule::SolarEvent::descriptor()))
    {
        visit_solarmodule_SolarEvent(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_solarevent();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> solarmodule::SolarEvent const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarevent() ? &value->solarevent() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarInverter", solarmodule::SolarInverter::descriptor()))
    {
        visit_solarmodule_SolarInverter(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_solarinverter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> solarmodule::SolarInverter const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarinverter() ? &value->solarinverter() : nullptr;
                }
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<solarmodule::SolarEventProfile,std::string>::build(
            [setter](solarmodule::SolarEventProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::Quality>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::Quality>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("enterServiceParameter", commonmodule::OperationDCTE::descriptor()))
    {
        visit_commonmodule_OperationDCTE(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_enterserviceparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDCTE const *
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_hzhilim(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_hzlolim(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_rtnsrvauto(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_vhilim(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_vlolim(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vlolim());
                return true;
            }
        )
    );
}

void visit_commonmodule_EventMessageInfo(const set_t<commonmodule::EventMessageInfo>& setter, const get_t<commonmodule::EventMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_EventValue(const set_t<commonmodule::EventValue>& setter, const get_t<commonmodule::EventValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "deadbandHzVal",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_deadbandhzval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_slopeval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->slopeval());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("maxLimParameter", commonmodule::OperationDWMX::descriptor()))
    {
        visit_commonmodule_OperationDWMX(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_maxlimparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDWMX const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_minlimparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDWMN const *
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_wmaxsptval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_wminsptval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wminsptval());
                return true;
            }
        )
    );
}

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ENS_HealthKind const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "rndDlTmms",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_rnddltmms(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_rtndltmms(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_rtnrmptmms(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->rtnrmptmms());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_pfextset(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_pfgntgtmxval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->pfgntgtmxval());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "varTgtSpt",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_vartgtspt(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vartgtspt());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    visitor.handle(
        "OplTmmsMax",
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::ClearingTime>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_opltmmsmax(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_opltmmsmax()) return false;
                handler(parent->opltmmsmax());
                return true;
            }
        )
    );

    visitor.handle(
        "VRef",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_vref(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_vrefadjena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_vreftmms(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vreftmms());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );

    visitor.handle(
        "OplTmmsMax",
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::ClearingTime>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_opltmmsmax(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_opltmmsmax()) return false;
                handler(parent->opltmmsmax());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_Optional_AlrmKind(const set_t<commonmodule::Optional_AlrmKind>& setter, const get_t<commonmodule::Optional_AlrmKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::AlrmKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_GridConnectionStateKind(const set_t<commonmodule::Optional_GridConnectionStateKind>& setter, const get_t<commonmodule::Optional_GridConnectionStateKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::GridConnectionStateKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_OperatingStateKind(const set_t<commonmodule::Optional_OperatingStateKind>& setter, const get_t<commonmodule::Optional_OperatingStateKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::OperatingStateKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarEventProfile,int>::build(
            [setter](solarmodule::SolarEventProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_pfparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDFPF const *
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::Quality>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmHzPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarEventProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarEventProfile& profile) -> commonmodule::TmHzPoint const*
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
            const auto set = [setter, i, max = count](solarmodule::SolarEventProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarEventProfile& profile) -> commonmodule::TmHzPoint const*
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

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "hzVal",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_hzval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->hzval());
                return true;
            }
        )
    );

    visitor.handle(
        "tmVal",
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::ClearingTime>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_tmval(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_tmval()) return false;
                handler(parent->tmval());
                return true;
            }
        )
    );
}

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmVoltPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarEventProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarEventProfile& profile) -> commonmodule::TmVoltPoint const*
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
            const auto set = [setter, i, max = count](solarmodule::SolarEventProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarEventProfile& profile) -> commonmodule::TmVoltPoint const*
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

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "tmVal",
        MessageAccessorBuilder<solarmodule::SolarEventProfile,commonmodule::ClearingTime>::build(
            [setter](solarmodule::SolarEventProfile& profile) { return setter(profile)->mutable_tmval(); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_tmval()) return false;
                handler(parent->tmval());
                return true;
            }
        )
    );

    visitor.handle(
        "voltVal",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_varparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDVAR const *
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

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarEventProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarEventProfile& profile) -> commonmodule::VoltVarPoint const*
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_vvarparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDVVR const *
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

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltWPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarEventProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarEventProfile& profile) -> commonmodule::VoltWPoint const*
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_voltwparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDVWC const *
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

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "voltVal",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::WVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarEventProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarEventProfile& profile) -> commonmodule::WVarPoint const*
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_wvarparameter();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::OperationDWVR const *
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

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarEventProfile,bool>::build(
            [setter](solarmodule::SolarEventProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarEventProfile,float>::build(
            [setter](solarmodule::SolarEventProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarEventProfile,std::string>::build(
            [setter](solarmodule::SolarEventProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarEventProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_solarmodule_SolarEvent(const set_t<solarmodule::SolarEvent>& setter, const get_t<solarmodule::SolarEvent>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("eventValue", commonmodule::EventValue::descriptor()))
    {
        visit_commonmodule_EventValue(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_eventvalue();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::EventValue const *
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

    if(visitor.start_message_field("solarEventZGEN", solarmodule::SolarEventZGEN::descriptor()))
    {
        visit_solarmodule_SolarEventZGEN(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_solareventzgen();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> solarmodule::SolarEventZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solareventzgen() ? &value->solareventzgen() : nullptr;
                }
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

void visit_solarmodule_SolarEventAndStatusZGEN(const set_t<solarmodule::SolarEventAndStatusZGEN>& setter, const get_t<solarmodule::SolarEventAndStatusZGEN>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_auxpwrst();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("PointStatus", solarmodule::SolarPointStatus::descriptor()))
    {
        visit_solarmodule_SolarPointStatus(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> solarmodule::SolarPointStatus const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_alrm();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::Optional_AlrmKind const *
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

    if(visitor.start_message_field("GnSynSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_gnsynst();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("GridConnectionState", commonmodule::Optional_GridConnectionStateKind::descriptor()))
    {
        visit_commonmodule_Optional_GridConnectionStateKind(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_gridconnectionstate();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::Optional_GridConnectionStateKind const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_manalrminfo();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_operatingstate();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::Optional_OperatingStateKind const *
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

void visit_solarmodule_SolarEventZGEN(const set_t<solarmodule::SolarEventZGEN>& setter, const get_t<solarmodule::SolarEventZGEN>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("solarEventAndStatusZGEN", solarmodule::SolarEventAndStatusZGEN::descriptor()))
    {
        visit_solarmodule_SolarEventAndStatusZGEN(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_solareventandstatuszgen();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> solarmodule::SolarEventAndStatusZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solareventandstatuszgen() ? &value->solareventandstatuszgen() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_grimod();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_grimod() ? &value->grimod() : nullptr;
                }
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

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_solarmodule_SolarPointStatus(const set_t<solarmodule::SolarPointStatus>& setter, const get_t<solarmodule::SolarPointStatus>& getter, ITypedModelVisitor<solarmodule::SolarEventProfile>& visitor)
{
    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::RampRate const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("enterServiceOperation", commonmodule::EnterServiceAPC::descriptor()))
    {
        visit_commonmodule_EnterServiceAPC(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_enterserviceoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::EnterServiceAPC const *
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

    if(visitor.start_message_field("hzWOperation", commonmodule::HzWPoint::descriptor()))
    {
        visit_commonmodule_HzWPoint(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_hzwoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::HzWPoint const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_limitwoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::LimitWAPC const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_pfoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::PFSPC const *
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

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("tmHzTripOperation", commonmodule::TmHzCSG::descriptor()))
    {
        visit_commonmodule_TmHzCSG(
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_tmhztripoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::TmHzCSG const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_tmvolttripoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::TmVoltCSG const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_varoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::VarSPC const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_voltvaroperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::VoltVarCSG const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_voltwoperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::VoltWCSG const *
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
            [setter](solarmodule::SolarEventProfile& profile)
            {
                return setter(profile)->mutable_wvaroperation();
            },
            [getter](const solarmodule::SolarEventProfile& profile) -> commonmodule::WVarCSG const *
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

} // end namespace util

} // end namespace adapter
