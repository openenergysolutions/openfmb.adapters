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
using set_t = setter_t<loadmodule::LoadStatusProfile, V>;

template <class V>
using get_t = getter_t<loadmodule::LoadStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_EnergyConsumer(const set_t<commonmodule::EnergyConsumer>& setter, const get_t<commonmodule::EnergyConsumer>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_loadmodule_LoadEventAndStatusZGLD(const set_t<loadmodule::LoadEventAndStatusZGLD>& setter, const get_t<loadmodule::LoadEventAndStatusZGLD>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_loadmodule_LoadPointStatus(const set_t<loadmodule::LoadPointStatus>& setter, const get_t<loadmodule::LoadPointStatus>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_loadmodule_LoadStatus(const set_t<loadmodule::LoadStatus>& setter, const get_t<loadmodule::LoadStatus>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit_loadmodule_LoadStatusZGLD(const set_t<loadmodule::LoadStatusZGLD>& setter, const get_t<loadmodule::LoadStatusZGLD>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](loadmodule::LoadStatusProfile& profile) { return &profile; };
    const auto getter = [](const loadmodule::LoadStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
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

    if(visitor.start_message_field("energyConsumer", commonmodule::EnergyConsumer::descriptor()))
    {
        visit_commonmodule_EnergyConsumer(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_energyconsumer();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::EnergyConsumer const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("loadStatus", loadmodule::LoadStatus::descriptor()))
    {
        visit_loadmodule_LoadStatus(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_loadstatus();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> loadmodule::LoadStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadstatus() ? &value->loadstatus() : nullptr;
                }
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<loadmodule::LoadStatusProfile,std::string>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "failure",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inaccurate",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inconsistent",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oldData",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oscillatory",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "outOfRange",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "overflow",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    // TODO - create handler for message type Quality

    visitor.handle(
        "stVal",
        AccessorBuilder<loadmodule::LoadStatusProfile,int>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::BehaviourModeKind_descriptor()
    );

    // TODO - create handler for message type Timestamp
}

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    // TODO - create handler for message type Quality

    visitor.handle(
        "stVal",
        AccessorBuilder<loadmodule::LoadStatusProfile,int>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::DynamicTestKind_descriptor()
    );

    // TODO - create handler for message type Timestamp
}

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::StringValue const *
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
        AccessorBuilder<loadmodule::LoadStatusProfile,int>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::HealthKind_descriptor()
    );
}

void visit_commonmodule_EnergyConsumer(const set_t<commonmodule::EnergyConsumer>& setter, const get_t<commonmodule::EnergyConsumer>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_operatinglimit();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
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
}

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadStatusProfile,int>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::StateKind_descriptor()
    );
}

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    // TODO - create handler for message type Quality

    visitor.handle(
        "stVal",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    // TODO - create handler for message type Timestamp
}

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<loadmodule::LoadStatusProfile,bool>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<loadmodule::LoadStatusProfile,int>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadStatusProfile,float>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<loadmodule::LoadStatusProfile,std::string>::build(
            [setter](loadmodule::LoadStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const loadmodule::LoadStatusProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_loadmodule_LoadEventAndStatusZGLD(const set_t<loadmodule::LoadEventAndStatusZGLD>& setter, const get_t<loadmodule::LoadEventAndStatusZGLD>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
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

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::StatusSPS const *
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

    if(visitor.start_message_field("PointStatus", loadmodule::LoadPointStatus::descriptor()))
    {
        visit_loadmodule_LoadPointStatus(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> loadmodule::LoadPointStatus const *
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

void visit_loadmodule_LoadPointStatus(const set_t<loadmodule::LoadPointStatus>& setter, const get_t<loadmodule::LoadPointStatus>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::RampRate const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::Optional_StateKind const *
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
}

void visit_loadmodule_LoadStatus(const set_t<loadmodule::LoadStatus>& setter, const get_t<loadmodule::LoadStatus>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> commonmodule::StatusValue const *
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

    if(visitor.start_message_field("loadStatusZGLD", loadmodule::LoadStatusZGLD::descriptor()))
    {
        visit_loadmodule_LoadStatusZGLD(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_loadstatuszgld();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> loadmodule::LoadStatusZGLD const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadstatuszgld() ? &value->loadstatuszgld() : nullptr;
                }
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

void visit_loadmodule_LoadStatusZGLD(const set_t<loadmodule::LoadStatusZGLD>& setter, const get_t<loadmodule::LoadStatusZGLD>& getter, ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor)
{
    if(visitor.start_message_field("loadEventAndStatusZGLD", loadmodule::LoadEventAndStatusZGLD::descriptor()))
    {
        visit_loadmodule_LoadEventAndStatusZGLD(
            [setter](loadmodule::LoadStatusProfile& profile)
            {
                return setter(profile)->mutable_loadeventandstatuszgld();
            },
            [getter](const loadmodule::LoadStatusProfile& profile) -> loadmodule::LoadEventAndStatusZGLD const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_loadeventandstatuszgld() ? &value->loadeventandstatuszgld() : nullptr;
                }
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

} // end namespace adapter
