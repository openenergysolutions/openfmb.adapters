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
using set_t = setter_t<generationmodule::GenerationCapabilityOverrideProfile, V>;

template <class V>
using get_t = getter_t<generationmodule::GenerationCapabilityOverrideProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_generationmodule_GenerationCapabilityConfiguration(const set_t<generationmodule::GenerationCapabilityConfiguration>& setter, const get_t<generationmodule::GenerationCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_generationmodule_GenerationCapabilityOverride(const set_t<generationmodule::GenerationCapabilityOverride>& setter, const get_t<generationmodule::GenerationCapabilityOverride>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](generationmodule::GenerationCapabilityOverrideProfile& profile) { return &profile; };
    const auto getter = [](const generationmodule::GenerationCapabilityOverrideProfile& profile) { return &profile; };

    if(visitor.start_message_field("capabilityMessageInfo", commonmodule::CapabilityMessageInfo::descriptor()))
    {
        visit_commonmodule_CapabilityMessageInfo(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_capabilitymessageinfo();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::CapabilityMessageInfo const *
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

    if(visitor.start_message_field("generationCapabilityOverride", generationmodule::GenerationCapabilityOverride::descriptor()))
    {
        visit_generationmodule_GenerationCapabilityOverride(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_generationcapabilityoverride();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> generationmodule::GenerationCapabilityOverride const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationcapabilityoverride() ? &value->generationcapabilityoverride() : nullptr;
                }
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_generatingunit();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> generationmodule::GeneratingUnit const *
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "setMag",
        AccessorBuilder<generationmodule::GenerationCapabilityOverrideProfile,double>::build(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile, const double& value) { setter(profile)->set_setmag(value); },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setmag());
                return true;
            }
        )
    );
}

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::Optional_UnitSymbolKind const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_value();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<generationmodule::GenerationCapabilityOverrideProfile,std::string>::build(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<generationmodule::GenerationCapabilityOverrideProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityOverrideProfile,int>::build(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityOverrideProfile,int>::build(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_amax();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vamax();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_varmaxabs();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_varmaxinj();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vmax();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vmin();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vnom();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wmax();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wovrext();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wovrextpf();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wundext();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wundextpf();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ConductingEquipment const *
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
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_maxoperatingp();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::ActivePower const *
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

void visit_generationmodule_GenerationCapabilityConfiguration(const set_t<generationmodule::GenerationCapabilityConfiguration>& setter, const get_t<generationmodule::GenerationCapabilityConfiguration>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityConfiguration", commonmodule::SourceCapabilityConfiguration::descriptor()))
    {
        visit_commonmodule_SourceCapabilityConfiguration(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityconfiguration();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::SourceCapabilityConfiguration const *
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

void visit_generationmodule_GenerationCapabilityOverride(const set_t<generationmodule::GenerationCapabilityOverride>& setter, const get_t<generationmodule::GenerationCapabilityOverride>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("generationCapabilityConfiguration", generationmodule::GenerationCapabilityConfiguration::descriptor()))
    {
        visit_generationmodule_GenerationCapabilityConfiguration(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_generationcapabilityconfiguration();
            },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile) -> generationmodule::GenerationCapabilityConfiguration const *
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

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityOverrideProfile,float>::build(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationCapabilityOverrideProfile,std::string>::build(
            [setter](generationmodule::GenerationCapabilityOverrideProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationCapabilityOverrideProfile& profile, const handler_t<std::string>& handler)
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
