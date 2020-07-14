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
using set_t = setter_t<reclosermodule::RecloserControlProfile, V>;

template <class V>
using get_t = getter_t<reclosermodule::RecloserControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_SwitchCSG(const set_t<commonmodule::SwitchCSG>& setter, const get_t<commonmodule::SwitchCSG>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_SwitchControlScheduleFSCH(const set_t<commonmodule::SwitchControlScheduleFSCH>& setter, const get_t<commonmodule::SwitchControlScheduleFSCH>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_commonmodule_SwitchPoint(const set_t<commonmodule::SwitchPoint>& setter, const get_t<commonmodule::SwitchPoint>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_reclosermodule_Recloser(const set_t<reclosermodule::Recloser>& setter, const get_t<reclosermodule::Recloser>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_reclosermodule_RecloserControl(const set_t<reclosermodule::RecloserControl>& setter, const get_t<reclosermodule::RecloserControl>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit_reclosermodule_RecloserControlFSCC(const set_t<reclosermodule::RecloserControlFSCC>& setter, const get_t<reclosermodule::RecloserControlFSCC>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](reclosermodule::RecloserControlProfile& profile) { return &profile; };
    const auto getter = [](const reclosermodule::RecloserControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::IED const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ied() ? &value->ied() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloser", reclosermodule::Recloser::descriptor()))
    {
        visit_reclosermodule_Recloser(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_recloser();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> reclosermodule::Recloser const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_recloser() ? &value->recloser() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("recloserControl", reclosermodule::RecloserControl::descriptor()))
    {
        visit_reclosermodule_RecloserControl(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_reclosercontrol();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> reclosermodule::RecloserControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reclosercontrol() ? &value->reclosercontrol() : nullptr;
                }
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

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<reclosermodule::RecloserControlProfile,std::string>::build(
            [setter](reclosermodule::RecloserControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const reclosermodule::RecloserControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<reclosermodule::RecloserControlProfile,bool>::build(
            [setter](reclosermodule::RecloserControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const reclosermodule::RecloserControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->ctlval());
                return true;
            }
        )
    );
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<reclosermodule::RecloserControlProfile,commonmodule::Timestamp>::build(
            [setter](reclosermodule::RecloserControlProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const reclosermodule::RecloserControlProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_SwitchCSG(const set_t<commonmodule::SwitchCSG>& setter, const get_t<commonmodule::SwitchCSG>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::SwitchPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](reclosermodule::RecloserControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_crvpts();
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
            const auto get = [getter, i](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::SwitchPoint const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->crvpts_size()) ? &value->crvpts(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_SwitchPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_repeated_message_field();
    }
}

void visit_commonmodule_SwitchControlScheduleFSCH(const set_t<commonmodule::SwitchControlScheduleFSCH>& setter, const get_t<commonmodule::SwitchControlScheduleFSCH>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", commonmodule::SwitchCSG::descriptor()))
    {
        visit_commonmodule_SwitchCSG(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::SwitchCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valdcsg() ? &value->valdcsg() : nullptr;
                }
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

void visit_commonmodule_SwitchPoint(const set_t<commonmodule::SwitchPoint>& setter, const get_t<commonmodule::SwitchPoint>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("Pos", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_pos();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pos() ? &value->pos() : nullptr;
                }
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
        "startTime",
        MessageAccessorBuilder<reclosermodule::RecloserControlProfile,commonmodule::ControlTimestamp>::build(
            [setter](reclosermodule::RecloserControlProfile& profile) { return setter(profile)->mutable_starttime(); },
            [getter](const reclosermodule::RecloserControlProfile& profile, const handler_t<commonmodule::ControlTimestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_starttime()) return false;
                handler(parent->starttime());
                return true;
            }
        )
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reclosermodule::RecloserControlProfile,bool>::build(
            [setter](reclosermodule::RecloserControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const reclosermodule::RecloserControlProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<reclosermodule::RecloserControlProfile,std::string>::build(
            [setter](reclosermodule::RecloserControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const reclosermodule::RecloserControlProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_reclosermodule_Recloser(const set_t<reclosermodule::Recloser>& setter, const get_t<reclosermodule::Recloser>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

    if(visitor.start_message_field("normalOpen", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_normalopen();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_normalopen() ? &value->normalopen() : nullptr;
                }
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

void visit_reclosermodule_RecloserControl(const set_t<reclosermodule::RecloserControl>& setter, const get_t<reclosermodule::RecloserControl>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("recloserControlFSCC", reclosermodule::RecloserControlFSCC::descriptor()))
    {
        visit_reclosermodule_RecloserControlFSCC(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_reclosercontrolfscc();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> reclosermodule::RecloserControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reclosercontrolfscc() ? &value->reclosercontrolfscc() : nullptr;
                }
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

void visit_reclosermodule_RecloserControlFSCC(const set_t<reclosermodule::RecloserControlFSCC>& setter, const get_t<reclosermodule::RecloserControlFSCC>& getter, ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    if(visitor.start_message_field("switchControlScheduleFSCH", commonmodule::SwitchControlScheduleFSCH::descriptor()))
    {
        visit_commonmodule_SwitchControlScheduleFSCH(
            [setter](reclosermodule::RecloserControlProfile& profile)
            {
                return setter(profile)->mutable_switchcontrolschedulefsch();
            },
            [getter](const reclosermodule::RecloserControlProfile& profile) -> commonmodule::SwitchControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_switchcontrolschedulefsch() ? &value->switchcontrolschedulefsch() : nullptr;
                }
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
