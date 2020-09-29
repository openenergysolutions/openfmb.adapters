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
using set_t = setter_t<resourcemodule::ResourceDiscreteControlProfile, V>;

template <class V>
using get_t = getter_t<resourcemodule::ResourceDiscreteControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlINC(const set_t<commonmodule::ControlINC>& setter, const get_t<commonmodule::ControlINC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_commonmodule_VSC(const set_t<commonmodule::VSC>& setter, const get_t<commonmodule::VSC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_resourcemodule_AnalogControlGGIO(const set_t<resourcemodule::AnalogControlGGIO>& setter, const get_t<resourcemodule::AnalogControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_resourcemodule_BooleanControlGGIO(const set_t<resourcemodule::BooleanControlGGIO>& setter, const get_t<resourcemodule::BooleanControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_resourcemodule_IntegerControlGGIO(const set_t<resourcemodule::IntegerControlGGIO>& setter, const get_t<resourcemodule::IntegerControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_resourcemodule_ResourceDiscreteControl(const set_t<resourcemodule::ResourceDiscreteControl>& setter, const get_t<resourcemodule::ResourceDiscreteControl>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

void visit_resourcemodule_StringControlGGIO(const set_t<resourcemodule::StringControlGGIO>& setter, const get_t<resourcemodule::StringControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](resourcemodule::ResourceDiscreteControlProfile& profile) { return &profile; };
    const auto getter = [](const resourcemodule::ResourceDiscreteControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("resourceDiscreteControl", resourcemodule::ResourceDiscreteControl::descriptor()))
    {
        visit_resourcemodule_ResourceDiscreteControl(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_resourcediscretecontrol();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> resourcemodule::ResourceDiscreteControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_resourcediscretecontrol() ? &value->resourcediscretecontrol() : nullptr;
                }
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,std::string>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlAPC(const set_t<commonmodule::ControlAPC>& setter, const get_t<commonmodule::ControlAPC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,double>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const double& value) { setter(profile)->set_ctlval(value); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<double>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlINC(const set_t<commonmodule::ControlINC>& setter, const get_t<commonmodule::ControlINC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,int32_t>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const int32_t& value) { setter(profile)->set_ctlval(value); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlSPC(const set_t<commonmodule::ControlSPC>& setter, const get_t<commonmodule::ControlSPC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,bool>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,commonmodule::Timestamp>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,int>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::PhaseCodeKind>(value)); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_VSC(const set_t<commonmodule::VSC>& setter, const get_t<commonmodule::VSC>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,std::string>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_ctlval(value); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,bool>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<resourcemodule::ResourceDiscreteControlProfile,std::string>::build(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_resourcemodule_AnalogControlGGIO(const set_t<resourcemodule::AnalogControlGGIO>& setter, const get_t<resourcemodule::AnalogControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("AnOut", commonmodule::ControlAPC::descriptor()))
    {
        visit_commonmodule_ControlAPC(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_anout();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::ControlAPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_anout() ? &value->anout() : nullptr;
                }
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
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

void visit_resourcemodule_BooleanControlGGIO(const set_t<resourcemodule::BooleanControlGGIO>& setter, const get_t<resourcemodule::BooleanControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
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

    if(visitor.start_message_field("SPCSO", commonmodule::ControlSPC::descriptor()))
    {
        visit_commonmodule_ControlSPC(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_spcso();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::ControlSPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_spcso() ? &value->spcso() : nullptr;
                }
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

void visit_resourcemodule_IntegerControlGGIO(const set_t<resourcemodule::IntegerControlGGIO>& setter, const get_t<resourcemodule::IntegerControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("ISCSO", commonmodule::ControlINC::descriptor()))
    {
        visit_commonmodule_ControlINC(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_iscso();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::ControlINC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_iscso() ? &value->iscso() : nullptr;
                }
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
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

void visit_resourcemodule_ResourceDiscreteControl(const set_t<resourcemodule::ResourceDiscreteControl>& setter, const get_t<resourcemodule::ResourceDiscreteControl>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("check", commonmodule::CheckConditions::descriptor()))
    {
        visit_commonmodule_CheckConditions(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::CheckConditions const *
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

    {
        const auto count = visitor.start_repeated_message_field("analogcontrolggio", resourcemodule::AnalogControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_analogcontrolggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceDiscreteControlProfile& profile) -> resourcemodule::AnalogControlGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->analogcontrolggio_size()) ? &value->analogcontrolggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_resourcemodule_AnalogControlGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("booleancontrolggio", resourcemodule::BooleanControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_booleancontrolggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceDiscreteControlProfile& profile) -> resourcemodule::BooleanControlGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->booleancontrolggio_size()) ? &value->booleancontrolggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_resourcemodule_BooleanControlGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("integercontrolggio", resourcemodule::IntegerControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_integercontrolggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceDiscreteControlProfile& profile) -> resourcemodule::IntegerControlGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->integercontrolggio_size()) ? &value->integercontrolggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_resourcemodule_IntegerControlGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }

    {
        const auto count = visitor.start_repeated_message_field("stringcontrolggio", resourcemodule::StringControlGGIO::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_stringcontrolggio();
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
            const auto get = [getter, i](const resourcemodule::ResourceDiscreteControlProfile& profile) -> resourcemodule::StringControlGGIO const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->stringcontrolggio_size()) ? &value->stringcontrolggio(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_resourcemodule_StringControlGGIO(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_resourcemodule_StringControlGGIO(const set_t<resourcemodule::StringControlGGIO>& setter, const get_t<resourcemodule::StringControlGGIO>& getter, ITypedModelVisitor<resourcemodule::ResourceDiscreteControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_phase();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
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

    if(visitor.start_message_field("StrOut", commonmodule::VSC::descriptor()))
    {
        visit_commonmodule_VSC(
            [setter](resourcemodule::ResourceDiscreteControlProfile& profile)
            {
                return setter(profile)->mutable_strout();
            },
            [getter](const resourcemodule::ResourceDiscreteControlProfile& profile) -> commonmodule::VSC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_strout() ? &value->strout() : nullptr;
                }
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
