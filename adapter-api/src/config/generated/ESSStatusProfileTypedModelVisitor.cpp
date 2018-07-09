#include "adapter-api/config/generated/ESSStatusProfileTypedModelVisitor.h"
#include "../AccessorImpl.h"

namespace adapter {

template <class V>
using set_t = setter_t<essmodule::ESSStatusProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSStatusProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_Quality(const set_t<commonmodule::Quality>& setter, const get_t<commonmodule::Quality>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ENG_ESSFunctionKind(const set_t<essmodule::ENG_ESSFunctionKind>& setter, const get_t<essmodule::ENG_ESSFunctionKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ENG_ESSFunctionParameter(const set_t<essmodule::ENG_ESSFunctionParameter>& setter, const get_t<essmodule::ENG_ESSFunctionParameter>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSEventAndStatusZGEN(const set_t<essmodule::ESSEventAndStatusZGEN>& setter, const get_t<essmodule::ESSEventAndStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSPointStatus(const set_t<essmodule::ESSPointStatus>& setter, const get_t<essmodule::ESSPointStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSStatus(const set_t<essmodule::ESSStatus>& setter, const get_t<essmodule::ESSStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_ESSStatusZGEN(const set_t<essmodule::ESSStatusZGEN>& setter, const get_t<essmodule::ESSStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_essmodule_EssStatusZBAT(const set_t<essmodule::EssStatusZBAT>& setter, const get_t<essmodule::EssStatusZBAT>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSStatusProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSStatusProfile& profile) { return &profile; };

    if(visitor.start_message_field("statusMessageInfo", commonmodule::StatusMessageInfo::descriptor()))
    {
        visit_commonmodule_StatusMessageInfo(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_statusmessageinfo();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_statusmessageinfo() ? &value->statusmessageinfo() : nullptr;
                }
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ESS const *
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

    if(visitor.start_message_field("essStatus", essmodule::ESSStatus::descriptor()))
    {
        visit_essmodule_ESSStatus(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_essstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essstatus() ? &value->essstatus() : nullptr;
                }
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IED const *
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

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,std::string>::build(
            [setter](essmodule::ESSStatusProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ControlDPC(const set_t<commonmodule::ControlDPC>& setter, const get_t<commonmodule::ControlDPC>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "ctlVal",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_ctlval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "failure",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inaccurate",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inconsistent",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oldData",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oscillatory",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "outOfRange",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "overflow",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ENG_GridConnectModeKind(const set_t<commonmodule::ENG_GridConnectModeKind>& setter, const get_t<commonmodule::ENG_GridConnectModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::GridConnectModeKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::GridConnectModeKind_descriptor()
    );

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ENS_BehaviourModeKind(const set_t<commonmodule::ENS_BehaviourModeKind>& setter, const get_t<commonmodule::ENS_BehaviourModeKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Quality const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_q() ? &value->q() : nullptr;
                }
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
        "stVal",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::BehaviourModeKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::BehaviourModeKind_descriptor()
    );

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Timestamp const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_t() ? &value->t() : nullptr;
                }
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

void visit_commonmodule_ENS_DynamicTestKind(const set_t<commonmodule::ENS_DynamicTestKind>& setter, const get_t<commonmodule::ENS_DynamicTestKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Quality const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_q() ? &value->q() : nullptr;
                }
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
        "stVal",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::DynamicTestKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::DynamicTestKind_descriptor()
    );

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Timestamp const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_t() ? &value->t() : nullptr;
                }
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

void visit_commonmodule_ENS_HealthKind(const set_t<commonmodule::ENS_HealthKind>& setter, const get_t<commonmodule::ENS_HealthKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("d", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_d();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_d() ? &value->d() : nullptr;
                }
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
        "stVal",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_stval(static_cast<commonmodule::HealthKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::HealthKind_descriptor()
    );
}

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_LogicalNodeForEventAndStatus(const set_t<commonmodule::LogicalNodeForEventAndStatus>& setter, const get_t<commonmodule::LogicalNodeForEventAndStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("Beh", commonmodule::ENS_BehaviourModeKind::descriptor()))
    {
        visit_commonmodule_ENS_BehaviourModeKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_beh();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENS_BehaviourModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_beh() ? &value->beh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("EEHealth", commonmodule::ENS_HealthKind::descriptor()))
    {
        visit_commonmodule_ENS_HealthKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_eehealth();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENS_HealthKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_eehealth() ? &value->eehealth() : nullptr;
                }
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::AnalogueValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_mag() ? &value->mag() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Quality const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_q() ? &value->q() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Timestamp const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_t() ? &value->t() : nullptr;
                }
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_messagetimestamp();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Timestamp const *
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

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_StateKind(const set_t<commonmodule::Optional_StateKind>& setter, const get_t<commonmodule::Optional_StateKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::StateKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::StateKind_descriptor()
    );
}

void visit_commonmodule_Quality(const set_t<commonmodule::Quality>& setter, const get_t<commonmodule::Quality>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_detailqual();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::DetailQual const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_detailqual() ? &value->detailqual() : nullptr;
                }
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
        "operatorBlocked",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_operatorblocked(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "source",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::SourceKind_descriptor()
    );

    visitor.handle(
        "test",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_test(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "validity",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::ValidityKind_descriptor()
    );
}

void visit_commonmodule_RampRate(const set_t<commonmodule::RampRate>& setter, const get_t<commonmodule::RampRate>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("negativeReactivePowerKVArPerMin", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_negativereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_negativerealpowerkwpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_positivereactivepowerkvarpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_positiverealpowerkwpermin();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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

void visit_commonmodule_StatusMessageInfo(const set_t<commonmodule::StatusMessageInfo>& setter, const get_t<commonmodule::StatusMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_StatusSPS(const set_t<commonmodule::StatusSPS>& setter, const get_t<commonmodule::StatusSPS>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Quality const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_q() ? &value->q() : nullptr;
                }
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
        "stVal",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_stval(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Timestamp const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_t() ? &value->t() : nullptr;
                }
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

void visit_commonmodule_StatusValue(const set_t<commonmodule::StatusValue>& setter, const get_t<commonmodule::StatusValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<essmodule::ESSStatusProfile,bool>::build(
            [setter](essmodule::ESSStatusProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "fraction",
        AccessorBuilder<essmodule::ESSStatusProfile,uint32_t>::build(
            [setter](essmodule::ESSStatusProfile& profile, const uint32_t& value) { setter(profile)->set_fraction(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<uint32_t>& handler) { return false; }
        )
    );

    visitor.handle(
        "seconds",
        AccessorBuilder<essmodule::ESSStatusProfile,uint64_t>::build(
            [setter](essmodule::ESSStatusProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<uint64_t>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_tq();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::TimeQuality const *
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "multiplier",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitMultiplierKind_descriptor()
    );

    visitor.handle(
        "SIUnit",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_essmodule_ENG_ESSFunctionKind(const set_t<essmodule::ENG_ESSFunctionKind>& setter, const get_t<essmodule::ENG_ESSFunctionKind>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<essmodule::ESSFunctionKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        essmodule::ESSFunctionKind_descriptor()
    );

    if(visitor.start_message_field("setValExtension", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_setvalextension();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::StringValue const *
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

void visit_essmodule_ENG_ESSFunctionParameter(const set_t<essmodule::ENG_ESSFunctionParameter>& setter, const get_t<essmodule::ENG_ESSFunctionParameter>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "name",
        AccessorBuilder<essmodule::ESSStatusProfile,int>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int& value) { setter(profile)->set_name(static_cast<essmodule::ESSFunctionParameterKind>(value)); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        essmodule::ESSFunctionParameterKind_descriptor()
    );

    if(visitor.start_message_field("unit", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_unit();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Unit const *
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
        AccessorBuilder<essmodule::ESSStatusProfile,int32_t>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int32_t>& handler) { return false; }
        )
    );
}

void visit_essmodule_ESSEventAndStatusZGEN(const set_t<essmodule::ESSEventAndStatusZGEN>& setter, const get_t<essmodule::ESSEventAndStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforeventandstatus() ? &value->logicalnodeforeventandstatus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("AuxPwrSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_auxpwrst();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_auxpwrst() ? &value->auxpwrst() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DynamicTest", commonmodule::ENS_DynamicTestKind::descriptor()))
    {
        visit_commonmodule_ENS_DynamicTestKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_dynamictest();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENS_DynamicTestKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dynamictest() ? &value->dynamictest() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("EmgStop", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_emgstop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_emgstop() ? &value->emgstop() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GnSynSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_gnsynst();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_gnsynst() ? &value->gnsynst() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PointStatus", essmodule::ESSPointStatus::descriptor()))
    {
        visit_essmodule_ESSPointStatus(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pointstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSPointStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pointstatus() ? &value->pointstatus() : nullptr;
                }
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

void visit_essmodule_ESSPointStatus(const set_t<essmodule::ESSPointStatus>& setter, const get_t<essmodule::ESSPointStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("blackStartEnabled", commonmodule::ControlDPC::descriptor()))
    {
        visit_commonmodule_ControlDPC(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_blackstartenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_frequencysetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_function();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ENG_ESSFunctionKind const *
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

    if(visitor.start_message_field("functionParameter", essmodule::ENG_ESSFunctionParameter::descriptor()))
    {
        visit_essmodule_ENG_ESSFunctionParameter(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_functionparameter();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ENG_ESSFunctionParameter const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_functionparameter() ? &value->functionparameter() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mode", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_mode();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pcthzdroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_pctvdroop();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_ramprates();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::RampRate const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_reactivepwrsetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_realpwrsetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlDPC const *
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

    if(visitor.start_message_field("state", commonmodule::Optional_StateKind::descriptor()))
    {
        visit_commonmodule_Optional_StateKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_state();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::Optional_StateKind const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_syncbacktogrid();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_transtoislndongridlossenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlDPC const *
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
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_voltagesetpointenabled();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ControlDPC const *
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

void visit_essmodule_ESSStatus(const set_t<essmodule::ESSStatus>& setter, const get_t<essmodule::ESSStatus>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("statusValue", commonmodule::StatusValue::descriptor()))
    {
        visit_commonmodule_StatusValue(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_statusvalue();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_statusvalue() ? &value->statusvalue() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essStatusZBAT", essmodule::EssStatusZBAT::descriptor()))
    {
        visit_essmodule_EssStatusZBAT(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_essstatuszbat();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::EssStatusZBAT const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essstatuszbat() ? &value->essstatuszbat() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("essStatusZGEN", essmodule::ESSStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSStatusZGEN(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_essstatuszgen();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSStatusZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essstatuszgen() ? &value->essstatuszgen() : nullptr;
                }
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

void visit_essmodule_ESSStatusZGEN(const set_t<essmodule::ESSStatusZGEN>& setter, const get_t<essmodule::ESSStatusZGEN>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("eSSEventAndStatusZGEN", essmodule::ESSEventAndStatusZGEN::descriptor()))
    {
        visit_essmodule_ESSEventAndStatusZGEN(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_esseventandstatuszgen();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> essmodule::ESSEventAndStatusZGEN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_esseventandstatuszgen() ? &value->esseventandstatuszgen() : nullptr;
                }
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

void visit_essmodule_EssStatusZBAT(const set_t<essmodule::EssStatusZBAT>& setter, const get_t<essmodule::EssStatusZBAT>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    if(visitor.start_message_field("logicalNodeForEventAndStatus", commonmodule::LogicalNodeForEventAndStatus::descriptor()))
    {
        visit_commonmodule_LogicalNodeForEventAndStatus(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_logicalnodeforeventandstatus();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::LogicalNodeForEventAndStatus const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_logicalnodeforeventandstatus() ? &value->logicalnodeforeventandstatus() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("BatSt", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_batst();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_batst() ? &value->batst() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("GriMod", commonmodule::ENG_GridConnectModeKind::descriptor()))
    {
        visit_commonmodule_ENG_GridConnectModeKind(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_grimod();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::ENG_GridConnectModeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_grimod() ? &value->grimod() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Soc", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_soc();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_soc() ? &value->soc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Stdby", commonmodule::StatusSPS::descriptor()))
    {
        visit_commonmodule_StatusSPS(
            [setter](essmodule::ESSStatusProfile& profile)
            {
                return setter(profile)->mutable_stdby();
            },
            [getter](const essmodule::ESSStatusProfile& profile) -> commonmodule::StatusSPS const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_stdby() ? &value->stdby() : nullptr;
                }
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

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,float>::build(
            [setter](essmodule::ESSStatusProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,int32_t>::build(
            [setter](essmodule::ESSStatusProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<int32_t>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSStatusProfile,std::string>::build(
            [setter](essmodule::ESSStatusProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSStatusProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

} // end namespace adapter
