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
using set_t = setter_t<generationmodule::GenerationCapabilityProfile, V>;

template <class V>
using get_t = getter_t<generationmodule::GenerationCapabilityProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_commonmodule_SourceCapabilityRatings(const set_t<commonmodule::SourceCapabilityRatings>& setter, const get_t<commonmodule::SourceCapabilityRatings>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_generationmodule_GenerationCapability(const set_t<generationmodule::GenerationCapability>& setter, const get_t<generationmodule::GenerationCapability>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_generationmodule_GenerationCapabilityConfiguration(const set_t<generationmodule::GenerationCapabilityConfiguration>& setter, const get_t<generationmodule::GenerationCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_generationmodule_GenerationCapabilityRatings(const set_t<generationmodule::GenerationCapabilityRatings>& setter, const get_t<generationmodule::GenerationCapabilityRatings>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](generationmodule::GenerationCapabilityProfile& profile) { return &profile; };
    const auto getter = [](const generationmodule::GenerationCapabilityProfile& profile) { return &profile; };

    if(visitor.start_message_field("capabilityMessageInfo", commonmodule::CapabilityMessageInfo::descriptor()))
    {
        visit_commonmodule_CapabilityMessageInfo(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_capabilitymessageinfo();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::CapabilityMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capabilitymessageinfo() ? &value->capabilitymessageinfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationCapability", generationmodule::GenerationCapability::descriptor()))
    {
        visit_generationmodule_GenerationCapability(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_generationcapability();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> generationmodule::GenerationCapability const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationcapability() ? &value->generationcapability() : nullptr;
                }
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
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_generatingunit();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> generationmodule::GeneratingUnit const *
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
}

// ---- template definitions for child types ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    visitor.handle(
        "setMag",
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,double>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const double& value) { setter(profile)->set_setmag(value); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setmag());
                return true;
            }
        )
    );
}

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::Optional_UnitSymbolKind const *
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
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_value();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,std::string>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<generationmodule::GenerationCapabilityProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("model", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_model();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_model() ? &value->model() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("sernum", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sernum();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_sernum() ? &value->sernum() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("swRev", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_swrev();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_swrev() ? &value->swrev() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("vendor", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vendor();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vendor() ? &value->vendor() : nullptr;
                }
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,int>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,int>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("AMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_amax();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_amax() ? &value->amax() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VAMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vamax();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vamax() ? &value->vamax() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VarMaxAbs", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxabs();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varmaxabs() ? &value->varmaxabs() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VarMaxInj", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxinj();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varmaxinj() ? &value->varmaxinj() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmax();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vmax() ? &value->vmax() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VMin", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmin();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vmin() ? &value->vmin() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VNom", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vnom();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vnom() ? &value->vnom() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wmax();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wmax() ? &value->wmax() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WOvrExt", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrext();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wovrext() ? &value->wovrext() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WOvrExtPF", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextpf();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wovrextpf() ? &value->wovrextpf() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WUndExt", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundext();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wundext() ? &value->wundext() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WUndExtPF", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextpf();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wundextpf() ? &value->wundextpf() : nullptr;
                }
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

void visit_commonmodule_SourceCapabilityRatings(const set_t<commonmodule::SourceCapabilityRatings>& setter, const get_t<commonmodule::SourceCapabilityRatings>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::LogicalNode const *
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

    visitor.handle(
        "AbnOpCatRtg",
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,int>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const int& value) { setter(profile)->set_abnopcatrtg(static_cast<commonmodule::AbnOpCatKind>(value)); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->abnopcatrtg());
                return true;
            }
        ),
        commonmodule::AbnOpCatKind_descriptor()
    );

    if(visitor.start_message_field("AMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_amaxrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_amaxrtg() ? &value->amaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("FreqNomRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_freqnomrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_freqnomrtg() ? &value->freqnomrtg() : nullptr;
                }
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
        "NorOpCatRtg",
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,int>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const int& value) { setter(profile)->set_noropcatrtg(static_cast<commonmodule::NorOpCatKind>(value)); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->noropcatrtg());
                return true;
            }
        ),
        commonmodule::NorOpCatKind_descriptor()
    );

    if(visitor.start_message_field("ReactSusceptRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_reactsusceptrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reactsusceptrtg() ? &value->reactsusceptrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VAMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vamaxrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vamaxrtg() ? &value->vamaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VarMaxAbsRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxabsrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varmaxabsrtg() ? &value->varmaxabsrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VarMaxInjRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxinjrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_varmaxinjrtg() ? &value->varmaxinjrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmaxrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vmaxrtg() ? &value->vmaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VMinRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vminrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vminrtg() ? &value->vminrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VNomRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vnomrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vnomrtg() ? &value->vnomrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wmaxrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wmaxrtg() ? &value->wmaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WOvrExtRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wovrextrtg() ? &value->wovrextrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WOvrExtRtgPF", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextrtgpf();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wovrextrtgpf() ? &value->wovrextrtgpf() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WUndExtRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextrtg();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wundextrtg() ? &value->wundextrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WUndExtRtgPF", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextrtgpf();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wundextrtgpf() ? &value->wundextrtgpf() : nullptr;
                }
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

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ConductingEquipment const *
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
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_maxoperatingp();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::ActivePower const *
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

void visit_generationmodule_GenerationCapability(const set_t<generationmodule::GenerationCapability>& setter, const get_t<generationmodule::GenerationCapability>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("nameplateValue", commonmodule::NameplateValue::descriptor()))
    {
        visit_commonmodule_NameplateValue(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_nameplatevalue();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::NameplateValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_nameplatevalue() ? &value->nameplatevalue() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationCapabilityRatings", generationmodule::GenerationCapabilityRatings::descriptor()))
    {
        visit_generationmodule_GenerationCapabilityRatings(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_generationcapabilityratings();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> generationmodule::GenerationCapabilityRatings const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationcapabilityratings() ? &value->generationcapabilityratings() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("generationCapabilityConfiguration", generationmodule::GenerationCapabilityConfiguration::descriptor()))
    {
        visit_generationmodule_GenerationCapabilityConfiguration(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_generationcapabilityconfiguration();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> generationmodule::GenerationCapabilityConfiguration const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationcapabilityconfiguration() ? &value->generationcapabilityconfiguration() : nullptr;
                }
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

void visit_generationmodule_GenerationCapabilityConfiguration(const set_t<generationmodule::GenerationCapabilityConfiguration>& setter, const get_t<generationmodule::GenerationCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityConfiguration", commonmodule::SourceCapabilityConfiguration::descriptor()))
    {
        visit_commonmodule_SourceCapabilityConfiguration(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityconfiguration();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::SourceCapabilityConfiguration const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_sourcecapabilityconfiguration() ? &value->sourcecapabilityconfiguration() : nullptr;
                }
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

void visit_generationmodule_GenerationCapabilityRatings(const set_t<generationmodule::GenerationCapabilityRatings>& setter, const get_t<generationmodule::GenerationCapabilityRatings>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityRatings", commonmodule::SourceCapabilityRatings::descriptor()))
    {
        visit_commonmodule_SourceCapabilityRatings(
            [setter](generationmodule::GenerationCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityratings();
            },
            [getter](const generationmodule::GenerationCapabilityProfile& profile) -> commonmodule::SourceCapabilityRatings const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_sourcecapabilityratings() ? &value->sourcecapabilityratings() : nullptr;
                }
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

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,float>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityProfile,std::string>::build(
            [setter](generationmodule::GenerationCapabilityProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationCapabilityProfile& profile, const handler_t<std::string>& handler)
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
