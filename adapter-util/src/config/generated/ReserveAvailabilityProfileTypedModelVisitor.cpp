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
using set_t = setter_t<reservemodule::ReserveAvailabilityProfile, V>;

template <class V>
using get_t = getter_t<reservemodule::ReserveAvailabilityProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_PMG(const set_t<commonmodule::PMG>& setter, const get_t<commonmodule::PMG>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_reservemodule_AllocatedMargin(const set_t<reservemodule::AllocatedMargin>& setter, const get_t<reservemodule::AllocatedMargin>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_reservemodule_ReserveAvailability(const set_t<reservemodule::ReserveAvailability>& setter, const get_t<reservemodule::ReserveAvailability>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

void visit_reservemodule_ReserveMargin(const set_t<reservemodule::ReserveMargin>& setter, const get_t<reservemodule::ReserveMargin>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](reservemodule::ReserveAvailabilityProfile& profile) { return &profile; };
    const auto getter = [](const reservemodule::ReserveAvailabilityProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("allocatedMargin", reservemodule::AllocatedMargin::descriptor()))
    {
        visit_reservemodule_AllocatedMargin(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_allocatedmargin();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> reservemodule::AllocatedMargin const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_allocatedmargin() ? &value->allocatedmargin() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("requesterCircuitSegmentService", commonmodule::ApplicationSystem::descriptor()))
    {
        visit_commonmodule_ApplicationSystem(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_requestercircuitsegmentservice();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::ApplicationSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_requestercircuitsegmentservice() ? &value->requestercircuitsegmentservice() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reserveAvailability", reservemodule::ReserveAvailability::descriptor()))
    {
        visit_reservemodule_ReserveAvailability(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_reserveavailability();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> reservemodule::ReserveAvailability const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reserveavailability() ? &value->reserveavailability() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("responderCircuitSegmentService", commonmodule::ApplicationSystem::descriptor()))
    {
        visit_commonmodule_ApplicationSystem(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_respondercircuitsegmentservice();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::ApplicationSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_respondercircuitsegmentservice() ? &value->respondercircuitsegmentservice() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("tiePoint", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_tiepoint();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::ConductingEquipment const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tiepoint() ? &value->tiepoint() : nullptr;
                }
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

void visit_commonmodule_ApplicationSystem(const set_t<commonmodule::ApplicationSystem>& setter, const get_t<commonmodule::ApplicationSystem>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<reservemodule::ReserveAvailabilityProfile,std::string>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<reservemodule::ReserveAvailabilityProfile,std::string>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    visitor.handle(
        "mag",
        AccessorBuilder<reservemodule::ReserveAvailabilityProfile,double>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile, const double& value) { setter(profile)->set_mag(value); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mag());
                return true;
            }
        )
    );

    visitor.handle(
        "q",
        MessageAccessorBuilder<reservemodule::ReserveAvailabilityProfile,commonmodule::Quality>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<reservemodule::ReserveAvailabilityProfile,commonmodule::Timestamp>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
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
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<reservemodule::ReserveAvailabilityProfile,commonmodule::Timestamp>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reservemodule::ReserveAvailabilityProfile,int>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PMG(const set_t<commonmodule::PMG>& setter, const get_t<commonmodule::PMG>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("net", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_net();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_net() ? &value->net() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsa() ? &value->phsa() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsb() ? &value->phsb() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsc() ? &value->phsc() : nullptr;
                }
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<reservemodule::ReserveAvailabilityProfile,int>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<int>& handler)
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reservemodule::ReserveAvailabilityProfile,std::string>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_reservemodule_AllocatedMargin(const set_t<reservemodule::AllocatedMargin>& setter, const get_t<reservemodule::AllocatedMargin>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    visitor.handle(
        "requestID",
        AccessorBuilder<reservemodule::ReserveAvailabilityProfile,std::string>::build(
            [setter](reservemodule::ReserveAvailabilityProfile& profile, const std::string& value) { setter(profile)->set_requestid(value); },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->requestid());
                return true;
            }
        )
    );

    if(visitor.start_message_field("allocatedMargin", reservemodule::ReserveMargin::descriptor()))
    {
        visit_reservemodule_ReserveMargin(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_allocatedmargin();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> reservemodule::ReserveMargin const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_allocatedmargin() ? &value->allocatedmargin() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("allocatedStandbyMargin", reservemodule::ReserveMargin::descriptor()))
    {
        visit_reservemodule_ReserveMargin(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_allocatedstandbymargin();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> reservemodule::ReserveMargin const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_allocatedstandbymargin() ? &value->allocatedstandbymargin() : nullptr;
                }
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

void visit_reservemodule_ReserveAvailability(const set_t<reservemodule::ReserveAvailability>& setter, const get_t<reservemodule::ReserveAvailability>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("incrementalMargin", reservemodule::ReserveMargin::descriptor()))
    {
        visit_reservemodule_ReserveMargin(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_incrementalmargin();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> reservemodule::ReserveMargin const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_incrementalmargin() ? &value->incrementalmargin() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("margin", reservemodule::ReserveMargin::descriptor()))
    {
        visit_reservemodule_ReserveMargin(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_margin();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> reservemodule::ReserveMargin const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_margin() ? &value->margin() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("standbyMargin", reservemodule::ReserveMargin::descriptor()))
    {
        visit_reservemodule_ReserveMargin(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_standbymargin();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> reservemodule::ReserveMargin const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_standbymargin() ? &value->standbymargin() : nullptr;
                }
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

void visit_reservemodule_ReserveMargin(const set_t<reservemodule::ReserveMargin>& setter, const get_t<reservemodule::ReserveMargin>& getter, ITypedModelVisitor<reservemodule::ReserveAvailabilityProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("A", commonmodule::PMG::descriptor()))
    {
        visit_commonmodule_PMG(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_a();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::PMG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_a() ? &value->a() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VA", commonmodule::PMG::descriptor()))
    {
        visit_commonmodule_PMG(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_va();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::PMG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_va() ? &value->va() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VAr", commonmodule::PMG::descriptor()))
    {
        visit_commonmodule_PMG(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_var();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::PMG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_var() ? &value->var() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("W", commonmodule::PMG::descriptor()))
    {
        visit_commonmodule_PMG(
            [setter](reservemodule::ReserveAvailabilityProfile& profile)
            {
                return setter(profile)->mutable_w();
            },
            [getter](const reservemodule::ReserveAvailabilityProfile& profile) -> commonmodule::PMG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_w() ? &value->w() : nullptr;
                }
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
