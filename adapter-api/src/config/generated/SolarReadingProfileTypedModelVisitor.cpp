#include "adapter-api/config/generated/SolarReadingProfileTypedModelVisitor.h"
#include "../AccessorImpl.h"

namespace adapter {

template <class V>
using set_t = setter_t<solarmodule::SolarReadingProfile, V>;

template <class V>
using get_t = getter_t<solarmodule::SolarReadingProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_Quality(const set_t<commonmodule::Quality>& setter, const get_t<commonmodule::Quality>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit_solarmodule_SolarReading(const set_t<solarmodule::SolarReading>& setter, const get_t<solarmodule::SolarReading>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](solarmodule::SolarReadingProfile& profile) { return &profile; };
    const auto getter = [](const solarmodule::SolarReadingProfile& profile) { return &profile; };

    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmessageinfo();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMessageInfo const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_readingmessageinfo() ? &value->readingmessageinfo() : nullptr;
                }
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("solarInverter", solarmodule::SolarInverter::descriptor()))
    {
        visit_solarmodule_SolarInverter(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_solarinverter();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> solarmodule::SolarInverter const *
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

    if(visitor.start_message_field("solarReading", solarmodule::SolarReading::descriptor()))
    {
        visit_solarmodule_SolarReading(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_solarreading();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> solarmodule::SolarReading const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_solarreading() ? &value->solarreading() : nullptr;
                }
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

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

    if(visitor.start_message_field("connected", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_connected();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::BoolValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_connected() ? &value->connected() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("sequenceNumber", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_sequencenumber();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::Int32Value const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_sequencenumber() ? &value->sequencenumber() : nullptr;
                }
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

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "actVal",
        AccessorBuilder<solarmodule::SolarReadingProfile,int64_t>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int64_t& value) { setter(profile)->set_actval(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int64_t>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Quality const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Timestamp const *
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

    visitor.handle(
        "units",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_units(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("cVal", commonmodule::Vector::descriptor()))
    {
        visit_commonmodule_Vector(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_cval();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Vector const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_cval() ? &value->cval() : nullptr;
                }
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Quality const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Timestamp const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<solarmodule::SolarReadingProfile,std::string>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("terminal", commonmodule::Terminal::descriptor()))
    {
        visit_commonmodule_Terminal(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_terminal();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Terminal const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_terminal() ? &value->terminal() : nullptr;
                }
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

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsAB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsab() ? &value->phsab() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsBC", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsbc() ? &value->phsbc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsCA", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsca() ? &value->phsca() : nullptr;
                }
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

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "failure",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inaccurate",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inconsistent",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oldData",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oscillatory",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "outOfRange",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "overflow",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::CalcMethodKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::CalcMethodKind_descriptor()
    );
}

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::PFSignKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::PFSignKind_descriptor()
    );
}

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::AnalogueValue const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Quality const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Timestamp const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_messagetimestamp();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::Timestamp const *
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

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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

    if(visitor.start_message_field("phsAB", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMTN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsab() ? &value->phsab() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsB", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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

    if(visitor.start_message_field("phsBC", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMTN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsbc() ? &value->phsbc() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsC", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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

    if(visitor.start_message_field("phsCA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMTN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phsca() ? &value->phsca() : nullptr;
                }
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

void visit_commonmodule_Quality(const set_t<commonmodule::Quality>& setter, const get_t<commonmodule::Quality>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_detailqual();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::DetailQual const *
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
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_operatorblocked(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "source",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::SourceKind_descriptor()
    );

    visitor.handle(
        "test",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_test(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "validity",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::ValidityKind_descriptor()
    );
}

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("DmdVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dmdvah() ? &value->dmdvah() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dmdvarh() ? &value->dmdvarh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dmdwh() ? &value->dmdwh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_supvah() ? &value->supvah() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_supvarh() ? &value->supvarh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_supwh() ? &value->supwh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_totvah() ? &value->totvah() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_totvarh() ? &value->totvarh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_totwh() ? &value->totwh() : nullptr;
                }
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

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("DmdVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dmdvah() ? &value->dmdvah() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dmdvarh() ? &value->dmdvarh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("DmdWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_dmdwh() ? &value->dmdwh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_supvah() ? &value->supvah() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_supvarh() ? &value->supvarh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("SupWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_supwh() ? &value->supwh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_totvah() ? &value->totvah() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_totvarh() ? &value->totvarh() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("TotWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::BCR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_totwh() ? &value->totwh() : nullptr;
                }
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

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::LogicalNode const *
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

    if(visitor.start_message_field("A", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_a();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::WYE const *
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

    if(visitor.start_message_field("ClcMth", commonmodule::ENG_CalcMethodKind::descriptor()))
    {
        visit_commonmodule_ENG_CalcMethodKind(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_clcmth();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ENG_CalcMethodKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_clcmth() ? &value->clcmth() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("Hz", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_hz();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::MV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_hz() ? &value->hz() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PF", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_pf();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::WYE const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pf() ? &value->pf() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PFSign", commonmodule::ENG_PFSignKind::descriptor()))
    {
        visit_commonmodule_ENG_PFSignKind(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_pfsign();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ENG_PFSignKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_pfsign() ? &value->pfsign() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PhV", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phv();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::WYE const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phv() ? &value->phv() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("PPV", commonmodule::DEL::descriptor()))
    {
        visit_commonmodule_DEL(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_ppv();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::DEL const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ppv() ? &value->ppv() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("VA", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_va();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::WYE const *
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

    if(visitor.start_message_field("VAr", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_var();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::WYE const *
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

    if(visitor.start_message_field("W", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_w();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::WYE const *
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

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("aCDCTerminal", commonmodule::ACDCTerminal::descriptor()))
    {
        visit_commonmodule_ACDCTerminal(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_acdcterminal();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ACDCTerminal const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_acdcterminal() ? &value->acdcterminal() : nullptr;
                }
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
        "phases",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_phases(static_cast<commonmodule::PhaseCodeKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::PhaseCodeKind_descriptor()
    );
}

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "fraction",
        AccessorBuilder<solarmodule::SolarReadingProfile,uint32_t>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const uint32_t& value) { setter(profile)->set_fraction(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<uint32_t>& handler) { return false; }
        )
    );

    visitor.handle(
        "seconds",
        AccessorBuilder<solarmodule::SolarReadingProfile,uint64_t>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<uint64_t>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_tq();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::TimeQuality const *
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "multiplier",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitMultiplierKind_descriptor()
    );

    visitor.handle(
        "SIUnit",
        AccessorBuilder<solarmodule::SolarReadingProfile,int>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("ang", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_ang();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::AnalogueValue const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_ang() ? &value->ang() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::AnalogueValue const *
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
}

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("net", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_net();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
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

    if(visitor.start_message_field("neut", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_neut();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_neut() ? &value->neut() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phsA", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
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

    if(visitor.start_message_field("phsB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
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

    if(visitor.start_message_field("phsC", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::CMV const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarReadingProfile,bool>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarReadingProfile,float>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarReadingProfile,int32_t>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<int32_t>& handler) { return false; }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<solarmodule::SolarReadingProfile,std::string>::build(
            [setter](solarmodule::SolarReadingProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const solarmodule::SolarReadingProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_solarmodule_SolarInverter(const set_t<solarmodule::SolarInverter>& setter, const get_t<solarmodule::SolarInverter>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_solarmodule_SolarReading(const set_t<solarmodule::SolarReading>& setter, const get_t<solarmodule::SolarReading>& getter, ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipmentterminalreading();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ConductingEquipmentTerminalReading const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_conductingequipmentterminalreading() ? &value->conductingequipmentterminalreading() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_phasemmtn();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::PhaseMMTN const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phasemmtn() ? &value->phasemmtn() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmtr();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMTR const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_readingmmtr() ? &value->readingmmtr() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(
            [setter](solarmodule::SolarReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmxu();
            },
            [getter](const solarmodule::SolarReadingProfile& profile) -> commonmodule::ReadingMMXU const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_readingmmxu() ? &value->readingmmxu() : nullptr;
                }
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

} // end namespace adapter
