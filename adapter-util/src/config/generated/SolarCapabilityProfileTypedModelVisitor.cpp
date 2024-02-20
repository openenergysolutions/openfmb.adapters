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
using set_t = setter_t<solarmodule::SolarCapabilityProfile, V>;

template <class V>
using get_t = getter_t<solarmodule::SolarCapabilityProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_commonmodule_SourceCapabilityRatings(const set_t<commonmodule::SourceCapabilityRatings>& setter, const get_t<commonmodule::SourceCapabilityRatings>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_solarmodule_SolarCapability(const set_t<solarmodule::SolarCapability>& setter, const get_t<solarmodule::SolarCapability>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_solarmodule_SolarCapabilityConfiguration(const set_t<solarmodule::SolarCapabilityConfiguration>& setter, const get_t<solarmodule::SolarCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_solarmodule_SolarCapabilityRatings(const set_t<solarmodule::SolarCapabilityRatings>& setter, const get_t<solarmodule::SolarCapabilityRatings>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](solarmodule::SolarCapabilityProfile& profile) { return &profile; };
    const auto getter = [](const solarmodule::SolarCapabilityProfile& profile) { return &profile; };

    if(visitor.start_message_field("capabilityMessageInfo", commonmodule::CapabilityMessageInfo::descriptor()))
    {
        visit_commonmodule_CapabilityMessageInfo(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_capabilitymessageinfo();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::CapabilityMessageInfo const *
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

    if(visitor.start_message_field("solarCapability", solarmodule::SolarCapability::descriptor()))
    {
        visit_solarmodule_SolarCapability(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_solarcapability();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> solarmodule::SolarCapability const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarcapability() ? &value->solarcapability() : nullptr;
                }
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_solarinverter();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> solarmodule::SolarInverter const *
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    visitor.handle(
        "setMag",
        AccessorBuilder<solarmodule::SolarCapabilityProfile,double>::build(
            [setter](solarmodule::SolarCapabilityProfile& profile, const double& value) { setter(profile)->set_setmag(value); },
            [getter](const solarmodule::SolarCapabilityProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setmag());
                return true;
            }
        )
    );
}

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<solarmodule::SolarCapabilityProfile,std::string>::build(
            [setter](solarmodule::SolarCapabilityProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const solarmodule::SolarCapabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<solarmodule::SolarCapabilityProfile,commonmodule::Timestamp>::build(
            [setter](solarmodule::SolarCapabilityProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const solarmodule::SolarCapabilityProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_model();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sernum();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_swrev();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vendor();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_amax();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vamax();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxabs();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxinj();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmax();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmin();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vnom();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wmax();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrext();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextpf();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundext();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextpf();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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

void visit_commonmodule_SourceCapabilityRatings(const set_t<commonmodule::SourceCapabilityRatings>& setter, const get_t<commonmodule::SourceCapabilityRatings>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::LogicalNode const *
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
        AccessorBuilder<solarmodule::SolarCapabilityProfile,int>::build(
            [setter](solarmodule::SolarCapabilityProfile& profile, const int& value) { setter(profile)->set_abnopcatrtg(static_cast<commonmodule::AbnOpCatKind>(value)); },
            [getter](const solarmodule::SolarCapabilityProfile& profile, const handler_t<int>& handler)
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_amaxrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_freqnomrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
        AccessorBuilder<solarmodule::SolarCapabilityProfile,int>::build(
            [setter](solarmodule::SolarCapabilityProfile& profile, const int& value) { setter(profile)->set_noropcatrtg(static_cast<commonmodule::NorOpCatKind>(value)); },
            [getter](const solarmodule::SolarCapabilityProfile& profile, const handler_t<int>& handler)
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_reactsusceptrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vamaxrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxabsrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxinjrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmaxrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vminrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vnomrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wmaxrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextrtgpf();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextrtg();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextrtgpf();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ASG const *
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarCapabilityProfile,std::string>::build(
            [setter](solarmodule::SolarCapabilityProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarCapabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_solarmodule_SolarCapability(const set_t<solarmodule::SolarCapability>& setter, const get_t<solarmodule::SolarCapability>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("nameplateValue", commonmodule::NameplateValue::descriptor()))
    {
        visit_commonmodule_NameplateValue(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_nameplatevalue();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::NameplateValue const *
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

    if(visitor.start_message_field("solarCapabilityConfiguration", solarmodule::SolarCapabilityConfiguration::descriptor()))
    {
        visit_solarmodule_SolarCapabilityConfiguration(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_solarcapabilityconfiguration();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> solarmodule::SolarCapabilityConfiguration const *
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

    if(visitor.start_message_field("solarCapabilityRatings", solarmodule::SolarCapabilityRatings::descriptor()))
    {
        visit_solarmodule_SolarCapabilityRatings(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_solarcapabilityratings();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> solarmodule::SolarCapabilityRatings const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarcapabilityratings() ? &value->solarcapabilityratings() : nullptr;
                }
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

void visit_solarmodule_SolarCapabilityConfiguration(const set_t<solarmodule::SolarCapabilityConfiguration>& setter, const get_t<solarmodule::SolarCapabilityConfiguration>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityConfiguration", commonmodule::SourceCapabilityConfiguration::descriptor()))
    {
        visit_commonmodule_SourceCapabilityConfiguration(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityconfiguration();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::SourceCapabilityConfiguration const *
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

void visit_solarmodule_SolarCapabilityRatings(const set_t<solarmodule::SolarCapabilityRatings>& setter, const get_t<solarmodule::SolarCapabilityRatings>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityRatings", commonmodule::SourceCapabilityRatings::descriptor()))
    {
        visit_commonmodule_SourceCapabilityRatings(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityratings();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::SourceCapabilityRatings const *
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

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](solarmodule::SolarCapabilityProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const solarmodule::SolarCapabilityProfile& profile) -> commonmodule::ConductingEquipment const *
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
