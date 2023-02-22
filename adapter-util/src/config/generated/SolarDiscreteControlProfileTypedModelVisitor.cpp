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
using set_t = setter_t<solarmodule::SolarDiscreteControlProfile, V>;

template <class V>
using get_t = getter_t<solarmodule::SolarDiscreteControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_ClearingTime(const set_t<commonmodule::ClearingTime>& setter, const get_t<commonmodule::ClearingTime>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlING(const set_t<commonmodule::ControlING>& setter, const get_t<commonmodule::ControlING>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_solarmodule_SolarDiscreteControl(const set_t<solarmodule::SolarDiscreteControl>& setter, const get_t<solarmodule::SolarDiscreteControl>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_solarmodule_SolarDiscreteControlPV(const set_t<solarmodule::SolarDiscreteControlPV>& setter, const get_t<solarmodule::SolarDiscreteControlPV>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

void visit_solarmodule_SolarPoint(const set_t<solarmodule::SolarPoint>& setter, const get_t<solarmodule::SolarPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](solarmodule::SolarDiscreteControlProfile& profile) { return &profile; };
    const auto getter = [](const solarmodule::SolarDiscreteControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlmessageinfo() ? &value->controlmessageinfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarDiscreteControl", solarmodule::SolarDiscreteControl::descriptor()))
    {
        visit_solarmodule_SolarDiscreteControl(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_solardiscretecontrol();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> solarmodule::SolarDiscreteControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solardiscretecontrol() ? &value->solardiscretecontrol() : nullptr;
                }
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_solarinverter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> solarmodule::SolarInverter const *
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_interlockcheck() ? &value->interlockcheck() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("synchroCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_synchrocheck() ? &value->synchrocheck() : nullptr;
                }
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

void visit_commonmodule_ClearingTime(const set_t<commonmodule::ClearingTime>& setter, const get_t<commonmodule::ClearingTime>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "seconds",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,uint64_t>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<uint64_t>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,uint32_t>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const uint32_t& value) { setter(profile)->set_nanoseconds(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<uint32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->nanoseconds());
                return true;
            }
        )
    );
}

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,std::string>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlING(const set_t<commonmodule::ControlING>& setter, const get_t<commonmodule::ControlING>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,int32_t>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const int32_t& value) { setter(profile)->set_setval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<int32_t>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

    if(visitor.start_message_field("reset", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reset() ? &value->reset() : nullptr;
                }
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

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,int>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<int>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("enterServiceParameter", commonmodule::OperationDCTE::descriptor()))
    {
        visit_commonmodule_OperationDCTE(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_enterserviceparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDCTE const *
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_hzhilim(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_hzlolim(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_rtnsrvauto(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_vhilim(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_vlolim(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vlolim());
                return true;
            }
        )
    );
}

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("overHzWPt", commonmodule::HzWPoint::descriptor()))
    {
        visit_commonmodule_HzWPoint(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_overhzwpt();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::HzWPoint const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_overhzwparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDHFW const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_underhzwpt();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::HzWPoint const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_underhzwparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDLFW const *
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

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "deadbandHzVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_deadbandhzval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_slopeval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->slopeval());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("maxLimParameter", commonmodule::OperationDWMX::descriptor()))
    {
        visit_commonmodule_OperationDWMX(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_maxlimparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDWMX const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_minlimparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDWMN const *
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_wmaxsptval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_wminsptval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wminsptval());
                return true;
            }
        )
    );
}

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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
}

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<solarmodule::SolarDiscreteControlProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("rndDlTmms", commonmodule::ControlING::descriptor()))
    {
        visit_commonmodule_ControlING(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_rnddltmms();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlING const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_rtndltmms();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlING const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_rtnrmptmms();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlING const *
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

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_pfextset(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_pfgntgtmxval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->pfgntgtmxval());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "varTgtSpt",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_vartgtspt(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vartgtspt());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ClearingTime const *
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_vref(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_vrefadjena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_vreftmms();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlING const *
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

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_opltmmsmax();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,int>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,int>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PFSPC(const set_t<commonmodule::PFSPC>& setter, const get_t<commonmodule::PFSPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_pfparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDFPF const *
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmHzPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarDiscreteControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::TmHzPoint const*
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
            const auto set = [setter, i, max = count](solarmodule::SolarDiscreteControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::TmHzPoint const*
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

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "hzVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_hzval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_tmval();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ClearingTime const *
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

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmVoltPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarDiscreteControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::TmVoltPoint const*
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
            const auto set = [setter, i, max = count](solarmodule::SolarDiscreteControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::TmVoltPoint const*
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

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("tmVal", commonmodule::ClearingTime::descriptor()))
    {
        visit_commonmodule_ClearingTime(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_tmval();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ClearingTime const *
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,int>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_varparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDVAR const *
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

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarDiscreteControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::VoltVarPoint const*
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_vvarparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDVVR const *
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

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltWPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarDiscreteControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::VoltWPoint const*
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_voltwparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDVWC const *
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

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "voltVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::WVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarDiscreteControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::WVarPoint const*
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_wvarparameter();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::OperationDWVR const *
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

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,bool>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,float>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarDiscreteControlProfile,std::string>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_solarmodule_SolarDiscreteControl(const set_t<solarmodule::SolarDiscreteControl>& setter, const get_t<solarmodule::SolarDiscreteControl>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlvalue() ? &value->controlvalue() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::CheckConditions const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_check() ? &value->check() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarDiscreteControlPV", solarmodule::SolarDiscreteControlPV::descriptor()))
    {
        visit_solarmodule_SolarDiscreteControlPV(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_solardiscretecontrolpv();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> solarmodule::SolarDiscreteControlPV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solardiscretecontrolpv() ? &value->solardiscretecontrolpv() : nullptr;
                }
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

void visit_solarmodule_SolarDiscreteControlPV(const set_t<solarmodule::SolarDiscreteControlPV>& setter, const get_t<solarmodule::SolarDiscreteControlPV>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforcontrol() ? &value->logicalnodeforcontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("control", solarmodule::SolarPoint::descriptor()))
    {
        visit_solarmodule_SolarPoint(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_control();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> solarmodule::SolarPoint const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_control() ? &value->control() : nullptr;
                }
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

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_solarmodule_SolarPoint(const set_t<solarmodule::SolarPoint>& setter, const get_t<solarmodule::SolarPoint>& getter, ITypedModelVisitor<solarmodule::SolarDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("reset", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reset() ? &value->reset() : nullptr;
                }
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
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

    visitor.handle(
        "startTime",
        MessageAccessorBuilder<solarmodule::SolarDiscreteControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](solarmodule::SolarDiscreteControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );

    if(visitor.start_message_field("enterServiceOperation", commonmodule::EnterServiceAPC::descriptor()))
    {
        visit_commonmodule_EnterServiceAPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_enterserviceoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::EnterServiceAPC const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_hzwoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::HzWAPC const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_limitwoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::LimitWAPC const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_pfoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::PFSPC const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_tmhztripoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::TmHzCSG const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_tmvolttripoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::TmVoltCSG const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_varoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::VarSPC const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_voltvaroperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::VoltVarCSG const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_voltwoperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::VoltWCSG const *
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
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_wvaroperation();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::WVarCSG const *
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

    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](solarmodule::SolarDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const solarmodule::SolarDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
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
}

} // end namespace util

} // end namespace adapter
