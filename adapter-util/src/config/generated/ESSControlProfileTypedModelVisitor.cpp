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
using set_t = setter_t<essmodule::ESSControlProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_OperationStorageDFPF(const set_t<commonmodule::OperationStorageDFPF>& setter, const get_t<commonmodule::OperationStorageDFPF>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_PFStorageSPC(const set_t<commonmodule::PFStorageSPC>& setter, const get_t<commonmodule::PFStorageSPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_CapacityFirming(const set_t<essmodule::CapacityFirming>& setter, const get_t<essmodule::CapacityFirming>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSCSG(const set_t<essmodule::ESSCSG>& setter, const get_t<essmodule::ESSCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSControl(const set_t<essmodule::ESSControl>& setter, const get_t<essmodule::ESSControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSControlScheduleFSCH(const set_t<essmodule::ESSControlScheduleFSCH>& setter, const get_t<essmodule::ESSControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSFunction(const set_t<essmodule::ESSFunction>& setter, const get_t<essmodule::ESSFunction>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSPoint(const set_t<essmodule::ESSPoint>& setter, const get_t<essmodule::ESSPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_EssControlFSCC(const set_t<essmodule::EssControlFSCC>& setter, const get_t<essmodule::EssControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_FrequencyRegulation(const set_t<essmodule::FrequencyRegulation>& setter, const get_t<essmodule::FrequencyRegulation>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_PeakShaving(const set_t<essmodule::PeakShaving>& setter, const get_t<essmodule::PeakShaving>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_SOCManagement(const set_t<essmodule::SOCManagement>& setter, const get_t<essmodule::SOCManagement>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_SocLimit(const set_t<essmodule::SocLimit>& setter, const get_t<essmodule::SocLimit>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_VoltageDroop(const set_t<essmodule::VoltageDroop>& setter, const get_t<essmodule::VoltageDroop>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_VoltagePI(const set_t<essmodule::VoltagePI>& setter, const get_t<essmodule::VoltagePI>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_VoltageRegulation(const set_t<essmodule::VoltageRegulation>& setter, const get_t<essmodule::VoltageRegulation>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSControlProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ESS const *
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

    if(visitor.start_message_field("essControl", essmodule::ESSControl::descriptor()))
    {
        visit_essmodule_ESSControl(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_esscontrol();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ESSControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscontrol() ? &value->esscontrol() : nullptr;
                }
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSControlProfile,std::string>::build(
            [setter](essmodule::ESSControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("controlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_controlschedulefsch();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlschedulefsch() ? &value->controlschedulefsch() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("islandControlScheduleFSCH", commonmodule::ControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_ControlScheduleFSCH(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_islandcontrolschedulefsch();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_islandcontrolschedulefsch() ? &value->islandcontrolschedulefsch() : nullptr;
                }
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

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ScheduleCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valacsg() ? &value->valacsg() : nullptr;
                }
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler)
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_EnterServiceAPC(const set_t<commonmodule::EnterServiceAPC>& setter, const get_t<commonmodule::EnterServiceAPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("enterServiceParameter", commonmodule::OperationDCTE::descriptor()))
    {
        visit_commonmodule_OperationDCTE(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_enterserviceparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDCTE const *
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_hzhilim(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_hzlolim(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_rtnsrvauto(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_vhilim(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_vlolim(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vlolim());
                return true;
            }
        )
    );
}

void visit_commonmodule_HzWAPC(const set_t<commonmodule::HzWAPC>& setter, const get_t<commonmodule::HzWAPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("overHzWPt", commonmodule::HzWPoint::descriptor()))
    {
        visit_commonmodule_HzWPoint(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_overhzwpt();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::HzWPoint const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_overhzwparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDHFW const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_underhzwpt();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::HzWPoint const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_underhzwparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDLFW const *
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

void visit_commonmodule_HzWPoint(const set_t<commonmodule::HzWPoint>& setter, const get_t<commonmodule::HzWPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "deadbandHzVal",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_deadbandhzval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_slopeval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->slopeval());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LimitWAPC(const set_t<commonmodule::LimitWAPC>& setter, const get_t<commonmodule::LimitWAPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("maxLimParameter", commonmodule::OperationDWMX::descriptor()))
    {
        visit_commonmodule_OperationDWMX(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_maxlimparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDWMX const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_minlimparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDWMN const *
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_wmaxsptval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_wminsptval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wminsptval());
                return true;
            }
        )
    );
}

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_OperationDCTE(const set_t<commonmodule::OperationDCTE>& setter, const get_t<commonmodule::OperationDCTE>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "rndDlTmms",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_rnddltmms(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_rtndltmms(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_rtnrmptmms(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->rtnrmptmms());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDFPF(const set_t<commonmodule::OperationDFPF>& setter, const get_t<commonmodule::OperationDFPF>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_pfextset(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_pfgntgtmxval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->pfgntgtmxval());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDHFW(const set_t<commonmodule::OperationDHFW>& setter, const get_t<commonmodule::OperationDHFW>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ClearingTime>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_opltmmsmax(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_opltmmsmax()) return false;
                handler(parent->opltmmsmax());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDLFW(const set_t<commonmodule::OperationDLFW>& setter, const get_t<commonmodule::OperationDLFW>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ClearingTime>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_opltmmsmax(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_opltmmsmax()) return false;
                handler(parent->opltmmsmax());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVAR(const set_t<commonmodule::OperationDVAR>& setter, const get_t<commonmodule::OperationDVAR>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "varTgtSpt",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_vartgtspt(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vartgtspt());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVVR(const set_t<commonmodule::OperationDVVR>& setter, const get_t<commonmodule::OperationDVVR>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ClearingTime>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_opltmmsmax(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_vref(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_vrefadjena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_vreftmms(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->vreftmms());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDVWC(const set_t<commonmodule::OperationDVWC>& setter, const get_t<commonmodule::OperationDVWC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ClearingTime>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_opltmmsmax(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_opltmmsmax()) return false;
                handler(parent->opltmmsmax());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWMN(const set_t<commonmodule::OperationDWMN>& setter, const get_t<commonmodule::OperationDWMN>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWMX(const set_t<commonmodule::OperationDWMX>& setter, const get_t<commonmodule::OperationDWMX>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationDWVR(const set_t<commonmodule::OperationDWVR>& setter, const get_t<commonmodule::OperationDWVR>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->modena());
                return true;
            }
        )
    );
}

void visit_commonmodule_OperationStorageDFPF(const set_t<commonmodule::OperationStorageDFPF>& setter, const get_t<commonmodule::OperationStorageDFPF>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("operationDFPF", commonmodule::OperationDFPF::descriptor()))
    {
        visit_commonmodule_OperationDFPF(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_operationdfpf();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDFPF const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_operationdfpf() ? &value->operationdfpf() : nullptr;
                }
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
        "pFLodTgtMxVal",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_pflodtgtmxval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->pflodtgtmxval());
                return true;
            }
        )
    );
}

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PFStorageSPC(const set_t<commonmodule::PFStorageSPC>& setter, const get_t<commonmodule::PFStorageSPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );

    if(visitor.start_message_field("pFStorageParameter", commonmodule::OperationStorageDFPF::descriptor()))
    {
        visit_commonmodule_OperationStorageDFPF(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_pfstorageparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationStorageDFPF const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pfstorageparameter() ? &value->pfstorageparameter() : nullptr;
                }
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_schpts();
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::SchedulePoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->schpts_size()) ? &value->schpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_SchedulePoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    // repeated schedule parameter
    visitor.handle(
        "scheduleParameter",
        [getter](const essmodule::ESSControlProfile& profile) -> const google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>*
        {
            const auto value = getter(profile);
            if(value)
            {
                return &value->scheduleparameter();
            }
            else
            {
                return nullptr;
            }
        }
    );

    visitor.handle(
        "startTime",
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_commonmodule_TmHzCSG(const set_t<commonmodule::TmHzCSG>& setter, const get_t<commonmodule::TmHzCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmHzPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::TmHzPoint const*
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
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::TmHzPoint const*
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

void visit_commonmodule_TmHzPoint(const set_t<commonmodule::TmHzPoint>& setter, const get_t<commonmodule::TmHzPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "hzVal",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_hzval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ClearingTime>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_tmval(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_tmval()) return false;
                handler(parent->tmval());
                return true;
            }
        )
    );
}

void visit_commonmodule_TmVoltCSG(const set_t<commonmodule::TmVoltCSG>& setter, const get_t<commonmodule::TmVoltCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("overcrvpts", commonmodule::TmVoltPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::TmVoltPoint const*
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
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::TmVoltPoint const*
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

void visit_commonmodule_TmVoltPoint(const set_t<commonmodule::TmVoltPoint>& setter, const get_t<commonmodule::TmVoltPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "tmVal",
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ClearingTime>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_tmval(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ClearingTime>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VarSPC(const set_t<commonmodule::VarSPC>& setter, const get_t<commonmodule::VarSPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "modEna",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_modena(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_varparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDVAR const *
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

void visit_commonmodule_VoltVarCSG(const set_t<commonmodule::VoltVarCSG>& setter, const get_t<commonmodule::VoltVarCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::VoltVarPoint const*
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_vvarparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDVVR const *
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

void visit_commonmodule_VoltVarPoint(const set_t<commonmodule::VoltVarPoint>& setter, const get_t<commonmodule::VoltVarPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->voltval());
                return true;
            }
        )
    );
}

void visit_commonmodule_VoltWCSG(const set_t<commonmodule::VoltWCSG>& setter, const get_t<commonmodule::VoltWCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::VoltWPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::VoltWPoint const*
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltwparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDVWC const *
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

void visit_commonmodule_VoltWPoint(const set_t<commonmodule::VoltWPoint>& setter, const get_t<commonmodule::VoltWPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "voltVal",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_voltval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_commonmodule_WVarCSG(const set_t<commonmodule::WVarCSG>& setter, const get_t<commonmodule::WVarCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::WVarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::WVarPoint const*
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_wvarparameter();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::OperationDWVR const *
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

void visit_commonmodule_WVarPoint(const set_t<commonmodule::WVarPoint>& setter, const get_t<commonmodule::WVarPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "varVal",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_varval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
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
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_wval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->wval());
                return true;
            }
        )
    );
}

void visit_essmodule_CapacityFirming(const set_t<essmodule::CapacityFirming>& setter, const get_t<essmodule::CapacityFirming>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("capacityFirmingCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_capacityfirmingctl();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_limitnegative_dp_dt();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_limitpositive_dp_dt();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_ESSCSG(const set_t<essmodule::ESSCSG>& setter, const get_t<essmodule::ESSCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", essmodule::ESSPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> essmodule::ESSPoint const*
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
            visit_essmodule_ESSPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_essmodule_ESSControl(const set_t<essmodule::ESSControl>& setter, const get_t<essmodule::ESSControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("essControlFSCC", essmodule::EssControlFSCC::descriptor()))
    {
        visit_essmodule_EssControlFSCC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_esscontrolfscc();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::EssControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscontrolfscc() ? &value->esscontrolfscc() : nullptr;
                }
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

void visit_essmodule_ESSControlScheduleFSCH(const set_t<essmodule::ESSControlScheduleFSCH>& setter, const get_t<essmodule::ESSControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", essmodule::ESSCSG::descriptor()))
    {
        visit_essmodule_ESSCSG(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ESSCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valdcsg() ? &value->valdcsg() : nullptr;
                }
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

void visit_essmodule_ESSFunction(const set_t<essmodule::ESSFunction>& setter, const get_t<essmodule::ESSFunction>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("capacityFirming", essmodule::CapacityFirming::descriptor()))
    {
        visit_essmodule_CapacityFirming(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_capacityfirming();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::CapacityFirming const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_frequencyregulation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::FrequencyRegulation const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_peakshaving();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::PeakShaving const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_soclimit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::SocLimit const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socmanagement();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::SOCManagement const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagedroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::VoltageDroop const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagepi();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::VoltagePI const *
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

void visit_essmodule_ESSPoint(const set_t<essmodule::ESSPoint>& setter, const get_t<essmodule::ESSPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_function();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ESSFunction const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::RampRate const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlSPC const *
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
        MessageAccessorBuilder<essmodule::ESSControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](essmodule::ESSControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_enterserviceoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::EnterServiceAPC const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_hzwoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::HzWAPC const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_limitwoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::LimitWAPC const *
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

    if(visitor.start_message_field("pFStorageOperation", commonmodule::PFStorageSPC::descriptor()))
    {
        visit_commonmodule_PFStorageSPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_pfstorageoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::PFStorageSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pfstorageoperation() ? &value->pfstorageoperation() : nullptr;
                }
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_tmhztripoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::TmHzCSG const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_tmvolttripoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::TmVoltCSG const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_varoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::VarSPC const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltvaroperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::VoltVarCSG const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltwoperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::VoltWCSG const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_wvaroperation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::WVarCSG const *
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

void visit_essmodule_EssControlFSCC(const set_t<essmodule::EssControlFSCC>& setter, const get_t<essmodule::EssControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlfscc() ? &value->controlfscc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essControlScheduleFSCH", essmodule::ESSControlScheduleFSCH::descriptor()))
    {
        visit_essmodule_ESSControlScheduleFSCH(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_esscontrolschedulefsch();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ESSControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscontrolschedulefsch() ? &value->esscontrolschedulefsch() : nullptr;
                }
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

void visit_essmodule_FrequencyRegulation(const set_t<essmodule::FrequencyRegulation>& setter, const get_t<essmodule::FrequencyRegulation>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("frequencyDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_frequencydeadbandminus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_frequencydeadbandplus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_frequencyregulationctl();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpoint();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_gridfrequencystablebandminus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_gridfrequencystablebandplus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_overfrequencydroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_underfrequencydroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_PeakShaving(const set_t<essmodule::PeakShaving>& setter, const get_t<essmodule::PeakShaving>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("baseShavingLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_baseshavinglimit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_peakshavingctl();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_peakshavinglimit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socmanagementallowedhighlimit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socmanagementallowedlowlimit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_SOCManagement(const set_t<essmodule::SOCManagement>& setter, const get_t<essmodule::SOCManagement>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("socDeadBandMinus", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socdeadbandminus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socdeadbandplus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socmanagementctl();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socpowersetpoint();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_socsetpoint();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_SocLimit(const set_t<essmodule::SocLimit>& setter, const get_t<essmodule::SocLimit>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("socHighLimit", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_sochighlimit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_sochighlimithysteresis();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_soclimitctl();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_soclowlimit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_soclowlimithysteresis();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_essmodule_VoltageDroop(const set_t<essmodule::VoltageDroop>& setter, const get_t<essmodule::VoltageDroop>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("voltageDroopCtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagedroopctl();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltageregulation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::VoltageRegulation const *
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

void visit_essmodule_VoltagePI(const set_t<essmodule::VoltagePI>& setter, const get_t<essmodule::VoltagePI>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("voltagePICtl", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagepictl();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltageregulation();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::VoltageRegulation const *
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

void visit_essmodule_VoltageRegulation(const set_t<essmodule::VoltageRegulation>& setter, const get_t<essmodule::VoltageRegulation>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("overVoltageDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_overvoltagedroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_undervoltagedroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagedeadbandminus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagedeadbandplus();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpoint();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,std::string>::build(
            [setter](essmodule::ESSControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<std::string>& handler)
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
