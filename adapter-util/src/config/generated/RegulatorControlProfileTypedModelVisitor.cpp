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
using set_t = setter_t<regulatormodule::RegulatorControlProfile, V>;

template <class V>
using get_t = getter_t<regulatormodule::RegulatorControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlISC(const set_t<commonmodule::ControlISC>& setter, const get_t<commonmodule::ControlISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_Optional_DirectionModeKind(const set_t<commonmodule::Optional_DirectionModeKind>& setter, const get_t<commonmodule::Optional_DirectionModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_Optional_VoltLimitModeKind(const set_t<commonmodule::Optional_VoltLimitModeKind>& setter, const get_t<commonmodule::Optional_VoltLimitModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_PhaseDPC(const set_t<commonmodule::PhaseDPC>& setter, const get_t<commonmodule::PhaseDPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_PhaseISC(const set_t<commonmodule::PhaseISC>& setter, const get_t<commonmodule::PhaseISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_PhaseSPC(const set_t<commonmodule::PhaseSPC>& setter, const get_t<commonmodule::PhaseSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_DirectionalATCC(const set_t<regulatormodule::DirectionalATCC>& setter, const get_t<regulatormodule::DirectionalATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_RegulatorCSG(const set_t<regulatormodule::RegulatorCSG>& setter, const get_t<regulatormodule::RegulatorCSG>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_RegulatorControl(const set_t<regulatormodule::RegulatorControl>& setter, const get_t<regulatormodule::RegulatorControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_RegulatorControlATCC(const set_t<regulatormodule::RegulatorControlATCC>& setter, const get_t<regulatormodule::RegulatorControlATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_RegulatorControlFSCC(const set_t<regulatormodule::RegulatorControlFSCC>& setter, const get_t<regulatormodule::RegulatorControlFSCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_RegulatorControlScheduleFSCH(const set_t<regulatormodule::RegulatorControlScheduleFSCH>& setter, const get_t<regulatormodule::RegulatorControlScheduleFSCH>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_RegulatorPoint(const set_t<regulatormodule::RegulatorPoint>& setter, const get_t<regulatormodule::RegulatorPoint>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](regulatormodule::RegulatorControlProfile& profile) { return &profile; };
    const auto getter = [](const regulatormodule::RegulatorControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("regulatorControl", regulatormodule::RegulatorControl::descriptor()))
    {
        visit_regulatormodule_RegulatorControl(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_regulatorcontrol();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::RegulatorControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorcontrol() ? &value->regulatorcontrol() : nullptr;
                }
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_regulatorsystem();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::RegulatorSystem const *
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<regulatormodule::RegulatorControlProfile,std::string>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,double>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const double& value) { setter(profile)->set_ctlval(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,bool>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_controlschedulefsch();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_islandcontrolschedulefsch();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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

void visit_commonmodule_ControlISC(const set_t<commonmodule::ControlISC>& setter, const get_t<commonmodule::ControlISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const int32_t& value) { setter(profile)->set_ctlval(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,bool>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ScheduleCSG const *
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<regulatormodule::RegulatorControlProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_DirectionModeKind(const set_t<commonmodule::Optional_DirectionModeKind>& setter, const get_t<commonmodule::Optional_DirectionModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,int>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::DirectionModeKind>(value)); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::DirectionModeKind_descriptor()
    );
}

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,int>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_VoltLimitModeKind(const set_t<commonmodule::Optional_VoltLimitModeKind>& setter, const get_t<commonmodule::Optional_VoltLimitModeKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,int>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::VoltLimitModeKind>(value)); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::VoltLimitModeKind_descriptor()
    );
}

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlAPC const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlAPC const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlAPC const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlAPC const *
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

void visit_commonmodule_PhaseDPC(const set_t<commonmodule::PhaseDPC>& setter, const get_t<commonmodule::PhaseDPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("phsA", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("phsB", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("phsC", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlDPC const *
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

void visit_commonmodule_PhaseISC(const set_t<commonmodule::PhaseISC>& setter, const get_t<commonmodule::PhaseISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlISC const *
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

    if(visitor.start_message_field("phsA", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlISC const *
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

    if(visitor.start_message_field("phsB", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlISC const *
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

    if(visitor.start_message_field("phsC", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlISC const *
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

void visit_commonmodule_PhaseSPC(const set_t<commonmodule::PhaseSPC>& setter, const get_t<commonmodule::PhaseSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("phsA", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("phsB", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("phsC", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlSPC const *
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](regulatormodule::RegulatorControlProfile& profile)
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
            const auto get = [getter, i](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::SchedulePoint const*
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

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    // repeated schedule parameter
    visitor.handle(
        "scheduleParameter",
        [getter](const regulatormodule::RegulatorControlProfile& profile) -> const google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>*
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
        MessageAccessorBuilder<regulatormodule::RegulatorControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,bool>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,float>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorControlProfile,std::string>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_regulatormodule_DirectionalATCC(const set_t<regulatormodule::DirectionalATCC>& setter, const get_t<regulatormodule::DirectionalATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("BndWid", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_bndwid();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseAPC const *
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

    if(visitor.start_message_field("CtlDlTmms", commonmodule::PhaseISC::descriptor()))
    {
        visit_commonmodule_PhaseISC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_ctldltmms();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseISC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ctldltmms() ? &value->ctldltmms() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCR", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_ldcr();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseAPC const *
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

    if(visitor.start_message_field("LDCX", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_ldcx();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseAPC const *
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

    if(visitor.start_message_field("VolSpt", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_volspt();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseAPC const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::PhaseDPC::descriptor()))
    {
        visit_commonmodule_PhaseDPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseDPC const *
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

void visit_regulatormodule_RegulatorCSG(const set_t<regulatormodule::RegulatorCSG>& setter, const get_t<regulatormodule::RegulatorCSG>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", regulatormodule::RegulatorPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](regulatormodule::RegulatorControlProfile& profile)
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
            const auto get = [getter, i](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::RegulatorPoint const*
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
            visit_regulatormodule_RegulatorPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_regulatormodule_RegulatorControl(const set_t<regulatormodule::RegulatorControl>& setter, const get_t<regulatormodule::RegulatorControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("regulatorControlFSCC", regulatormodule::RegulatorControlFSCC::descriptor()))
    {
        visit_regulatormodule_RegulatorControlFSCC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_regulatorcontrolfscc();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::RegulatorControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorcontrolfscc() ? &value->regulatorcontrolfscc() : nullptr;
                }
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

void visit_regulatormodule_RegulatorControlATCC(const set_t<regulatormodule::RegulatorControlATCC>& setter, const get_t<regulatormodule::RegulatorControlATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("DirFwd", regulatormodule::DirectionalATCC::descriptor()))
    {
        visit_regulatormodule_DirectionalATCC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_dirfwd();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::DirectionalATCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirfwd() ? &value->dirfwd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DirMode", commonmodule::Optional_DirectionModeKind::descriptor()))
    {
        visit_commonmodule_Optional_DirectionModeKind(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_dirmode();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::Optional_DirectionModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirmode() ? &value->dirmode() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DirRev", regulatormodule::DirectionalATCC::descriptor()))
    {
        visit_regulatormodule_DirectionalATCC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_dirrev();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::DirectionalATCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirrev() ? &value->dirrev() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DirThd", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_dirthd();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dirthd() ? &value->dirthd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ParOp", commonmodule::PhaseSPC::descriptor()))
    {
        visit_commonmodule_PhaseSPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_parop();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseSPC const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::RampRate const *
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
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("TapOpL", commonmodule::PhaseSPC::descriptor()))
    {
        visit_commonmodule_PhaseSPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_tapopl();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tapopl() ? &value->tapopl() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TapOpR", commonmodule::PhaseSPC::descriptor()))
    {
        visit_commonmodule_PhaseSPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_tapopr();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tapopr() ? &value->tapopr() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolLmtHi", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_vollmthi();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vollmthi() ? &value->vollmthi() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolLmtLo", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_vollmtlo();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vollmtlo() ? &value->vollmtlo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolLmtMode", commonmodule::Optional_VoltLimitModeKind::descriptor()))
    {
        visit_commonmodule_Optional_VoltLimitModeKind(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_vollmtmode();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::Optional_VoltLimitModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vollmtmode() ? &value->vollmtmode() : nullptr;
                }
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

void visit_regulatormodule_RegulatorControlFSCC(const set_t<regulatormodule::RegulatorControlFSCC>& setter, const get_t<regulatormodule::RegulatorControlFSCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ControlFSCC const *
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

    if(visitor.start_message_field("regulatorControlScheduleFSCH", regulatormodule::RegulatorControlScheduleFSCH::descriptor()))
    {
        visit_regulatormodule_RegulatorControlScheduleFSCH(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_regulatorcontrolschedulefsch();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::RegulatorControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorcontrolschedulefsch() ? &value->regulatorcontrolschedulefsch() : nullptr;
                }
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

void visit_regulatormodule_RegulatorControlScheduleFSCH(const set_t<regulatormodule::RegulatorControlScheduleFSCH>& setter, const get_t<regulatormodule::RegulatorControlScheduleFSCH>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", regulatormodule::RegulatorCSG::descriptor()))
    {
        visit_regulatormodule_RegulatorCSG(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::RegulatorCSG const *
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

void visit_regulatormodule_RegulatorPoint(const set_t<regulatormodule::RegulatorPoint>& setter, const get_t<regulatormodule::RegulatorPoint>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("control", regulatormodule::RegulatorControlATCC::descriptor()))
    {
        visit_regulatormodule_RegulatorControlATCC(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_control();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> regulatormodule::RegulatorControlATCC const *
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

    visitor.handle(
        "startTime",
        MessageAccessorBuilder<regulatormodule::RegulatorControlProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const regulatormodule::RegulatorControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](regulatormodule::RegulatorControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const regulatormodule::RegulatorControlProfile& profile) -> commonmodule::ConductingEquipment const *
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
