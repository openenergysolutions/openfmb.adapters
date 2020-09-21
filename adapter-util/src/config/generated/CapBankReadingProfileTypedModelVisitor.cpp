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
using set_t = setter_t<capbankmodule::CapBankReadingProfile, V>;

template <class V>
using get_t = getter_t<capbankmodule::CapBankReadingProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_capbankmodule_CapBankReading(const set_t<capbankmodule::CapBankReading>& setter, const get_t<capbankmodule::CapBankReading>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](capbankmodule::CapBankReadingProfile& profile) { return &profile; };
    const auto getter = [](const capbankmodule::CapBankReadingProfile& profile) { return &profile; };

    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmessageinfo();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMessageInfo const *
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

    if(visitor.start_message_field("capBankReading", capbankmodule::CapBankReading::descriptor()))
    {
        visit_capbankmodule_CapBankReading(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_capbankreading();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> capbankmodule::CapBankReading const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbankreading() ? &value->capbankreading() : nullptr;
                }
                else
                {
                    return nullptr;
                }
            },
            visitor
        );
        visitor.end_message_field();
    }

    if(visitor.start_message_field("capBankSystem", capbankmodule::CapBankSystem::descriptor()))
    {
        visit_capbankmodule_CapBankSystem(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_capbanksystem();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> capbankmodule::CapBankSystem const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_capbanksystem() ? &value->capbanksystem() : nullptr;
                }
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

void visit_capbankmodule_CapBankReading(const set_t<capbankmodule::CapBankReading>& setter, const get_t<capbankmodule::CapBankReading>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipmentterminalreading();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ConductingEquipmentTerminalReading const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phasemmtn();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::PhaseMMTN const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmtr();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMTR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmxu();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMXU const *
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

void visit_capbankmodule_CapBankSystem(const set_t<capbankmodule::CapBankSystem>& setter, const get_t<capbankmodule::CapBankSystem>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_connected();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_sequencenumber();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "actVal",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,int64_t>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const int64_t& value) { setter(profile)->set_actval(value); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<int64_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->actval());
                return true;
            }
        )
    );

    visitor.handle(
        "q",
        MessageAccessorBuilder<capbankmodule::CapBankReadingProfile,commonmodule::Quality>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<capbankmodule::CapBankReadingProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("cVal", commonmodule::Vector::descriptor()))
    {
        visit_commonmodule_Vector(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_cval();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::Vector const *
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

    visitor.handle(
        "q",
        MessageAccessorBuilder<capbankmodule::CapBankReadingProfile,commonmodule::Quality>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<capbankmodule::CapBankReadingProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );
}

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<capbankmodule::CapBankReadingProfile,std::string>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("terminal", commonmodule::Terminal::descriptor()))
    {
        visit_commonmodule_Terminal(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_terminal();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::Terminal const *
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

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsAB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,int>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::CalcMethodKind>(value)); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setval());
                return true;
            }
        ),
        commonmodule::CalcMethodKind_descriptor()
    );
}

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,int>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::PFSignKind>(value)); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->setval());
                return true;
            }
        ),
        commonmodule::PFSignKind_descriptor()
    );
}

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::AnalogueValue const *
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

    visitor.handle(
        "q",
        MessageAccessorBuilder<capbankmodule::CapBankReadingProfile,commonmodule::Quality>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<capbankmodule::CapBankReadingProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<capbankmodule::CapBankReadingProfile,commonmodule::Timestamp>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,int>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::PhaseCodeKind>(value)); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,int>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::BCR const *
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

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_a();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_clcmth();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ENG_CalcMethodKind const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_hz();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::MV const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_pf();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_pfsign();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ENG_PFSignKind const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phv();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_ppv();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::DEL const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_va();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_var();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_w();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::WYE const *
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

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("aCDCTerminal", commonmodule::ACDCTerminal::descriptor()))
    {
        visit_commonmodule_ACDCTerminal(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_acdcterminal();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::ACDCTerminal const *
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

    if(visitor.start_message_field("phases", commonmodule::Optional_PhaseCodeKind::descriptor()))
    {
        visit_commonmodule_Optional_PhaseCodeKind(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phases();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_phases() ? &value->phases() : nullptr;
                }
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

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<capbankmodule::CapBankReadingProfile,int>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("ang", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_ang();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::AnalogueValue const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::AnalogueValue const *
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

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    if(visitor.start_message_field("net", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_net();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_neut();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](capbankmodule::CapBankReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const capbankmodule::CapBankReadingProfile& profile) -> commonmodule::CMV const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,bool>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,float>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,int32_t>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<capbankmodule::CapBankReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<capbankmodule::CapBankReadingProfile,std::string>::build(
            [setter](capbankmodule::CapBankReadingProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const capbankmodule::CapBankReadingProfile& profile, const handler_t<std::string>& handler)
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
