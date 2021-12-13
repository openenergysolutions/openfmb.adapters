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
using set_t = setter_t<essmodule::ESSCapabilityProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSCapabilityProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_commonmodule_SourceCapabilityRatings(const set_t<commonmodule::SourceCapabilityRatings>& setter, const get_t<commonmodule::SourceCapabilityRatings>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_essmodule_ESSCapability(const set_t<essmodule::ESSCapability>& setter, const get_t<essmodule::ESSCapability>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_essmodule_ESSCapabilityConfiguration(const set_t<essmodule::ESSCapabilityConfiguration>& setter, const get_t<essmodule::ESSCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_essmodule_ESSCapabilityRatings(const set_t<essmodule::ESSCapabilityRatings>& setter, const get_t<essmodule::ESSCapabilityRatings>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSCapabilityProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSCapabilityProfile& profile) { return &profile; };

    if(visitor.start_message_field("capabilityMessageInfo", commonmodule::CapabilityMessageInfo::descriptor()))
    {
        visit_commonmodule_CapabilityMessageInfo(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_capabilitymessageinfo();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::CapabilityMessageInfo const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ESS const *
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

    if(visitor.start_message_field("essCapability", essmodule::ESSCapability::descriptor()))
    {
        visit_essmodule_ESSCapability(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_esscapability();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> essmodule::ESSCapability const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscapability() ? &value->esscapability() : nullptr;
                }
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    visitor.handle(
        "setMag",
        AccessorBuilder<essmodule::ESSCapabilityProfile,double>::build(
            [setter](essmodule::ESSCapabilityProfile& profile, const double& value) { setter(profile)->set_setmag(value); },
            [getter](const essmodule::ESSCapabilityProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setmag());
                return true;
            }
        )
    );
}

void visit_commonmodule_CapabilityMessageInfo(const set_t<commonmodule::CapabilityMessageInfo>& setter, const get_t<commonmodule::CapabilityMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSCapabilityProfile,std::string>::build(
            [setter](essmodule::ESSCapabilityProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSCapabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<essmodule::ESSCapabilityProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSCapabilityProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const essmodule::ESSCapabilityProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_NameplateValue(const set_t<commonmodule::NameplateValue>& setter, const get_t<commonmodule::NameplateValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_model();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sernum();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_swrev();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vendor();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_SourceCapabilityConfiguration(const set_t<commonmodule::SourceCapabilityConfiguration>& setter, const get_t<commonmodule::SourceCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_amax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vamax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxabs();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxinj();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmin();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vnom();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wmax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrext();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextpf();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundext();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextpf();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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

void visit_commonmodule_SourceCapabilityRatings(const set_t<commonmodule::SourceCapabilityRatings>& setter, const get_t<commonmodule::SourceCapabilityRatings>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::LogicalNode const *
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
        AccessorBuilder<essmodule::ESSCapabilityProfile,int>::build(
            [setter](essmodule::ESSCapabilityProfile& profile, const int& value) { setter(profile)->set_abnopcatrtg(static_cast<commonmodule::AbnOpCatKind>(value)); },
            [getter](const essmodule::ESSCapabilityProfile& profile, const handler_t<int>& handler)
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_amaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_freqnomrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
        AccessorBuilder<essmodule::ESSCapabilityProfile,int>::build(
            [setter](essmodule::ESSCapabilityProfile& profile, const int& value) { setter(profile)->set_noropcatrtg(static_cast<commonmodule::NorOpCatKind>(value)); },
            [getter](const essmodule::ESSCapabilityProfile& profile, const handler_t<int>& handler)
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_reactsusceptrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vamaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxabsrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_varmaxinjrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vmaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vminrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vnomrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wmaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wovrextrtgpf();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wundextrtgpf();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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

void visit_essmodule_ESSCapability(const set_t<essmodule::ESSCapability>& setter, const get_t<essmodule::ESSCapability>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("nameplateValue", commonmodule::NameplateValue::descriptor()))
    {
        visit_commonmodule_NameplateValue(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_nameplatevalue();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::NameplateValue const *
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

    if(visitor.start_message_field("essCapabilityRatings", essmodule::ESSCapabilityRatings::descriptor()))
    {
        visit_essmodule_ESSCapabilityRatings(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_esscapabilityratings();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> essmodule::ESSCapabilityRatings const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscapabilityratings() ? &value->esscapabilityratings() : nullptr;
                }
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_esscapabilityconfiguration();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> essmodule::ESSCapabilityConfiguration const *
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

void visit_essmodule_ESSCapabilityConfiguration(const set_t<essmodule::ESSCapabilityConfiguration>& setter, const get_t<essmodule::ESSCapabilityConfiguration>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityConfiguration", commonmodule::SourceCapabilityConfiguration::descriptor()))
    {
        visit_commonmodule_SourceCapabilityConfiguration(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityconfiguration();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::SourceCapabilityConfiguration const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vachartemax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vadischartemax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wchartemax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wdischartemax();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
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

void visit_essmodule_ESSCapabilityRatings(const set_t<essmodule::ESSCapabilityRatings>& setter, const get_t<essmodule::ESSCapabilityRatings>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    if(visitor.start_message_field("sourceCapabilityRatings", commonmodule::SourceCapabilityRatings::descriptor()))
    {
        visit_commonmodule_SourceCapabilityRatings(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_sourcecapabilityratings();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::SourceCapabilityRatings const *
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

    if(visitor.start_message_field("VAChaRteMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vachartemaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vachartemaxrtg() ? &value->vachartemaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VADisChaRteMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_vadischartemaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_vadischartemaxrtg() ? &value->vadischartemaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WChaRteMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wchartemaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wchartemaxrtg() ? &value->wchartemaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WDisChaRteMaxRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_wdischartemaxrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_wdischartemaxrtg() ? &value->wdischartemaxrtg() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("WHRtg", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](essmodule::ESSCapabilityProfile& profile)
            {
                return setter(profile)->mutable_whrtg();
            },
            [getter](const essmodule::ESSCapabilityProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_whrtg() ? &value->whrtg() : nullptr;
                }
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSCapabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSCapabilityProfile,std::string>::build(
            [setter](essmodule::ESSCapabilityProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSCapabilityProfile& profile, const handler_t<std::string>& handler)
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
