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
using set_t = setter_t<interconnectionmodule::RequestedInterconnectionScheduleProfile, V>;

template <class V>
using get_t = getter_t<interconnectionmodule::RequestedInterconnectionScheduleProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_interconnectionmodule_InterconnectionCSG(const set_t<interconnectionmodule::InterconnectionCSG>& setter, const get_t<interconnectionmodule::InterconnectionCSG>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_interconnectionmodule_InterconnectionControlScheduleFSCH(const set_t<interconnectionmodule::InterconnectionControlScheduleFSCH>& setter, const get_t<interconnectionmodule::InterconnectionControlScheduleFSCH>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_interconnectionmodule_InterconnectionPoint(const set_t<interconnectionmodule::InterconnectionPoint>& setter, const get_t<interconnectionmodule::InterconnectionPoint>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_interconnectionmodule_InterconnectionSchedule(const set_t<interconnectionmodule::InterconnectionSchedule>& setter, const get_t<interconnectionmodule::InterconnectionSchedule>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

void visit_interconnectionmodule_InterconnectionScheduleFSCC(const set_t<interconnectionmodule::InterconnectionScheduleFSCC>& setter, const get_t<interconnectionmodule::InterconnectionScheduleFSCC>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) { return &profile; };
    const auto getter = [](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("requesterCircuitSegmentService", commonmodule::ApplicationSystem::descriptor()))
    {
        visit_commonmodule_ApplicationSystem(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_requestercircuitsegmentservice();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ApplicationSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_requestercircuitsegmentservice() ? &value->requestercircuitsegmentservice() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("interconnectionSchedule", interconnectionmodule::InterconnectionSchedule::descriptor()))
    {
        visit_interconnectionmodule_InterconnectionSchedule(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_interconnectionschedule();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> interconnectionmodule::InterconnectionSchedule const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_interconnectionschedule() ? &value->interconnectionschedule() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("tiePoint", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_tiepoint();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ConductingEquipment const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tiepoint() ? &value->tiepoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("responderCircuitSegmentService", commonmodule::ApplicationSystem::descriptor()))
    {
        visit_commonmodule_ApplicationSystem(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_respondercircuitsegmentservice();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ApplicationSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_respondercircuitsegmentservice() ? &value->respondercircuitsegmentservice() : nullptr;
                }
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

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,std::string>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,std::string>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::LogicalNodeForControl const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_controlschedulefsch();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_islandcontrolschedulefsch();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,bool>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ScheduleCSG const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,commonmodule::Timestamp>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
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
            const auto get = [getter, i](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::SchedulePoint const*
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

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    // repeated schedule parameter
    visitor.handle(
        "scheduleParameter",
        [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> const google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>*
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
        MessageAccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,commonmodule::ControlTimestamp>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,bool>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,float>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,std::string>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_interconnectionmodule_InterconnectionCSG(const set_t<interconnectionmodule::InterconnectionCSG>& setter, const get_t<interconnectionmodule::InterconnectionCSG>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", interconnectionmodule::InterconnectionPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
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
            const auto get = [getter, i](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> interconnectionmodule::InterconnectionPoint const*
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
            visit_interconnectionmodule_InterconnectionPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_interconnectionmodule_InterconnectionControlScheduleFSCH(const set_t<interconnectionmodule::InterconnectionControlScheduleFSCH>& setter, const get_t<interconnectionmodule::InterconnectionControlScheduleFSCH>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", interconnectionmodule::InterconnectionCSG::descriptor()))
    {
        visit_interconnectionmodule_InterconnectionCSG(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> interconnectionmodule::InterconnectionCSG const *
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

void visit_interconnectionmodule_InterconnectionPoint(const set_t<interconnectionmodule::InterconnectionPoint>& setter, const get_t<interconnectionmodule::InterconnectionPoint>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("island", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_island();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_island() ? &value->island() : nullptr;
                }
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::RampRate const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlSPC const *
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
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlSPC const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlSPC const *
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
        MessageAccessorBuilder<interconnectionmodule::RequestedInterconnectionScheduleProfile,commonmodule::Timestamp>::build(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_interconnectionmodule_InterconnectionSchedule(const set_t<interconnectionmodule::InterconnectionSchedule>& setter, const get_t<interconnectionmodule::InterconnectionSchedule>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("interconnectionScheduleFSCC", interconnectionmodule::InterconnectionScheduleFSCC::descriptor()))
    {
        visit_interconnectionmodule_InterconnectionScheduleFSCC(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_interconnectionschedulefscc();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> interconnectionmodule::InterconnectionScheduleFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_interconnectionschedulefscc() ? &value->interconnectionschedulefscc() : nullptr;
                }
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

void visit_interconnectionmodule_InterconnectionScheduleFSCC(const set_t<interconnectionmodule::InterconnectionScheduleFSCC>& setter, const get_t<interconnectionmodule::InterconnectionScheduleFSCC>& getter, ITypedModelVisitor<interconnectionmodule::RequestedInterconnectionScheduleProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> commonmodule::ControlFSCC const *
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

    {
        const auto count = visitor.start_repeated_message_field("interconnectioncontrolschedulefsch", interconnectionmodule::InterconnectionControlScheduleFSCH::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](interconnectionmodule::RequestedInterconnectionScheduleProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_interconnectioncontrolschedulefsch();
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
            const auto get = [getter, i](const interconnectionmodule::RequestedInterconnectionScheduleProfile& profile) -> interconnectionmodule::InterconnectionControlScheduleFSCH const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->interconnectioncontrolschedulefsch_size()) ? &value->interconnectioncontrolschedulefsch(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_interconnectionmodule_InterconnectionControlScheduleFSCH(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

} // end namespace util

} // end namespace adapter
