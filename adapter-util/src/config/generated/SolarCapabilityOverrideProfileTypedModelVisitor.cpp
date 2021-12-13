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
using set_t = setter_t<solarmodule::SolarCapabilityOverrideProfile, V>;

template <class V>
using get_t = getter_t<solarmodule::SolarCapabilityOverrideProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_commonmodule_CapabilityOverrideMessageInfo(const set_t<commonmodule::CapabilityOverrideMessageInfo>& setter, const get_t<commonmodule::CapabilityOverrideMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_solarmodule_SolarCapabilityConfiguration(const set_t<solarmodule::SolarCapabilityConfiguration>& setter, const get_t<solarmodule::SolarCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_solarmodule_SolarCapabilityOverride(const set_t<solarmodule::SolarCapabilityOverride>& setter, const get_t<solarmodule::SolarCapabilityOverride>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](solarmodule::SolarCapabilityOverrideProfile& profile) { return &profile; };
    const auto getter = [](const solarmodule::SolarCapabilityOverrideProfile& profile) { return &profile; };

    if(visitor.start_message_field("capabilityOverrideMessageInfo", commonmodule::CapabilityOverrideMessageInfo::descriptor()))
    {
        visit_commonmodule_CapabilityOverrideMessageInfo(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_capabilityoverridemessageinfo();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::CapabilityOverrideMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capabilityoverridemessageinfo() ? &value->capabilityoverridemessageinfo() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("solarCapabilityOverride", solarmodule::SolarCapabilityOverride::descriptor()))
    {
        visit_solarmodule_SolarCapabilityOverride(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_solarcapabilityoverride();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> solarmodule::SolarCapabilityOverride const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarcapabilityoverride() ? &value->solarcapabilityoverride() : nullptr;
                }
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_solarinverter();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> solarmodule::SolarInverter const *
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "setMag",
        AccessorBuilder<solarmodule::SolarCapabilityOverrideProfile,double>::build(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile, const double& value) { setter(profile)->set_setmag(value); },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setmag());
                return true;
            }
        )
    );
}

void visit_commonmodule_CapabilityOverrideMessageInfo(const set_t<commonmodule::CapabilityOverrideMessageInfo>& setter, const get_t<commonmodule::CapabilityOverrideMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<solarmodule::SolarCapabilityOverrideProfile,std::string>::build(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<solarmodule::SolarCapabilityOverrideProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_amax();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vamax();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_varmaxabs();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_varmaxinj();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vmax();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vmin();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vnom();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wmax();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wovrext();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wovrextpf();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wundext();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wundextpf();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarCapabilityOverrideProfile,std::string>::build(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_solarmodule_SolarCapabilityConfiguration(const set_t<solarmodule::SolarCapabilityConfiguration>& setter, const get_t<solarmodule::SolarCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityConfiguration", commonmodule::SourceCapabilityConfiguration::descriptor()))
    {
        visit_commonmodule_SourceCapabilityConfiguration(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityconfiguration();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::SourceCapabilityConfiguration const *
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

void visit_solarmodule_SolarCapabilityOverride(const set_t<solarmodule::SolarCapabilityOverride>& setter, const get_t<solarmodule::SolarCapabilityOverride>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("solarCapabilityConfiguration", solarmodule::SolarCapabilityConfiguration::descriptor()))
    {
        visit_solarmodule_SolarCapabilityConfiguration(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_solarcapabilityconfiguration();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> solarmodule::SolarCapabilityConfiguration const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarcapabilityconfiguration() ? &value->solarcapabilityconfiguration() : nullptr;
                }
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

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](solarmodule::SolarCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const solarmodule::SolarCapabilityOverrideProfile& profile) -> commonmodule::ConductingEquipment const *
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
