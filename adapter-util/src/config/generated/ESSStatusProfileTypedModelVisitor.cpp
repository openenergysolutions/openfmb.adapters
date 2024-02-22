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
using set_t = setter_t<essmodule::ESSStatusProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ClearingTime(const set_t<commonmodule::ClearingTime>& setter, const get_t<commonmodule::ClearingTime>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ControlING(const set_t<commonmodule::ControlING>& setter, const get_t<commonmodule::ControlING>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_CapacityFirming(const set_t<essmodule::CapacityFirming>& setter, const get_t<essmodule::CapacityFirming>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSEventAndStatusZGEN(const set_t<essmodule::ESSEventAndStatusZGEN>& setter, const get_t<essmodule::ESSEventAndStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSFunction(const set_t<essmodule::ESSFunction>& setter, const get_t<essmodule::ESSFunction>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSPointStatus(const set_t<essmodule::ESSPointStatus>& setter, const get_t<essmodule::ESSPointStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSStatus(const set_t<essmodule::ESSStatus>& setter, const get_t<essmodule::ESSStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSStatusZGEN(const set_t<essmodule::ESSStatusZGEN>& setter, const get_t<essmodule::ESSStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_EssStatusZBAT(const set_t<essmodule::EssStatusZBAT>& setter, const get_t<essmodule::EssStatusZBAT>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_FrequencyRegulation(const set_t<essmodule::FrequencyRegulation>& setter, const get_t<essmodule::FrequencyRegulation>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_PeakShaving(const set_t<essmodule::PeakShaving>& setter, const get_t<essmodule::PeakShaving>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_SOCManagement(const set_t<essmodule::SOCManagement>& setter, const get_t<essmodule::SOCManagement>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_SocLimit(const set_t<essmodule::SocLimit>& setter, const get_t<essmodule::SocLimit>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_VoltageDroop(const set_t<essmodule::VoltageDroop>& setter, const get_t<essmodule::VoltageDroop>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_VoltagePI(const set_t<essmodule::VoltagePI>& setter, const get_t<essmodule::VoltagePI>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_VoltageRegulation(const set_t<essmodule::VoltageRegulation>& setter, const get_t<essmodule::VoltageRegulation>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSStatusProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
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

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ESS const *
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

    if(visitor.start_message_field("essStatus", essmodule::ESSStatus::descriptor()))
    {
        visit_essmodule_ESSStatus(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_essstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essstatus() ? &value->essstatus() : nullptr;
                }
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

void visit_commonmodule_ClearingTime(const set_t<commonmodule::ClearingTime>& setter, const get_t<commonmodule::ClearingTime>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "seconds",
        AccessorBuilder<essmodule::ESSStatusProfile,uint64_t>::build(
            [setter](essmodule::ESSStatusProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<uint64_t>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,uint32_t>::build(
            [setter](essmodule::ESSStatusProfile& profile, const uint32_t& value) { setter(profile)->set_nanoseconds(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<uint32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->nanoseconds());
                return true;
            }
        )
    );
}

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,std::string>::build(
            [setter](essmodule::ESSStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlING(const set_t<commonmodule::ControlING>& setter, const get_t<commonmodule::ControlING>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSStatusProfile,int32_t>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int32_t& value) { setter(profile)->set_setval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setval());
                return true;
            }
        )
    );

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler)
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
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("enterServiceParameter", commonmodule::OperationDCTE::descriptor()))
    {
        visit_commonmodule_OperationDCTE(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_enterserviceparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDCTE const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_hzhilim(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_hzlolim(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_rtnsrvauto(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_vhilim(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_vlolim(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vlolim());
                return true;
            }
        )
    );
}

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("overHzWPt", commonmodule::HzWPoint::descriptor()))
    {
        visit_commonmodule_HzWPoint(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_overhzwpt();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::HzWPoint const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_overhzwparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDHFW const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_underhzwpt();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::HzWPoint const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_underhzwparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDLFW const *
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

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "deadbandHzVal",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_deadbandhzval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_slopeval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->slopeval());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("maxLimParameter", commonmodule::OperationDWMX::descriptor()))
    {
        visit_commonmodule_OperationDWMX(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_maxlimparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDWMX const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_minlimparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDWMN const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_wmaxsptval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_wminsptval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wminsptval());
                return true;
            }
        )
    );
}

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_hotlinetag();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_remoteblk();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "mag",
        AccessorBuilder<essmodule::ESSStatusProfile,double>::build(
            [setter](essmodule::ESSStatusProfile& profile, const double& value) { setter(profile)->set_mag(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mag());
                return true;
            }
        )
    );

    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("rndDlTmms", commonmodule::ControlING::descriptor()))
    {
        visit_commonmodule_ControlING(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_rnddltmms();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlING const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_rnddltmms() ? &value->rnddltmms() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rtnDlTmms", commonmodule::ControlING::descriptor()))
    {
        visit_commonmodule_ControlING(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_rtndltmms();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlING const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_rtndltmms() ? &value->rtndltmms() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rtnRmpTmms", commonmodule::ControlING::descriptor()))
    {
        visit_commonmodule_ControlING(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_rtnrmptmms();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlING const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_rtnrmptmms() ? &value->rtnrmptmms() : nullptr;
                }
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

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_pfextset(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_pfgntgtmxval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->pfgntgtmxval());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "varTgtSpt",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_vartgtspt(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vartgtspt());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ClearingTime const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_vref(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_vrefadjena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vrefadjena());
                return true;
            }
        )
    );

    if(visitor.start_message_field("VRefTmms", commonmodule::ControlING::descriptor()))
    {
        visit_commonmodule_ControlING(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_vreftmms();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlING const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vreftmms() ? &value->vreftmms() : nullptr;
                }
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

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pfparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDFPF const *
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<essmodule::ESSStatusProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmHzPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSStatusProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSStatusProfile& profile) -> commonmodule::TmHzPoint const*
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
            const auto set = [setter, i, max = count](essmodule::ESSStatusProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSStatusProfile& profile) -> commonmodule::TmHzPoint const*
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

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "hzVal",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_hzval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_tmval();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmVoltPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSStatusProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSStatusProfile& profile) -> commonmodule::TmVoltPoint const*
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
            const auto set = [setter, i, max = count](essmodule::ESSStatusProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSStatusProfile& profile) -> commonmodule::TmVoltPoint const*
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

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("tmVal", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_tmval();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ClearingTime const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_varparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDVAR const *
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

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSStatusProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSStatusProfile& profile) -> commonmodule::VoltVarPoint const*
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_vvarparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDVVR const *
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

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltWPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSStatusProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSStatusProfile& profile) -> commonmodule::VoltWPoint const*
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltwparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDVWC const *
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

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "voltVal",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::WVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSStatusProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSStatusProfile& profile) -> commonmodule::WVarPoint const*
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_wvarparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::OperationDWVR const *
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

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_essmodule_CapacityFirming(const set_t<essmodule::CapacityFirming>& setter, const get_t<essmodule::CapacityFirming>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("capacityFirmingCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_capacityfirmingctl();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_limitnegative_dp_dt();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_limitpositive_dp_dt();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_ESSEventAndStatusZGEN(const set_t<essmodule::ESSEventAndStatusZGEN>& setter, const get_t<essmodule::ESSEventAndStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_auxpwrst();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_gnsynst();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSPointStatus const *
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

void visit_essmodule_ESSFunction(const set_t<essmodule::ESSFunction>& setter, const get_t<essmodule::ESSFunction>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("capacityFirming", essmodule::CapacityFirming::descriptor()))
    {
        visit_essmodule_CapacityFirming(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_capacityfirming();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::CapacityFirming const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencyregulation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::FrequencyRegulation const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_peakshaving();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::PeakShaving const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_soclimit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::SocLimit const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socmanagement();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::SOCManagement const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagedroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::VoltageDroop const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagepi();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::VoltagePI const *
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

void visit_essmodule_ESSPointStatus(const set_t<essmodule::ESSPointStatus>& setter, const get_t<essmodule::ESSPointStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_function();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSFunction const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::RampRate const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Optional_StateKind const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_enterserviceoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::EnterServiceAPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_hzwoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::HzWAPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_limitwoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::LimitWAPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pfoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::PFSPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_tmhztripoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::TmHzCSG const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_tmvolttripoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::TmVoltCSG const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_varoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::VarSPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltvaroperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::VoltVarCSG const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltwoperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::VoltWCSG const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_wvaroperation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::WVarCSG const *
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

void visit_essmodule_ESSStatus(const set_t<essmodule::ESSStatus>& setter, const get_t<essmodule::ESSStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusValue const *
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

    if(visitor.start_message_field("essStatusZBAT", essmodule::EssStatusZBAT::descriptor()))
    {
        visit_essmodule_EssStatusZBAT(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_essstatuszbat();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::EssStatusZBAT const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essstatuszbat() ? &value->essstatuszbat() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essStatusZGEN", essmodule::ESSStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSStatusZGEN(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_essstatuszgen();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSStatusZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essstatuszgen() ? &value->essstatuszgen() : nullptr;
                }
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

void visit_essmodule_ESSStatusZGEN(const set_t<essmodule::ESSStatusZGEN>& setter, const get_t<essmodule::ESSStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("eSSEventAndStatusZGEN", essmodule::ESSEventAndStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSEventAndStatusZGEN(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_esseventandstatuszgen();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSEventAndStatusZGEN const *
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

void visit_essmodule_EssStatusZBAT(const set_t<essmodule::EssStatusZBAT>& setter, const get_t<essmodule::EssStatusZBAT>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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

    if(visitor.start_message_field("BatSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_batst();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_grimod();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
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

    if(visitor.start_message_field("Soc", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_soc();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::MV const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_stdby();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("SoH", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_soh();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_soh() ? &value->soh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WHAvail", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_whavail();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_whavail() ? &value->whavail() : nullptr;
                }
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

void visit_essmodule_FrequencyRegulation(const set_t<essmodule::FrequencyRegulation>& setter, const get_t<essmodule::FrequencyRegulation>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("frequencyDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencydeadbandminus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencydeadbandplus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencyregulationctl();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpoint();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_gridfrequencystablebandminus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_gridfrequencystablebandplus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_overfrequencydroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_underfrequencydroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_PeakShaving(const set_t<essmodule::PeakShaving>& setter, const get_t<essmodule::PeakShaving>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("baseShavingLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_baseshavinglimit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_peakshavingctl();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_peakshavinglimit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socmanagementallowedhighlimit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socmanagementallowedlowlimit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_SOCManagement(const set_t<essmodule::SOCManagement>& setter, const get_t<essmodule::SOCManagement>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("socDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socdeadbandminus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socdeadbandplus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socmanagementctl();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socpowersetpoint();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_socsetpoint();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_SocLimit(const set_t<essmodule::SocLimit>& setter, const get_t<essmodule::SocLimit>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("socHighLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_sochighlimit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_sochighlimithysteresis();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_soclimitctl();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_soclowlimit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_soclowlimithysteresis();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_VoltageDroop(const set_t<essmodule::VoltageDroop>& setter, const get_t<essmodule::VoltageDroop>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("voltageDroopCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagedroopctl();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltageregulation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::VoltageRegulation const *
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

void visit_essmodule_VoltagePI(const set_t<essmodule::VoltagePI>& setter, const get_t<essmodule::VoltagePI>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("voltagePICtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagepictl();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltageregulation();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::VoltageRegulation const *
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

void visit_essmodule_VoltageRegulation(const set_t<essmodule::VoltageRegulation>& setter, const get_t<essmodule::VoltageRegulation>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("overVoltageDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_overvoltagedroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_undervoltagedroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagedeadbandminus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagedeadbandplus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpoint();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,std::string>::build(
            [setter](essmodule::ESSStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<std::string>& handler)
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
