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

#include "adapter-api/config/generated/TypedModelVisitors.h"
#include "../AccessorImpl.h"

namespace adapter {

template <class V>
using set_t = setter_t<essmodule::ESSReadingProfile, V>;

template <class V>
using get_t = getter_t<essmodule::ESSReadingProfile, V>;

// ---- forward declare all the child visit method names ----

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_essmodule_ESSReading(const set_t<essmodule::ESSReading>& setter, const get_t<essmodule::ESSReading>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

// ---- the exposed visit function ----

void visit(ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto setter = [](essmodule::ESSReadingProfile& profile) { return &profile; };
    const auto getter = [](const essmodule::ESSReadingProfile& profile) { return &profile; };

    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmessageinfo();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMessageInfo const *
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

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_ess();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ESS const *
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

    if(visitor.start_message_field("essReading", essmodule::ESSReading::descriptor()))
    {
        visit_essmodule_ESSReading(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_essreading();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> essmodule::ESSReading const *
            {
                const auto value = getter(profile);
                if(value)
                {
                    return value->has_essreading() ? &value->essreading() : nullptr;
                }
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_ied();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::IED const *
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

void visit_commonmodule_ACDCTerminal(const set_t<commonmodule::ACDCTerminal>& setter, const get_t<commonmodule::ACDCTerminal>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_connected();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::BoolValue const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_sequencenumber();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_AnalogueValue(const set_t<commonmodule::AnalogueValue>& setter, const get_t<commonmodule::AnalogueValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_f();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::FloatValue const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_i();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::Int32Value const *
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

void visit_commonmodule_BCR(const set_t<commonmodule::BCR>& setter, const get_t<commonmodule::BCR>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "actVal",
        AccessorBuilder<essmodule::ESSReadingProfile,int64_t>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int64_t& value) { setter(profile)->set_actval(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int64_t>& handler)
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
        MessageAccessorBuilder<essmodule::ESSReadingProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSReadingProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<essmodule::ESSReadingProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSReadingProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_t()) return false;
                handler(parent->t());
                return true;
            }
        )
    );

    if(visitor.start_message_field("units", commonmodule::Optional_UnitSymbolKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitSymbolKind(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::Optional_UnitSymbolKind const *
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

void visit_commonmodule_CMV(const set_t<commonmodule::CMV>& setter, const get_t<commonmodule::CMV>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("cVal", commonmodule::Vector::descriptor()))
    {
        visit_commonmodule_Vector(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_cval();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::Vector const *
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
        MessageAccessorBuilder<essmodule::ESSReadingProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSReadingProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<essmodule::ESSReadingProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSReadingProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_ConductingEquipment(const set_t<commonmodule::ConductingEquipment>& setter, const get_t<commonmodule::ConductingEquipment>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_namedobject();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::NamedObject const *
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
        AccessorBuilder<essmodule::ESSReadingProfile,std::string>::build(
            [setter](essmodule::ESSReadingProfile& profile, const std::string& value) { setter(profile)->set_mrid(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->mrid());
                return true;
            }
        )
    );
}

void visit_commonmodule_ConductingEquipmentTerminalReading(const set_t<commonmodule::ConductingEquipmentTerminalReading>& setter, const get_t<commonmodule::ConductingEquipmentTerminalReading>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("terminal", commonmodule::Terminal::descriptor()))
    {
        visit_commonmodule_Terminal(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_terminal();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::Terminal const *
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

void visit_commonmodule_DEL(const set_t<commonmodule::DEL>& setter, const get_t<commonmodule::DEL>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsAB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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

void visit_commonmodule_DetailQual(const set_t<commonmodule::DetailQual>& setter, const get_t<commonmodule::DetailQual>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "badReference",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_badreference(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->badreference());
                return true;
            }
        )
    );

    visitor.handle(
        "failure",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_failure(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->failure());
                return true;
            }
        )
    );

    visitor.handle(
        "inaccurate",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_inaccurate(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->inaccurate());
                return true;
            }
        )
    );

    visitor.handle(
        "inconsistent",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_inconsistent(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->inconsistent());
                return true;
            }
        )
    );

    visitor.handle(
        "oldData",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_olddata(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->olddata());
                return true;
            }
        )
    );

    visitor.handle(
        "oscillatory",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_oscillatory(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->oscillatory());
                return true;
            }
        )
    );

    visitor.handle(
        "outOfRange",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_outofrange(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->outofrange());
                return true;
            }
        )
    );

    visitor.handle(
        "overflow",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_overflow(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->overflow());
                return true;
            }
        )
    );
}

void visit_commonmodule_ENG_CalcMethodKind(const set_t<commonmodule::ENG_CalcMethodKind>& setter, const get_t<commonmodule::ENG_CalcMethodKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSReadingProfile,int>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::CalcMethodKind>(value)); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_ENG_PFSignKind(const set_t<commonmodule::ENG_PFSignKind>& setter, const get_t<commonmodule::ENG_PFSignKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "setVal",
        AccessorBuilder<essmodule::ESSReadingProfile,int>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int& value) { setter(profile)->set_setval(static_cast<commonmodule::PFSignKind>(value)); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_ESS(const set_t<commonmodule::ESS>& setter, const get_t<commonmodule::ESS>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipment();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ConductingEquipment const *
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

void visit_commonmodule_IED(const set_t<commonmodule::IED>& setter, const get_t<commonmodule::IED>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_IdentifiedObject(const set_t<commonmodule::IdentifiedObject>& setter, const get_t<commonmodule::IdentifiedObject>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_mrid();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_LogicalNode(const set_t<commonmodule::LogicalNode>& setter, const get_t<commonmodule::LogicalNode>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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

void visit_commonmodule_MV(const set_t<commonmodule::MV>& setter, const get_t<commonmodule::MV>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::AnalogueValue const *
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
        MessageAccessorBuilder<essmodule::ESSReadingProfile,commonmodule::Quality>::build(
            [setter](essmodule::ESSReadingProfile& profile) { return setter(profile)->mutable_q(); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<commonmodule::Quality>& handler)
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
        MessageAccessorBuilder<essmodule::ESSReadingProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSReadingProfile& profile) { return setter(profile)->mutable_t(); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_units();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::Unit const *
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

void visit_commonmodule_MessageInfo(const set_t<commonmodule::MessageInfo>& setter, const get_t<commonmodule::MessageInfo>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_identifiedobject();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::IdentifiedObject const *
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
        MessageAccessorBuilder<essmodule::ESSReadingProfile,commonmodule::Timestamp>::build(
            [setter](essmodule::ESSReadingProfile& profile) { return setter(profile)->mutable_messagetimestamp(); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<commonmodule::Timestamp>& handler)
            {
                const auto parent = getter(profile);
                if(!parent || !parent->has_messagetimestamp()) return false;
                handler(parent->messagetimestamp());
                return true;
            }
        )
    );
}

void visit_commonmodule_NamedObject(const set_t<commonmodule::NamedObject>& setter, const get_t<commonmodule::NamedObject>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_description();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::StringValue const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_name();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> google::protobuf::StringValue const *
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

void visit_commonmodule_Optional_PhaseCodeKind(const set_t<commonmodule::Optional_PhaseCodeKind>& setter, const get_t<commonmodule::Optional_PhaseCodeKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSReadingProfile,int>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::PhaseCodeKind>(value)); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitMultiplierKind(const set_t<commonmodule::Optional_UnitMultiplierKind>& setter, const get_t<commonmodule::Optional_UnitMultiplierKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSReadingProfile,int>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitMultiplierKind>(value)); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Optional_UnitSymbolKind(const set_t<commonmodule::Optional_UnitSymbolKind>& setter, const get_t<commonmodule::Optional_UnitSymbolKind>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSReadingProfile,int>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int& value) { setter(profile)->set_value(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_PhaseMMTN(const set_t<commonmodule::PhaseMMTN>& setter, const get_t<commonmodule::PhaseMMTN>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsab();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsbc();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsca();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMTN const *
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

void visit_commonmodule_ReadingMMTN(const set_t<commonmodule::ReadingMMTN>& setter, const get_t<commonmodule::ReadingMMTN>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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

void visit_commonmodule_ReadingMMTR(const set_t<commonmodule::ReadingMMTR>& setter, const get_t<commonmodule::ReadingMMTR>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvah();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdvarh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_dmdwh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_supvah();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_supvarh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_supwh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_totvah();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_totvarh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_totwh();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::BCR const *
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

void visit_commonmodule_ReadingMMXU(const set_t<commonmodule::ReadingMMXU>& setter, const get_t<commonmodule::ReadingMMXU>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_logicalnode();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::LogicalNode const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_a();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_clcmth();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ENG_CalcMethodKind const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_hz();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::MV const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_pf();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_pfsign();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ENG_PFSignKind const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phv();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_ppv();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::DEL const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_va();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_var();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::WYE const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_w();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::WYE const *
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

void visit_commonmodule_ReadingMessageInfo(const set_t<commonmodule::ReadingMessageInfo>& setter, const get_t<commonmodule::ReadingMessageInfo>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_messageinfo();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::MessageInfo const *
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

void visit_commonmodule_Terminal(const set_t<commonmodule::Terminal>& setter, const get_t<commonmodule::Terminal>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("aCDCTerminal", commonmodule::ACDCTerminal::descriptor()))
    {
        visit_commonmodule_ACDCTerminal(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_acdcterminal();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ACDCTerminal const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phases();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::Optional_PhaseCodeKind const *
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

void visit_commonmodule_TimeQuality(const set_t<commonmodule::TimeQuality>& setter, const get_t<commonmodule::TimeQuality>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "clockFailure",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_clockfailure(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->clockfailure());
                return true;
            }
        )
    );

    visitor.handle(
        "clockNotSynchronized",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_clocknotsynchronized(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->clocknotsynchronized());
                return true;
            }
        )
    );

    visitor.handle(
        "leapSecondsKnown",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_leapsecondsknown(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->leapsecondsknown());
                return true;
            }
        )
    );

    visitor.handle(
        "timeAccuracy",
        AccessorBuilder<essmodule::ESSReadingProfile,int>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int& value) { setter(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->timeaccuracy());
                return true;
            }
        ),
        commonmodule::TimeAccuracyKind_descriptor()
    );
}

void visit_commonmodule_Unit(const set_t<commonmodule::Unit>& setter, const get_t<commonmodule::Unit>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("multiplier", commonmodule::Optional_UnitMultiplierKind::descriptor()))
    {
        visit_commonmodule_Optional_UnitMultiplierKind(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_multiplier();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::Optional_UnitMultiplierKind const *
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
        AccessorBuilder<essmodule::ESSReadingProfile,int>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int& value) { setter(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int>& handler)
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

void visit_commonmodule_Vector(const set_t<commonmodule::Vector>& setter, const get_t<commonmodule::Vector>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("ang", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_ang();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::AnalogueValue const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_mag();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::AnalogueValue const *
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

void visit_commonmodule_WYE(const set_t<commonmodule::WYE>& setter, const get_t<commonmodule::WYE>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("net", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_net();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_neut();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsa();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsb();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phsc();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::CMV const *
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

void visit_essmodule_ESSReading(const set_t<essmodule::ESSReading>& setter, const get_t<essmodule::ESSReading>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading(
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_conductingequipmentterminalreading();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ConductingEquipmentTerminalReading const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_phasemmtn();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::PhaseMMTN const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmtr();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMTR const *
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
            [setter](essmodule::ESSReadingProfile& profile)
            {
                return setter(profile)->mutable_readingmmxu();
            },
            [getter](const essmodule::ESSReadingProfile& profile) -> commonmodule::ReadingMMXU const *
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

void visit_google_protobuf_BoolValue(const set_t<google::protobuf::BoolValue>& setter, const get_t<google::protobuf::BoolValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSReadingProfile,bool>::build(
            [setter](essmodule::ESSReadingProfile& profile, const bool& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<bool>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_FloatValue(const set_t<google::protobuf::FloatValue>& setter, const get_t<google::protobuf::FloatValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSReadingProfile,float>::build(
            [setter](essmodule::ESSReadingProfile& profile, const float& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<float>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_Int32Value(const set_t<google::protobuf::Int32Value>& setter, const get_t<google::protobuf::Int32Value>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSReadingProfile,int32_t>::build(
            [setter](essmodule::ESSReadingProfile& profile, const int32_t& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<int32_t>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

void visit_google_protobuf_StringValue(const set_t<google::protobuf::StringValue>& setter, const get_t<google::protobuf::StringValue>& getter, ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    visitor.handle(
        "value",
        AccessorBuilder<essmodule::ESSReadingProfile,std::string>::build(
            [setter](essmodule::ESSReadingProfile& profile, const std::string& value) { setter(profile)->set_value(value); },
            [getter](const essmodule::ESSReadingProfile& profile, const handler_t<std::string>& handler)
            {
                const auto parent = getter(profile);
                if(!parent) return false;
                handler(parent->value());
                return true;
            }
        )
    );
}

} // end namespace adapter
