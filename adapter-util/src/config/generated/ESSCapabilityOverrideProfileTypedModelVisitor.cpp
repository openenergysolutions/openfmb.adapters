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
using set_t = setter_t<essmodule::ESSCapabilityOverrideProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSCapabilityOverrideProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_essmodule_ESSCapabilityConfiguration(const set_t<essmodule::ESSCapabilityConfiguration>& setter, const get_t<essmodule::ESSCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_essmodule_ESSCapabilityOverride(const set_t<essmodule::ESSCapabilityOverride>& setter, const get_t<essmodule::ESSCapabilityOverride>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSCapabilityOverrideProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSCapabilityOverrideProfile& profile) { return &profile; };

    if(visitor.start_message_field("capabilityMessageInfo", commonmodule::CapabilityMessageInfo::descriptor()))
    {
        visit_commonmodule_CapabilityMessageInfo(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_capabilitymessageinfo();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::CapabilityMessageInfo const *
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

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ESS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ess() ? &value->ess() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essCapabilityOverride", essmodule::ESSCapabilityOverride::descriptor()))
    {
        visit_essmodule_ESSCapabilityOverride(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_esscapabilityoverride();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> essmodule::ESSCapabilityOverride const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscapabilityoverride() ? &value->esscapabilityoverride() : nullptr;
                }
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "setMag",
        AccessorBuilder<essmodule::ESSCapabilityOverrideProfile,double>::build(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile, const double& value) { setter(profile)->set_setmag(value); },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setmag());
                return true;
            }
        )
    );
}

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSCapabilityOverrideProfile,std::string>::build(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<essmodule::ESSCapabilityOverrideProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_model();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_sernum();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_swrev();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vendor();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_amax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vamax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_varmaxabs();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_varmaxinj();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vmax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vmin();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vnom();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wmax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wovrext();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wovrextpf();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wundext();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wundextpf();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
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

void visit_essmodule_ESSCapabilityConfiguration(const set_t<essmodule::ESSCapabilityConfiguration>& setter, const get_t<essmodule::ESSCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityConfiguration", commonmodule::SourceCapabilityConfiguration::descriptor()))
    {
        visit_commonmodule_SourceCapabilityConfiguration(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityconfiguration();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::SourceCapabilityConfiguration const *
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

    if(visitor.start_message_field("VAChaRteMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vachartemax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vachartemax() ? &value->vachartemax() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VADisChaRteMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_vadischartemax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vadischartemax() ? &value->vadischartemax() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WChaRteMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wchartemax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wchartemax() ? &value->wchartemax() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WDisChaRteMax", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_wdischartemax();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wdischartemax() ? &value->wdischartemax() : nullptr;
                }
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

void visit_essmodule_ESSCapabilityOverride(const set_t<essmodule::ESSCapabilityOverride>& setter, const get_t<essmodule::ESSCapabilityOverride>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    if(visitor.start_message_field("nameplateValue", commonmodule::NameplateValue::descriptor()))
    {
        visit_commonmodule_NameplateValue(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_nameplatevalue();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> commonmodule::NameplateValue const *
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

    if(visitor.start_message_field("essCapabilityConfiguration", essmodule::ESSCapabilityConfiguration::descriptor()))
    {
        visit_essmodule_ESSCapabilityConfiguration(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile)
            {
                return setter(profile)->mutable_esscapabilityconfiguration();
            },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile) -> essmodule::ESSCapabilityConfiguration const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscapabilityconfiguration() ? &value->esscapabilityconfiguration() : nullptr;
                }
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityOverrideProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSCapabilityOverrideProfile,std::string>::build(
            [setter](essmodule::ESSCapabilityOverrideProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSCapabilityOverrideProfile& profile, const handler_t<std::string>& handler)
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
