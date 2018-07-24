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
using set_t = setter_t<loadmodule::LoadControlProfile, V>;

template <class V>
using get_t = getter_t<loadmodule::LoadControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_EnergyConsumer(const set_t<commonmodule::EnergyConsumer>& setter, const get_t<commonmodule::EnergyConsumer>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_loadmodule_LoadCSG(const set_t<loadmodule::LoadCSG>& setter, const get_t<loadmodule::LoadCSG>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_loadmodule_LoadControl(const set_t<loadmodule::LoadControl>& setter, const get_t<loadmodule::LoadControl>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_loadmodule_LoadControlFSCC(const set_t<loadmodule::LoadControlFSCC>& setter, const get_t<loadmodule::LoadControlFSCC>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_loadmodule_LoadControlScheduleFSCH(const set_t<loadmodule::LoadControlScheduleFSCH>& setter, const get_t<loadmodule::LoadControlScheduleFSCH>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit_loadmodule_LoadPoint(const set_t<loadmodule::LoadPoint>& setter, const get_t<loadmodule::LoadPoint>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](loadmodule::LoadControlProfile& profile) { return &profile; };
    const auto getter = [](const loadmodule::LoadControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_energyconsumer();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::EnergyConsumer const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_energyconsumer() ? &value->energyconsumer() : nullptr;
                }
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("loadControl", loadmodule::LoadControl::descriptor()))
    {
        visit_loadmodule_LoadControl(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_loadcontrol();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> loadmodule::LoadControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadcontrol() ? &value->loadcontrol() : nullptr;
                }
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<loadmodule::LoadControlProfile,std::string>::build(
            [setter](loadmodule::LoadControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<loadmodule::LoadControlProfile,bool>::build(
            [setter](loadmodule::LoadControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    {
        const auto count = visitor.start_repeated_message_field("controlschedulefsch", commonmodule::ControlScheduleFSCH::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](loadmodule::LoadControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_controlschedulefsch();
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
            const auto get = [getter, i](const loadmodule::LoadControlProfile& profile) -> commonmodule::ControlScheduleFSCH const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->controlschedulefsch_size()) ? &value->controlschedulefsch(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_ControlScheduleFSCH(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ScheduleCSG const *
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_EnergyConsumer(const set_t<commonmodule::EnergyConsumer>& setter, const get_t<commonmodule::EnergyConsumer>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("operatingLimit", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_operatinglimit();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_operatinglimit() ? &value->operatinglimit() : nullptr;
                }
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

    // TODO - create handler for message type Timestamp
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadControlProfile,int>::build(
            [setter](loadmodule::LoadControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::StateKind_descriptor()
    );
}

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](loadmodule::LoadControlProfile& profile)
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
            const auto get = [getter, i](const loadmodule::LoadControlProfile& profile) -> commonmodule::SchedulePoint const*
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
            visit_commonmodule_SchedulePoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    if(visitor.start_message_field("xD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_xd();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_xd() ? &value->xd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("xDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_xdu();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_xdu() ? &value->xdu() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_yd();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_yd() ? &value->yd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_ydu();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ydu() ? &value->ydu() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_yunits();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::Unit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_yunits() ? &value->yunits() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_zd();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zd() ? &value->zd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_zdu();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zdu() ? &value->zdu() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_zunits();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::Unit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zunits() ? &value->zunits() : nullptr;
                }
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

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    // TODO - create handler for message type ControlTimestamp

    visitor.handle(
        "yVal",
        AccessorBuilder<loadmodule::LoadControlProfile,float>::build(
            [setter](loadmodule::LoadControlProfile& profile, const float& value) { setter(profile)->set_yval(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("zVal", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_zval();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zval() ? &value->zval() : nullptr;
                }
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

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<loadmodule::LoadControlProfile,bool>::build(
            [setter](loadmodule::LoadControlProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<loadmodule::LoadControlProfile,bool>::build(
            [setter](loadmodule::LoadControlProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<loadmodule::LoadControlProfile,bool>::build(
            [setter](loadmodule::LoadControlProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<loadmodule::LoadControlProfile,int>::build(
            [setter](loadmodule::LoadControlProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    visitor.handle(
        "multiplier",
        AccessorBuilder<loadmodule::LoadControlProfile,int>::build(
            [setter](loadmodule::LoadControlProfile& profile, const int& value) { setter(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitMultiplierKind_descriptor()
    );

    visitor.handle(
        "SIUnit",
        AccessorBuilder<loadmodule::LoadControlProfile,int>::build(
            [setter](loadmodule::LoadControlProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadControlProfile,bool>::build(
            [setter](loadmodule::LoadControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadControlProfile,float>::build(
            [setter](loadmodule::LoadControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadControlProfile,std::string>::build(
            [setter](loadmodule::LoadControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadControlProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_loadmodule_LoadCSG(const set_t<loadmodule::LoadCSG>& setter, const get_t<loadmodule::LoadCSG>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", loadmodule::LoadPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](loadmodule::LoadControlProfile& profile)
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
            const auto get = [getter, i](const loadmodule::LoadControlProfile& profile) -> loadmodule::LoadPoint const*
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
            visit_loadmodule_LoadPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_loadmodule_LoadControl(const set_t<loadmodule::LoadControl>& setter, const get_t<loadmodule::LoadControl>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("loadControlFSCC", loadmodule::LoadControlFSCC::descriptor()))
    {
        visit_loadmodule_LoadControlFSCC(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_loadcontrolfscc();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> loadmodule::LoadControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadcontrolfscc() ? &value->loadcontrolfscc() : nullptr;
                }
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

void visit_loadmodule_LoadControlFSCC(const set_t<loadmodule::LoadControlFSCC>& setter, const get_t<loadmodule::LoadControlFSCC>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ControlFSCC const *
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

    if(visitor.start_message_field("loadControlScheduleFSCH", loadmodule::LoadControlScheduleFSCH::descriptor()))
    {
        visit_loadmodule_LoadControlScheduleFSCH(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_loadcontrolschedulefsch();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> loadmodule::LoadControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadcontrolschedulefsch() ? &value->loadcontrolschedulefsch() : nullptr;
                }
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

void visit_loadmodule_LoadControlScheduleFSCH(const set_t<loadmodule::LoadControlScheduleFSCH>& setter, const get_t<loadmodule::LoadControlScheduleFSCH>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", loadmodule::LoadCSG::descriptor()))
    {
        visit_loadmodule_LoadCSG(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> loadmodule::LoadCSG const *
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

void visit_loadmodule_LoadPoint(const set_t<loadmodule::LoadPoint>& setter, const get_t<loadmodule::LoadPoint>& getter, ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor)
{
    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::RampRate const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](loadmodule::LoadControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const loadmodule::LoadControlProfile& profile) -> commonmodule::Optional_StateKind const *
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

    // TODO - create handler for message type ControlTimestamp
}

} // end namespace adapter
