#include "adapter-api/config/generated/SwitchReadingProfileConfigModelVisitor.h"
#include "../AccessorImpl.h"

namespace adapter {

template <class V>
using set_t = setter_t<switchmodule::SwitchReadingProfile, V>;

template <class V>
using get_t = getter_t<switchmodule::SwitchReadingProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_Quality(const set_t<commonmodule::Quality>& setter, const get_t<commonmodule::Quality>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_switchmodule_SwitchReading(const set_t<switchmodule::SwitchReading>& setter, const get_t<switchmodule::SwitchReading>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](switchmodule::SwitchReadingProfile& profile) { return &profile; };
    const auto getter = [](const switchmodule::SwitchReadingProfile& profile) { return &profile; };

    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmessageinfo();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMessageInfo const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::IED const *
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

    if(visitor.start_message_field("protectedSwitch", switchmodule::ProtectedSwitch::descriptor()))
    {
        visit_switchmodule_ProtectedSwitch(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_protectedswitch();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> switchmodule::ProtectedSwitch const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_protectedswitch() ? &value->protectedswitch() : nullptr;
                }
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
        const auto count = visitor.start_repeated_message_field("switchreading", switchmodule::SwitchReading::descriptor());
        for(int i = 0; i < count; ++i)
        {
            visitor.start_iteration(i);
            const auto set = [setter, i, max = count](switchmodule::SwitchReadingProfile& profile)
            {
                const auto repeated = setter(profile)->mutable_switchreading();
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
            const auto get = [getter, i](const switchmodule::SwitchReadingProfile& profile) -> switchmodule::SwitchReading const*
            {
                const auto value = getter(profile);
                if(value)
                {
                    return (i < value->switchreading_size()) ? &value->switchreading(i) : nullptr;
                }
                else
                {
                    return nullptr;
                }
            };
            visit_switchmodule_SwitchReading(set, get, visitor);
            visitor.end_iteration();
        }
        visitor.end_message_field();
    }
}

// ---- template definitions for child types ----

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::AnalogueValue const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Quality const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Timestamp const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchReadingProfile,std::string>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_Quality(const set_t<commonmodule::Quality>& setter, const get_t<commonmodule::Quality>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_detailqual();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::DetailQual const *
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
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_operatorblocked(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "source",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::SourceKind_descriptor()
    );

    visitor.handle(
        "test",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_test(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "validity",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::ValidityKind_descriptor()
    );
}

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsAB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "failure",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inaccurate",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "inconsistent",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oldData",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "oscillatory",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "outOfRange",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "overflow",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("cVal", commonmodule::Vector::descriptor()))
    {
        visit_commonmodule_Vector(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_cval();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Vector const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Quality const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Timestamp const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "actVal",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int64_t>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int64_t& value) { setter(profile)->set_actval(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int64_t>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_q();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Quality const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_t();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Timestamp const *
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
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_units(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("terminal", commonmodule::Terminal::descriptor()))
    {
        visit_commonmodule_Terminal(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_terminal();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Terminal const *
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

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("ang", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_ang();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::AnalogueValue const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::AnalogueValue const *
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

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int32_t>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int32_t>& handler) { return false; }
        )
    );
}

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "multiplier",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitMultiplierKind_descriptor()
    );

    visitor.handle(
        "SIUnit",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::UnitSymbolKind_descriptor()
    );
}

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_messagetimestamp();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::Timestamp const *
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

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchReadingProfile,float>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<float>& handler) { return false; }
        )
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<switchmodule::SwitchReadingProfile,bool>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<bool>& handler) { return false; }
        )
    );
}

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_a();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_clcmth();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ENG_CalcMethodKind const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_hz();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::MV const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_pf();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_pfsign();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ENG_PFSignKind const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phv();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_ppv();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::DEL const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_va();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_var();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_w();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::WYE const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<switchmodule::SwitchReadingProfile,std::string>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<std::string>& handler) { return false; }
        )
    );
}

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("aCDCTerminal", commonmodule::ACDCTerminal::descriptor()))
    {
        visit_commonmodule_ACDCTerminal(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_acdcterminal();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ACDCTerminal const *
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
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_phases(static_cast<commonmodule::PhaseCodeKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::PhaseCodeKind_descriptor()
    );
}

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::CalcMethodKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::CalcMethodKind_descriptor()
    );
}

void visit_switchmodule_SwitchReading(const set_t<switchmodule::SwitchReading>& setter, const get_t<switchmodule::SwitchReading>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipmentterminalreading();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ConductingEquipmentTerminalReading const *
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

    if(visitor.start_message_field("diffReadingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_diffreadingmmxu();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMXU const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_diffreadingmmxu() ? &value->diffreadingmmxu() : nullptr;
                }
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phasemmtn();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::PhaseMMTN const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmtr();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMTR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmxu();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ReadingMMXU const *
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

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_connected();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_sequencenumber();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("net", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_net();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_neut();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::CMV const *
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

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<switchmodule::SwitchReadingProfile,int>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::PFSignKind>(value)); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<int>& handler) { return false; }
        ),
        commonmodule::PFSignKind_descriptor()
    );
}

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::BCR const *
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

void visit_switchmodule_ProtectedSwitch(const set_t<switchmodule::ProtectedSwitch>& setter, const get_t<switchmodule::ProtectedSwitch>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_Timestamp(const set_t<commonmodule::Timestamp>& setter, const get_t<commonmodule::Timestamp>& getter, IConfigModelVisitor<switchmodule::SwitchReadingProfile>& visitor)
{
    visitor.handle(
        "fraction",
        AccessorBuilder<switchmodule::SwitchReadingProfile,uint32_t>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const uint32_t& value) { setter(profile)->set_fraction(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<uint32_t>& handler) { return false; }
        )
    );

    visitor.handle(
        "seconds",
        AccessorBuilder<switchmodule::SwitchReadingProfile,uint64_t>::build(
            [setter](switchmodule::SwitchReadingProfile& profile, const uint64_t& value) { setter(profile)->set_seconds(value); },
            [getter](const switchmodule::SwitchReadingProfile& profile, const handler_t<uint64_t>& handler) { return false; }
        )
    );

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality(
            [setter](switchmodule::SwitchReadingProfile& profile)
            {
                return setter(profile)->mutable_tq();
            },
            [getter](const switchmodule::SwitchReadingProfile& profile) -> commonmodule::TimeQuality const *
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

} // end namespace adapter
