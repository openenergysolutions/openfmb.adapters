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
using set_t = setter_t<generationmodule::GenerationControlProfile, V>;

template <class V>
using get_t = getter_t<generationmodule::GenerationControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_generationmodule_GenerationCSG(const set_t<generationmodule::GenerationCSG>& setter, const get_t<generationmodule::GenerationCSG>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_generationmodule_GenerationControl(const set_t<generationmodule::GenerationControl>& setter, const get_t<generationmodule::GenerationControl>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_generationmodule_GenerationControlFSCC(const set_t<generationmodule::GenerationControlFSCC>& setter, const get_t<generationmodule::GenerationControlFSCC>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_generationmodule_GenerationControlScheduleFSCH(const set_t<generationmodule::GenerationControlScheduleFSCH>& setter, const get_t<generationmodule::GenerationControlScheduleFSCH>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_generationmodule_GenerationPoint(const set_t<generationmodule::GenerationPoint>& setter, const get_t<generationmodule::GenerationPoint>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](generationmodule::GenerationControlProfile& profile) { return &profile; };
    const auto getter = [](const generationmodule::GenerationControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_generatingunit();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> generationmodule::GeneratingUnit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generatingunit() ? &value->generatingunit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationControl", generationmodule::GenerationControl::descriptor()))
    {
        visit_generationmodule_GenerationControl(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_generationcontrol();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> generationmodule::GenerationControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationcontrol() ? &value->generationcontrol() : nullptr;
                }
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

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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

    if(visitor.start_message_field("unit", commonmodule::Optional_UnitSymbolKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitSymbolKind(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::Optional_UnitSymbolKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_unit() ? &value->unit() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("value", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_value();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_value() ? &value->value() : nullptr;
                }
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<generationmodule::GenerationControlProfile,std::string>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_controlschedulefsch();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_islandcontrolschedulefsch();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<generationmodule::GenerationControlProfile,bool>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ScheduleCSG const *
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<generationmodule::GenerationControlProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationControlProfile,int>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationControlProfile,int>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationControlProfile,int>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationControlProfile& profile)
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
            const auto get = [getter, i](const generationmodule::GenerationControlProfile& profile) -> commonmodule::SchedulePoint const*
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

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    // repeated schedule parameter
    visitor.handle(
        "scheduleParameter",
        [getter](const generationmodule::GenerationControlProfile& profile) -> const google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>*
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
        MessageAccessorBuilder<generationmodule::GenerationControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](generationmodule::GenerationControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("maxOperatingP", commonmodule::ActivePower::descriptor()))
    {
        visit_commonmodule_ActivePower(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_maxoperatingp();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ActivePower const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_maxoperatingp() ? &value->maxoperatingp() : nullptr;
                }
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

void visit_generationmodule_GenerationCSG(const set_t<generationmodule::GenerationCSG>& setter, const get_t<generationmodule::GenerationCSG>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", generationmodule::GenerationPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](generationmodule::GenerationControlProfile& profile)
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
            const auto get = [getter, i](const generationmodule::GenerationControlProfile& profile) -> generationmodule::GenerationPoint const*
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
            visit_generationmodule_GenerationPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_generationmodule_GenerationControl(const set_t<generationmodule::GenerationControl>& setter, const get_t<generationmodule::GenerationControl>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("generationControlFSCC", generationmodule::GenerationControlFSCC::descriptor()))
    {
        visit_generationmodule_GenerationControlFSCC(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_generationcontrolfscc();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> generationmodule::GenerationControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationcontrolfscc() ? &value->generationcontrolfscc() : nullptr;
                }
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

void visit_generationmodule_GenerationControlFSCC(const set_t<generationmodule::GenerationControlFSCC>& setter, const get_t<generationmodule::GenerationControlFSCC>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlFSCC const *
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

    if(visitor.start_message_field("GenerationControlScheduleFSCH", generationmodule::GenerationControlScheduleFSCH::descriptor()))
    {
        visit_generationmodule_GenerationControlScheduleFSCH(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_generationcontrolschedulefsch();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> generationmodule::GenerationControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationcontrolschedulefsch() ? &value->generationcontrolschedulefsch() : nullptr;
                }
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

void visit_generationmodule_GenerationControlScheduleFSCH(const set_t<generationmodule::GenerationControlScheduleFSCH>& setter, const get_t<generationmodule::GenerationControlScheduleFSCH>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", generationmodule::GenerationCSG::descriptor()))
    {
        visit_generationmodule_GenerationCSG(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> generationmodule::GenerationCSG const *
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

void visit_generationmodule_GenerationPoint(const set_t<generationmodule::GenerationPoint>& setter, const get_t<generationmodule::GenerationPoint>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::RampRate const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::Optional_StateKind const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](generationmodule::GenerationControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const generationmodule::GenerationControlProfile& profile) -> commonmodule::ControlSPC const *
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
        MessageAccessorBuilder<generationmodule::GenerationControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](generationmodule::GenerationControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationControlProfile,bool>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationControlProfile,float>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationControlProfile,std::string>::build(
            [setter](generationmodule::GenerationControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationControlProfile& profile, const handler_t<std::string>& handler)
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
