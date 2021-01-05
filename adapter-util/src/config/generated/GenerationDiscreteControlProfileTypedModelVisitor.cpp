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
using set_t = setter_t<generationmodule::GenerationDiscreteControlProfile, V>;

template <class V>
using get_t = getter_t<generationmodule::GenerationDiscreteControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_ReactivePowerControlKind(const set_t<commonmodule::Optional_ReactivePowerControlKind>& setter, const get_t<commonmodule::Optional_ReactivePowerControlKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_RealPowerControlKind(const set_t<commonmodule::Optional_RealPowerControlKind>& setter, const get_t<commonmodule::Optional_RealPowerControlKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_generationmodule_DroopParameter(const set_t<generationmodule::DroopParameter>& setter, const get_t<generationmodule::DroopParameter>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_generationmodule_GenerationDiscreteControl(const set_t<generationmodule::GenerationDiscreteControl>& setter, const get_t<generationmodule::GenerationDiscreteControl>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_generationmodule_ReactivePowerControl(const set_t<generationmodule::ReactivePowerControl>& setter, const get_t<generationmodule::ReactivePowerControl>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_generationmodule_RealPowerControl(const set_t<generationmodule::RealPowerControl>& setter, const get_t<generationmodule::RealPowerControl>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](generationmodule::GenerationDiscreteControlProfile& profile) { return &profile; };
    const auto getter = [](const generationmodule::GenerationDiscreteControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("generatingUnit", generationmodule::GeneratingUnit::descriptor()))
    {
        visit_generationmodule_GeneratingUnit(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_generatingunit();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> generationmodule::GeneratingUnit const *
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

    if(visitor.start_message_field("generationDiscreteControl", generationmodule::GenerationDiscreteControl::descriptor()))
    {
        visit_generationmodule_GenerationDiscreteControl(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_generationdiscretecontrol();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> generationmodule::GenerationDiscreteControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_generationdiscretecontrol() ? &value->generationdiscretecontrol() : nullptr;
                }
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

void visit_commonmodule_ActivePower(const set_t<commonmodule::ActivePower>& setter, const get_t<commonmodule::ActivePower>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::Optional_UnitSymbolKind const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_value();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,std::string>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

    if(visitor.start_message_field("reset", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<generationmodule::GenerationDiscreteControlProfile,commonmodule::Timestamp>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_ReactivePowerControlKind(const set_t<commonmodule::Optional_ReactivePowerControlKind>& setter, const get_t<commonmodule::Optional_ReactivePowerControlKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,int>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::ReactivePowerControlKind>(value)); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::ReactivePowerControlKind_descriptor()
    );
}

void visit_commonmodule_Optional_RealPowerControlKind(const set_t<commonmodule::Optional_RealPowerControlKind>& setter, const get_t<commonmodule::Optional_RealPowerControlKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,int>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::RealPowerControlKind>(value)); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::RealPowerControlKind_descriptor()
    );
}

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,int>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,int>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_generationmodule_DroopParameter(const set_t<generationmodule::DroopParameter>& setter, const get_t<generationmodule::DroopParameter>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("slope", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_slope();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_slope() ? &value->slope() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("unloadedOffset", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_unloadedoffset();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_unloadedoffset() ? &value->unloadedoffset() : nullptr;
                }
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

void visit_generationmodule_GeneratingUnit(const set_t<generationmodule::GeneratingUnit>& setter, const get_t<generationmodule::GeneratingUnit>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::ConductingEquipment const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_maxoperatingp();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::ActivePower const *
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

void visit_generationmodule_GenerationDiscreteControl(const set_t<generationmodule::GenerationDiscreteControl>& setter, const get_t<generationmodule::GenerationDiscreteControl>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("ReactivePowerControl", generationmodule::ReactivePowerControl::descriptor()))
    {
        visit_generationmodule_ReactivePowerControl(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepowercontrol();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> generationmodule::ReactivePowerControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reactivepowercontrol() ? &value->reactivepowercontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("RealPowerControl", generationmodule::RealPowerControl::descriptor()))
    {
        visit_generationmodule_RealPowerControl(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_realpowercontrol();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> generationmodule::RealPowerControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_realpowercontrol() ? &value->realpowercontrol() : nullptr;
                }
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

void visit_generationmodule_ReactivePowerControl(const set_t<generationmodule::ReactivePowerControl>& setter, const get_t<generationmodule::ReactivePowerControl>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("droopSetpoint", generationmodule::DroopParameter::descriptor()))
    {
        visit_generationmodule_DroopParameter(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_droopsetpoint();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> generationmodule::DroopParameter const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_droopsetpoint() ? &value->droopsetpoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("powerFactorSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_powerfactorsetpoint();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_powerfactorsetpoint() ? &value->powerfactorsetpoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePowerControlMode", commonmodule::Optional_ReactivePowerControlKind::descriptor()))
    {
        visit_commonmodule_Optional_ReactivePowerControlKind(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepowercontrolmode();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::Optional_ReactivePowerControlKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reactivepowercontrolmode() ? &value->reactivepowercontrolmode() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reactivePowerSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepowersetpoint();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reactivepowersetpoint() ? &value->reactivepowersetpoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpoint();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagesetpoint() ? &value->voltagesetpoint() : nullptr;
                }
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

void visit_generationmodule_RealPowerControl(const set_t<generationmodule::RealPowerControl>& setter, const get_t<generationmodule::RealPowerControl>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("droopSetpoint", generationmodule::DroopParameter::descriptor()))
    {
        visit_generationmodule_DroopParameter(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_droopsetpoint();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> generationmodule::DroopParameter const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_droopsetpoint() ? &value->droopsetpoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("isochronousSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_isochronoussetpoint();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_isochronoussetpoint() ? &value->isochronoussetpoint() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPowerControlMode", commonmodule::Optional_RealPowerControlKind::descriptor()))
    {
        visit_commonmodule_Optional_RealPowerControlKind(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_realpowercontrolmode();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> commonmodule::Optional_RealPowerControlKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_realpowercontrolmode() ? &value->realpowercontrolmode() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPowerSetpoint", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_realpowersetpoint();
            },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_realpowersetpoint() ? &value->realpowersetpoint() : nullptr;
                }
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,bool>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,float>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<generationmodule::GenerationDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<generationmodule::GenerationDiscreteControlProfile,std::string>::build(
            [setter](generationmodule::GenerationDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const generationmodule::GenerationDiscreteControlProfile& profile, const handler_t<std::string>& handler)
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
