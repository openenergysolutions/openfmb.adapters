#include "adapter-api/config/generated/ESSControlProfileTypedModelVisitor.h"
#include "../AccessorImpl.h"

namespace adapter {

template <class V>
using set_t = setter_t<essmodule::ESSControlProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSControlProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlTimestamp(const set_t<commonmodule::ControlTimestamp>& setter, const get_t<commonmodule::ControlTimestamp>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ENG_ESSFunctionKind(const set_t<essmodule::ENG_ESSFunctionKind>& setter, const get_t<essmodule::ENG_ESSFunctionKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ENG_ESSFunctionParameter(const set_t<essmodule::ENG_ESSFunctionParameter>& setter, const get_t<essmodule::ENG_ESSFunctionParameter>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSCSG(const set_t<essmodule::ESSCSG>& setter, const get_t<essmodule::ESSCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSControl(const set_t<essmodule::ESSControl>& setter, const get_t<essmodule::ESSControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSControlScheduleFSCH(const set_t<essmodule::ESSControlScheduleFSCH>& setter, const get_t<essmodule::ESSControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_ESSPoint(const set_t<essmodule::ESSPoint>& setter, const get_t<essmodule::ESSPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_essmodule_EssControlFSCC(const set_t<essmodule::EssControlFSCC>& setter, const get_t<essmodule::EssControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSControlProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSControlProfile& profile) { return &profile; };

    if(visitor.start_message_field("controlMessageInfo", commonmodule::ControlMessageInfo::descriptor()))
    {
        visit_commonmodule_ControlMessageInfo(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_controlmessageinfo();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlMessageInfo const *
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

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ESS const *
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

    if(visitor.start_message_field("essControl", essmodule::ESSControl::descriptor()))
    {
        visit_essmodule_ESSControl(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_esscontrol();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ESSControl const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscontrol() ? &value->esscontrol() : nullptr;
                }
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IED const *
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
}

// ---- template definitions for child types ----

void visit_commonmodule_CheckConditions(const set_t<commonmodule::CheckConditions>& setter, const get_t<commonmodule::CheckConditions>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("interlockCheck", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_interlockcheck();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_synchrocheck();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSControlProfile,std::string>::build(
            [setter](essmodule::ESSControlProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlFSCC(const set_t<commonmodule::ControlFSCC>& setter, const get_t<commonmodule::ControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForControl", commonmodule::LogicalNodeForControl::descriptor()))
    {
        visit_commonmodule_LogicalNodeForControl(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforcontrol();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::LogicalNodeForControl const *
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

    {
        const auto count = visitor.start_repeated_message_field("controlschedulefsch", commonmodule::ControlScheduleFSCH::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_controlschedulefsch();
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlScheduleFSCH const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->controlschedulefsch_size()) ? &value->controlschedulefsch(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_commonmodule_ControlScheduleFSCH(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }
}

void visit_commonmodule_ControlMessageInfo(const set_t<commonmodule::ControlMessageInfo>& setter, const get_t<commonmodule::ControlMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_ControlScheduleFSCH(const set_t<commonmodule::ControlScheduleFSCH>& setter, const get_t<commonmodule::ControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("ValACSG", commonmodule::ScheduleCSG::descriptor()))
    {
        visit_commonmodule_ScheduleCSG(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_valacsg();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ScheduleCSG const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_valacsg() ? &value->valacsg() : nullptr;
                }
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

void visit_commonmodule_ControlTimestamp(const set_t<commonmodule::ControlTimestamp>& setter, const get_t<commonmodule::ControlTimestamp>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "fraction",
        AccessorBuilder<essmodule::ESSControlProfile,uint32_t>::build(
            [setter](essmodule::ESSControlProfile& profile, const uint32_t& value) { setter(profile)->set_fraction(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<uint32_t>& handler) { return false; }
        )
    );

    visitor.handle(
        "seconds",
        AccessorBuilder<essmodule::ESSControlProfile,uint64_t>::build(
            [setter](essmodule::ESSControlProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<uint64_t>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlValue(const set_t<commonmodule::ControlValue>& setter, const get_t<commonmodule::ControlValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_modblk();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::BoolValue const *
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
}

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::GridConnectModeKind_descriptor()
    );

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_setvalextension() ? &value->setvalextension() : nullptr;
                }
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

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForControl(const set_t<commonmodule::LogicalNodeForControl>& setter, const get_t<commonmodule::LogicalNodeForControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::LogicalNode const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_messagetimestamp();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::Timestamp const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_messagetimestamp() ? &value->messagetimestamp() : nullptr;
                }
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

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::StateKind_descriptor()
    );
}

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_ScheduleCSG(const set_t<commonmodule::ScheduleCSG>& setter, const get_t<commonmodule::ScheduleCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", commonmodule::SchedulePoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> commonmodule::SchedulePoint const*
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
            visit_commonmodule_SchedulePoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }

    if(visitor.start_message_field("xD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_xd();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_xd() ? &value->xd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("xDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_xdu();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_xdu() ? &value->xdu() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_yd();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_yd() ? &value->yd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_ydu();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ydu() ? &value->ydu() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("yUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_yunits();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::Unit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_yunits() ? &value->yunits() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zD", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_zd();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zd() ? &value->zd() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zDU", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_zdu();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zdu() ? &value->zdu() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("zUnits", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_zunits();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::Unit const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zunits() ? &value->zunits() : nullptr;
                }
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

void visit_commonmodule_SchedulePoint(const set_t<commonmodule::SchedulePoint>& setter, const get_t<commonmodule::SchedulePoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_xval();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlTimestamp const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_xval() ? &value->xval() : nullptr;
                }
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
        "yVal",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_yval(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("zVal", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_zval();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_zval() ? &value->zval() : nullptr;
                }
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

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "fraction",
        AccessorBuilder<essmodule::ESSControlProfile,uint32_t>::build(
            [setter](essmodule::ESSControlProfile& profile, const uint32_t& value) { setter(profile)->set_fraction(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<uint32_t>& handler) { return false; }
        )
    );

    visitor.handle(
        "seconds",
        AccessorBuilder<essmodule::ESSControlProfile,uint64_t>::build(
            [setter](essmodule::ESSControlProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<uint64_t>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_tq();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::TimeQuality const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_tq() ? &value->tq() : nullptr;
                }
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "multiplier",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitMultiplierKind_descriptor()
    );

    visitor.handle(
        "SIUnit",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_essmodule_ENG_ESSFunctionKind(const set_t<essmodule::ENG_ESSFunctionKind>& setter, const get_t<essmodule::ENG_ESSFunctionKind>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<essmodule::ESSFunctionKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        essmodule::ESSFunctionKind_descriptor()
    );

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_setvalextension() ? &value->setvalextension() : nullptr;
                }
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

void visit_essmodule_ENG_ESSFunctionParameter(const set_t<essmodule::ENG_ESSFunctionParameter>& setter, const get_t<essmodule::ENG_ESSFunctionParameter>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "name",
        AccessorBuilder<essmodule::ESSControlProfile,int>::build(
            [setter](essmodule::ESSControlProfile& profile, const int& value) { setter(profile)->set_name(static_cast<essmodule::ESSFunctionParameterKind>(value)); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        essmodule::ESSFunctionParameterKind_descriptor()
    );

    if(visitor.start_message_field("unit", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::Unit const *
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

    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,int32_t>::build(
            [setter](essmodule::ESSControlProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<int32_t>& handler) { return false; }
        )
    );
}

void visit_essmodule_ESSCSG(const set_t<essmodule::ESSCSG>& setter, const get_t<essmodule::ESSCSG>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    {
        const auto count = visitor.start_repeated_message_field("crvpts", essmodule::ESSPoint::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> essmodule::ESSPoint const*
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
            visit_essmodule_ESSPoint(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }
}

void visit_essmodule_ESSControl(const set_t<essmodule::ESSControl>& setter, const get_t<essmodule::ESSControl>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("controlValue", commonmodule::ControlValue::descriptor()))
    {
        visit_commonmodule_ControlValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_controlvalue();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlValue const *
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_check();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::CheckConditions const *
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

    if(visitor.start_message_field("essControlFSCC", essmodule::EssControlFSCC::descriptor()))
    {
        visit_essmodule_EssControlFSCC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_esscontrolfscc();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::EssControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscontrolfscc() ? &value->esscontrolfscc() : nullptr;
                }
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

void visit_essmodule_ESSControlScheduleFSCH(const set_t<essmodule::ESSControlScheduleFSCH>& setter, const get_t<essmodule::ESSControlScheduleFSCH>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("ValDCSG", essmodule::ESSCSG::descriptor()))
    {
        visit_essmodule_ESSCSG(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_valdcsg();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ESSCSG const *
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

void visit_essmodule_ESSPoint(const set_t<essmodule::ESSPoint>& setter, const get_t<essmodule::ESSPoint>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_blackstartenabled() ? &value->blackstartenabled() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("frequencySetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_frequencysetpointenabled() ? &value->frequencysetpointenabled() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("function", essmodule::ENG_ESSFunctionKind::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionKind(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_function();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ENG_ESSFunctionKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_function() ? &value->function() : nullptr;
                }
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
        const auto count = visitor.start_repeated_message_field("functionparameter", essmodule::ENG_ESSFunctionParameter::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](essmodule::ESSControlProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_functionparameter();
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
            const auto get = [getter, i](const essmodule::ESSControlProfile& profile) -> essmodule::ENG_ESSFunctionParameter const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->functionparameter_size()) ? &value->functionparameter(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_essmodule_ENG_ESSFunctionParameter(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_mode() ? &value->mode() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctHzDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pcthzdroop() ? &value->pcthzdroop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("pctVDroop", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> google::protobuf::FloatValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pctvdroop() ? &value->pctvdroop() : nullptr;
                }
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::RampRate const *
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

    if(visitor.start_message_field("reactivePwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_reactivepwrsetpointenabled() ? &value->reactivepwrsetpointenabled() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("realPwrSetPointEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_realpwrsetpointenabled() ? &value->realpwrsetpointenabled() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("reset", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_reset();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::Optional_StateKind const *
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

    if(visitor.start_message_field("syncBackToGrid", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_syncbacktogrid() ? &value->syncbacktogrid() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("transToIslndOnGridLossEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_transtoislndongridlossenabled() ? &value->transtoislndongridlossenabled() : nullptr;
                }
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
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("xVal", commonmodule::ControlTimestamp::descriptor()))
    {
        visit_commonmodule_ControlTimestamp(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_xval();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlTimestamp const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_xval() ? &value->xval() : nullptr;
                }
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

void visit_essmodule_EssControlFSCC(const set_t<essmodule::EssControlFSCC>& setter, const get_t<essmodule::EssControlFSCC>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    if(visitor.start_message_field("controlFSCC", commonmodule::ControlFSCC::descriptor()))
    {
        visit_commonmodule_ControlFSCC(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_controlfscc();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> commonmodule::ControlFSCC const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_controlfscc() ? &value->controlfscc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essControlScheduleFSCH", essmodule::ESSControlScheduleFSCH::descriptor()))
    {
        visit_essmodule_ESSControlScheduleFSCH(
            [setter](essmodule::ESSControlProfile& profile)
            {
                return setter(profile)->mutable_esscontrolschedulefsch();
            },
            [getter](const essmodule::ESSControlProfile& profile) -> essmodule::ESSControlScheduleFSCH const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esscontrolschedulefsch() ? &value->esscontrolschedulefsch() : nullptr;
                }
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,bool>::build(
            [setter](essmodule::ESSControlProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,float>::build(
            [setter](essmodule::ESSControlProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSControlProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSControlProfile,std::string>::build(
            [setter](essmodule::ESSControlProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSControlProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

} // end namespace adapter
