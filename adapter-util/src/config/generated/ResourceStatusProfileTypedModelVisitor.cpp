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
using set_t = setter_t<resourcemodule::ResourceStatusProfile, V>;

template <class V>
using get_t = getter_t<resourcemodule::ResourceStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_AnalogEventAndStatusGGIO(const set_t<commonmodule::AnalogEventAndStatusGGIO>& setter, const get_t<commonmodule::AnalogEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_BooleanEventAndStatusGGIO(const set_t<commonmodule::BooleanEventAndStatusGGIO>& setter, const get_t<commonmodule::BooleanEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_IntegerEventAndStatusGGIO(const set_t<commonmodule::IntegerEventAndStatusGGIO>& setter, const get_t<commonmodule::IntegerEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_StringEventAndStatusGGIO(const set_t<commonmodule::StringEventAndStatusGGIO>& setter, const get_t<commonmodule::StringEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_commonmodule_VSS(const set_t<commonmodule::VSS>& setter, const get_t<commonmodule::VSS>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

void visit_resourcemodule_ResourceStatus(const set_t<resourcemodule::ResourceStatus>& setter, const get_t<resourcemodule::ResourceStatus>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](resourcemodule::ResourceStatusProfile& profile) { return &profile; };
    const auto getter = [](const resourcemodule::ResourceStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
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

    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("resourceStatus", resourcemodule::ResourceStatus::descriptor()))
    {
        visit_resourcemodule_ResourceStatus(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_resourcestatus();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> resourcemodule::ResourceStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_resourcestatus() ? &value->resourcestatus() : nullptr;
                }
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

void visit_commonmodule_AnalogEventAndStatusGGIO(const set_t<commonmodule::AnalogEventAndStatusGGIO>& setter, const get_t<commonmodule::AnalogEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("AnIn", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_anin();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_anin() ? &value->anin() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phase() ? &value->phase() : nullptr;
                }
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

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_f() ? &value->f() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("i", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> google::protobuf::Int32Value const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_i() ? &value->i() : nullptr;
                }
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

void visit_commonmodule_BooleanEventAndStatusGGIO(const set_t<commonmodule::BooleanEventAndStatusGGIO>& setter, const get_t<commonmodule::BooleanEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("Ind", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_ind();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ind() ? &value->ind() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phase() ? &value->phase() : nullptr;
                }
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<resourcemodule::ResourceStatusProfile,std::string>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_IntegerEventAndStatusGGIO(const set_t<commonmodule::IntegerEventAndStatusGGIO>& setter, const get_t<commonmodule::IntegerEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("IntIn", commonmodule::StatusINS::descriptor()))
    {
        visit_commonmodule_StatusINS(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_intin();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::StatusINS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_intin() ? &value->intin() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phase() ? &value->phase() : nullptr;
                }
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::AnalogueValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_mag() ? &value->mag() : nullptr;
                }
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
        "q",
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Quality>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Timestamp>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
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
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Timestamp>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceStatusProfile,int>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::PhaseCodeKind>(value)); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::PhaseCodeKind_descriptor()
    );
}

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceStatusProfile,int>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_StatusINS(const set_t<commonmodule::StatusINS>& setter, const get_t<commonmodule::StatusINS>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Quality>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<resourcemodule::ResourceStatusProfile,int32_t>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const int32_t& value) { setter(profile)->set_stval(value); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<int32_t>& handler)
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
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Timestamp>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Quality>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<resourcemodule::ResourceStatusProfile,bool>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<bool>& handler)
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
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Timestamp>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_StringEventAndStatusGGIO(const set_t<commonmodule::StringEventAndStatusGGIO>& setter, const get_t<commonmodule::StringEventAndStatusGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("Phase", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phase() ? &value->phase() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("StrIn", commonmodule::VSS::descriptor()))
    {
        visit_commonmodule_VSS(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_strin();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::VSS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_strin() ? &value->strin() : nullptr;
                }
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<resourcemodule::ResourceStatusProfile,int>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_VSS(const set_t<commonmodule::VSS>& setter, const get_t<commonmodule::VSS>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "q",
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Quality>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        AccessorBuilder<resourcemodule::ResourceStatusProfile,std::string>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const std::string& value) { setter(profile)->set_stval(value); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<std::string>& handler)
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
        MessageAccessorBuilder<resourcemodule::ResourceStatusProfile,commonmodule::Timestamp>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceStatusProfile,float>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceStatusProfile,int32_t>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceStatusProfile,std::string>::build(
            [setter](resourcemodule::ResourceStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const resourcemodule::ResourceStatusProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_resourcemodule_ResourceStatus(const set_t<resourcemodule::ResourceStatus>& setter, const get_t<resourcemodule::ResourceStatus>& getter, ITypedModelVisitor<resourcemodule::ResourceStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](resourcemodule::ResourceStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

    {
        const auto count = visitor.start_repeated_message_field("analogeventandstatusggio", commonmodule::AnalogEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceStatusProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_analogeventandstatusggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::AnalogEventAndStatusGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->analogeventandstatusggio_size()) ? &value->analogeventandstatusggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_AnalogEventAndStatusGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("booleaneventandstatusggio", commonmodule::BooleanEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceStatusProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_booleaneventandstatusggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::BooleanEventAndStatusGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->booleaneventandstatusggio_size()) ? &value->booleaneventandstatusggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_BooleanEventAndStatusGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("integereventandstatusggio", commonmodule::IntegerEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceStatusProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_integereventandstatusggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::IntegerEventAndStatusGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->integereventandstatusggio_size()) ? &value->integereventandstatusggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_IntegerEventAndStatusGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("stringeventandstatusggio", commonmodule::StringEventAndStatusGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceStatusProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_stringeventandstatusggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceStatusProfile& profile) -> commonmodule::StringEventAndStatusGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->stringeventandstatusggio_size()) ? &value->stringeventandstatusggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_StringEventAndStatusGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

} // end namespace util

} // end namespace adapter
