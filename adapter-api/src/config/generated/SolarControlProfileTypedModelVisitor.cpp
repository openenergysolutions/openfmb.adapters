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

#include "adapter-api/config/generated/TypedModelVisitors.h"
#include "../AccessorImpl.h"

namespace adapter {

template <class V>
using set_t = setter_t<solarmodule::SolarControlProfile, V>;

template <class V>
using get_t = getter_t<solarmodule::SolarControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ENG_ScheduleParameter(const set_t<commonmodule::ENG_ScheduleParameter>& setter, const get_t<commonmodule::ENG_ScheduleParameter>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_solarmodule_SolarCSG(const set_t<solarmodule::SolarCSG>& setter, const get_t<solarmodule::SolarCSG>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_solarmodule_SolarControl(const set_t<solarmodule::SolarControl>& setter, const get_t<solarmodule::SolarControl>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_solarmodule_SolarControlFSCC(const set_t<solarmodule::SolarControlFSCC>& setter, const get_t<solarmodule::SolarControlFSCC>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_solarmodule_SolarControlScheduleFSCH(const set_t<solarmodule::SolarControlScheduleFSCH>& setter, const get_t<solarmodule::SolarControlScheduleFSCH>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit_solarmodule_SolarPoint(const set_t<solarmodule::SolarPoint>& setter, const get_t<solarmodule::SolarPoint>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](solarmodule::SolarControlProfile& profile) { return &profile; };
    const auto getter = [](const solarmodule::SolarControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("solarControl", solarmodule::SolarControl::descriptor()))
    {
        visit_solarmodule_SolarControl(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_solarcontrol();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> solarmodule::SolarControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarcontrol() ? &value->solarcontrol() : nullptr;
                }
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_solarinverter();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> solarmodule::SolarInverter const *
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<solarmodule::SolarControlProfile,std::string>::build(
            [setter](solarmodule::SolarControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<solarmodule::SolarControlProfile,bool>::build(
            [setter](solarmodule::SolarControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_controlschedulefsch();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_islandcontrolschedulefsch();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlScheduleFSCH const *
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

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ScheduleCSG const *
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<solarmodule::SolarControlProfile,int>::build(
            [setter](solarmodule::SolarControlProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<int>& handler)
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ENG_ScheduleParameter(const set_t<commonmodule::ENG_ScheduleParameter>& setter, const get_t<commonmodule::ENG_ScheduleParameter>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "scheduleParameterType",
        AccessorBuilder<solarmodule::SolarControlProfile,int>::build(
            [setter](solarmodule::SolarControlProfile& profile, const int& value) { setter(profile)->set_scheduleparametertype(static_cast<commonmodule::ScheduleParameterKind>(value)); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->scheduleparametertype());
                return true;
            }
        ),
        commonmodule::ScheduleParameterKind_descriptor()
    );

    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarControlProfile,float>::build(
            [setter](solarmodule::SolarControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<solarmodule::SolarControlProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarControlProfile,int>::build(
            [setter](solarmodule::SolarControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("schpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarControlProfile& profile) -> commonmodule::SchedulePoint const*
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

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    // repeated schedule parameter
    visitor.handle(
        "scheduleParameter",
        [getter](const solarmodule::SolarControlProfile& profile) -> const google::protobuf::RepeatedPtrField<commonmodule::ENG_ScheduleParameter>*
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
        MessageAccessorBuilder<solarmodule::SolarControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](solarmodule::SolarControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<solarmodule::SolarControlProfile,bool>::build(
            [setter](solarmodule::SolarControlProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarControlProfile,bool>::build(
            [setter](solarmodule::SolarControlProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarControlProfile,bool>::build(
            [setter](solarmodule::SolarControlProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<bool>& handler)
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
        AccessorBuilder<solarmodule::SolarControlProfile,int>::build(
            [setter](solarmodule::SolarControlProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<int>& handler)
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarControlProfile,bool>::build(
            [setter](solarmodule::SolarControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarControlProfile,float>::build(
            [setter](solarmodule::SolarControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarControlProfile,std::string>::build(
            [setter](solarmodule::SolarControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_solarmodule_SolarCSG(const set_t<solarmodule::SolarCSG>& setter, const get_t<solarmodule::SolarCSG>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", solarmodule::SolarPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](solarmodule::SolarControlProfile& profile)
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
            const auto get = [getter, i](const solarmodule::SolarControlProfile& profile) -> solarmodule::SolarPoint const*
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
            visit_solarmodule_SolarPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_solarmodule_SolarControl(const set_t<solarmodule::SolarControl>& setter, const get_t<solarmodule::SolarControl>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("solarControlFSCC", solarmodule::SolarControlFSCC::descriptor()))
    {
        visit_solarmodule_SolarControlFSCC(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_solarcontrolfscc();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> solarmodule::SolarControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarcontrolfscc() ? &value->solarcontrolfscc() : nullptr;
                }
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

void visit_solarmodule_SolarControlFSCC(const set_t<solarmodule::SolarControlFSCC>& setter, const get_t<solarmodule::SolarControlFSCC>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlFSCC const *
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

    if(visitor.start_message_field("SolarControlScheduleFSCH", solarmodule::SolarControlScheduleFSCH::descriptor()))
    {
        visit_solarmodule_SolarControlScheduleFSCH(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_solarcontrolschedulefsch();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> solarmodule::SolarControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarcontrolschedulefsch() ? &value->solarcontrolschedulefsch() : nullptr;
                }
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

void visit_solarmodule_SolarControlScheduleFSCH(const set_t<solarmodule::SolarControlScheduleFSCH>& setter, const get_t<solarmodule::SolarControlScheduleFSCH>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", solarmodule::SolarCSG::descriptor()))
    {
        visit_solarmodule_SolarCSG(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> solarmodule::SolarCSG const *
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

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_solarmodule_SolarPoint(const set_t<solarmodule::SolarPoint>& setter, const get_t<solarmodule::SolarPoint>& getter, ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor)
{
    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](solarmodule::SolarControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const solarmodule::SolarControlProfile& profile) -> commonmodule::ControlDPC const *
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
        MessageAccessorBuilder<solarmodule::SolarControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](solarmodule::SolarControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const solarmodule::SolarControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

} // end namespace adapter
