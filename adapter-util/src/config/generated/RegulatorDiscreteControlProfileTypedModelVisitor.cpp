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
using set_t = setter_t<regulatormodule::RegulatorDiscreteControlProfile, V>;

template <class V>
using get_t = getter_t<regulatormodule::RegulatorDiscreteControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_AnalogueValueCtl(const set_t<commonmodule::AnalogueValueCtl>& setter, const get_t<commonmodule::AnalogueValueCtl>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlING(const set_t<commonmodule::ControlING>& setter, const get_t<commonmodule::ControlING>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlISC(const set_t<commonmodule::ControlISC>& setter, const get_t<commonmodule::ControlISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_PhaseISC(const set_t<commonmodule::PhaseISC>& setter, const get_t<commonmodule::PhaseISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_regulatormodule_RegulatorControlATCC(const set_t<regulatormodule::RegulatorControlATCC>& setter, const get_t<regulatormodule::RegulatorControlATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_regulatormodule_RegulatorDiscreteControl(const set_t<regulatormodule::RegulatorDiscreteControl>& setter, const get_t<regulatormodule::RegulatorDiscreteControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](regulatormodule::RegulatorDiscreteControlProfile& profile) { return &profile; };
    const auto getter = [](const regulatormodule::RegulatorDiscreteControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("regulatorDiscreteControl", regulatormodule::RegulatorDiscreteControl::descriptor()))
    {
        visit_regulatormodule_RegulatorDiscreteControl(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_regulatordiscretecontrol();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> regulatormodule::RegulatorDiscreteControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatordiscretecontrol() ? &value->regulatordiscretecontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("regulatorSystem", regulatormodule::RegulatorSystem::descriptor()))
    {
        visit_regulatormodule_RegulatorSystem(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_regulatorsystem();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> regulatormodule::RegulatorSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorsystem() ? &value->regulatorsystem() : nullptr;
                }
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

void visit_commonmodule_ASG(const set_t<commonmodule::ASG>& setter, const get_t<commonmodule::ASG>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("setMag", commonmodule::AnalogueValueCtl::descriptor()))
    {
        visit_commonmodule_AnalogueValueCtl(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_setmag();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::AnalogueValueCtl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_setmag() ? &value->setmag() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_AnalogueValueCtl(const set_t<commonmodule::AnalogueValueCtl>& setter, const get_t<commonmodule::AnalogueValueCtl>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,std::string>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("ctlVal", commonmodule::AnalogueValueCtl::descriptor()))
    {
        visit_commonmodule_AnalogueValueCtl(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ctlval();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::AnalogueValueCtl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ctlval() ? &value->ctlval() : nullptr;
                }
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

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,bool>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlING(const set_t<commonmodule::ControlING>& setter, const get_t<commonmodule::ControlING>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const int32_t& value) { setter(profile)->set_setval(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setval());
                return true;
            }
        )
    );

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_ControlISC(const set_t<commonmodule::ControlISC>& setter, const get_t<commonmodule::ControlISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const int32_t& value) { setter(profile)->set_ctlval(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,bool>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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
}

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,commonmodule::Timestamp>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,int>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        ),
        commonmodule::StateKind_descriptor()
    );
}

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,int>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PhaseAPC(const set_t<commonmodule::PhaseAPC>& setter, const get_t<commonmodule::PhaseAPC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phs3() ? &value->phs3() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlAPC const *
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

    if(visitor.start_message_field("phsB", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlAPC const *
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

    if(visitor.start_message_field("phsC", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlAPC const *
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

void visit_commonmodule_PhaseISC(const set_t<commonmodule::PhaseISC>& setter, const get_t<commonmodule::PhaseISC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("phs3", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phs3();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlISC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phs3() ? &value->phs3() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlISC const *
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

    if(visitor.start_message_field("phsB", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlISC const *
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

    if(visitor.start_message_field("phsC", commonmodule::ControlISC::descriptor()))
    {
        visit_commonmodule_ControlISC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlISC const *
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

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,int>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,bool>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,float>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,int32_t>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<regulatormodule::RegulatorDiscreteControlProfile,std::string>::build(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_regulatormodule_RegulatorControlATCC(const set_t<regulatormodule::RegulatorControlATCC>& setter, const get_t<regulatormodule::RegulatorControlATCC>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforcontrol() ? &value->logicalnodeforcontrol() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BndCtr", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_bndctr();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_bndctr() ? &value->bndctr() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BndWid", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_bndwid();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_bndwid() ? &value->bndwid() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("CtlDlTmms", commonmodule::ControlING::descriptor()))
    {
        visit_commonmodule_ControlING(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ctldltmms();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlING const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ctldltmms() ? &value->ctldltmms() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCR", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ldcr();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ldcr() ? &value->ldcr() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("LDCX", commonmodule::ASG::descriptor()))
    {
        visit_commonmodule_ASG(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ldcx();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ASG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ldcx() ? &value->ldcx() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("ParOp", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_parop();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_parop() ? &value->parop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("rampRates", commonmodule::RampRate::descriptor()))
    {
        visit_commonmodule_RampRate(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("TapPos", commonmodule::PhaseISC::descriptor()))
    {
        visit_commonmodule_PhaseISC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_tappos();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::PhaseISC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tappos() ? &value->tappos() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VolSpt", commonmodule::PhaseAPC::descriptor()))
    {
        visit_commonmodule_PhaseAPC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_volspt();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::PhaseAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_volspt() ? &value->volspt() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("voltageSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_voltagesetpointenabled() ? &value->voltagesetpointenabled() : nullptr;
                }
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

void visit_regulatormodule_RegulatorDiscreteControl(const set_t<regulatormodule::RegulatorDiscreteControl>& setter, const get_t<regulatormodule::RegulatorDiscreteControl>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("regulatorControlATCC", regulatormodule::RegulatorControlATCC::descriptor()))
    {
        visit_regulatormodule_RegulatorControlATCC(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_regulatorcontrolatcc();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> regulatormodule::RegulatorControlATCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_regulatorcontrolatcc() ? &value->regulatorcontrolatcc() : nullptr;
                }
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

void visit_regulatormodule_RegulatorSystem(const set_t<regulatormodule::RegulatorSystem>& setter, const get_t<regulatormodule::RegulatorSystem>& getter, ITypedModelVisitor<regulatormodule::RegulatorDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](regulatormodule::RegulatorDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const regulatormodule::RegulatorDiscreteControlProfile& profile) -> commonmodule::ConductingEquipment const *
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
