#include "adapter-api/config/generated/ESSReadingProfileConfigModelVisitor.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_DEL(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ESS(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_BCR(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_CMV(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_MV(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_google_protobuf_Int32Value(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_PhaseMMTN(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMMTR(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ACDCTerminal(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_essmodule_ESSReading(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Terminal(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipmentTerminalReading(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMMXU(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Vector(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_CalcMethodKind(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_WYE(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMMTN(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_PFSignKind(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor);

// ---- the exposed visit function ----

void visit(IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    // this is so that we can reuse the same generators for child visitors
    const auto context = [](essmodule::ESSReadingProfile& profile) { return &profile; };

    if(visitor.start_message_field("readingMessageInfo", commonmodule::ReadingMessageInfo::descriptor()))
    {
        visit_commonmodule_ReadingMessageInfo([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ess", commonmodule::ESS::descriptor()))
    {
        visit_commonmodule_ESS([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_ess(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("essReading", essmodule::ESSReading::descriptor()))
    {
        visit_essmodule_ESSReading([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_essreading(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ied", commonmodule::IED::descriptor()))
    {
        visit_commonmodule_IED([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_ied(); }, visitor);
    }
    visitor.end_message_field();
}

// ---- template definitions for child types ----

template <class C>
void visit_google_protobuf_FloatValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, float> setter = [context](essmodule::ESSReadingProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_DEL(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsAB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsab(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsBC", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsbc(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsCA", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsca(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ESS(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipment", commonmodule::ConductingEquipment::descriptor()))
    {
        visit_commonmodule_ConductingEquipment([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IED(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("namedObject", commonmodule::NamedObject::descriptor()))
    {
        visit_commonmodule_NamedObject([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_namedobject(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSReadingProfile, std::string> setter = [context](essmodule::ESSReadingProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("messageTimeStamp", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_BCR(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, int64_t> setter = [context](essmodule::ESSReadingProfile& profile, const int64_t& value) { context(profile)->set_actval(value); };
        visitor.handle("actVal", setter);
    }

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_units(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("units", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Quality(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("detailQual", commonmodule::DetailQual::descriptor()))
    {
        visit_commonmodule_DetailQual([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_detailqual(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_operatorblocked(value); };
        visitor.handle("operatorBlocked", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); };
        visitor.handle("source", setter, commonmodule::SourceKind_descriptor());
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_test(value); };
        visitor.handle("test", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); };
        visitor.handle("validity", setter, commonmodule::ValidityKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_CMV(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("cVal", commonmodule::Vector::descriptor()))
    {
        visit_commonmodule_Vector([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_cval(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_units(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_MV(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_mag(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("q", commonmodule::Quality::descriptor()))
    {
        visit_commonmodule_Quality([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_q(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("t", commonmodule::Timestamp::descriptor()))
    {
        visit_commonmodule_Timestamp([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_t(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("units", commonmodule::Unit::descriptor()))
    {
        visit_commonmodule_Unit([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_units(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_Int32Value(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, int32_t> setter = [context](essmodule::ESSReadingProfile& profile, const int32_t& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_PhaseMMTN(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("phsA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsAB", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsab(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsB", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsBC", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsbc(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsC", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsCA", commonmodule::ReadingMMTN::descriptor()))
    {
        visit_commonmodule_ReadingMMTN([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsca(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_BoolValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_ReadingMMTR(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DmdVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DmdVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DmdWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("SupVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("SupVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("SupWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("TotVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("TotVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("TotWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ACDCTerminal(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("identifiedObject", commonmodule::IdentifiedObject::descriptor()))
    {
        visit_commonmodule_IdentifiedObject([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("connected", google::protobuf::BoolValue::descriptor()))
    {
        visit_google_protobuf_BoolValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_connected(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("sequenceNumber", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_sequencenumber(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_essmodule_ESSReading(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("conductingEquipmentTerminalReading", commonmodule::ConductingEquipmentTerminalReading::descriptor()))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_conductingequipmentterminalreading(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phaseMMTN", commonmodule::PhaseMMTN::descriptor()))
    {
        visit_commonmodule_PhaseMMTN([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("readingMMTR", commonmodule::ReadingMMTR::descriptor()))
    {
        visit_commonmodule_ReadingMMTR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("readingMMXU", commonmodule::ReadingMMXU::descriptor()))
    {
        visit_commonmodule_ReadingMMXU([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, std::string> setter = [context](essmodule::ESSReadingProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, uint32_t> setter = [context](essmodule::ESSReadingProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, uint64_t> setter = [context](essmodule::ESSReadingProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    if(visitor.start_message_field("tq", commonmodule::TimeQuality::descriptor()))
    {
        visit_commonmodule_TimeQuality([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_tq(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_Terminal(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("aCDCTerminal", commonmodule::ACDCTerminal::descriptor()))
    {
        visit_commonmodule_ACDCTerminal([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_acdcterminal(); }, visitor);
    }
    visitor.end_message_field();

    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_phases(static_cast<commonmodule::PhaseCodeKind>(value)); };
        visitor.handle("phases", setter, commonmodule::PhaseCodeKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_ConductingEquipmentTerminalReading(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("terminal", commonmodule::Terminal::descriptor()))
    {
        visit_commonmodule_Terminal([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_terminal(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ReadingMessageInfo(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("messageInfo", commonmodule::MessageInfo::descriptor()))
    {
        visit_commonmodule_MessageInfo([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_messageinfo(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_badreference(value); };
        visitor.handle("badReference", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_failure(value); };
        visitor.handle("failure", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_inaccurate(value); };
        visitor.handle("inaccurate", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_inconsistent(value); };
        visitor.handle("inconsistent", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_olddata(value); };
        visitor.handle("oldData", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_oscillatory(value); };
        visitor.handle("oscillatory", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_outofrange(value); };
        visitor.handle("outOfRange", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_overflow(value); };
        visitor.handle("overflow", setter);
    }
}

template <class C>
void visit_commonmodule_ReadingMMXU(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("A", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_a(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("ClcMth", commonmodule::ENG_CalcMethodKind::descriptor()))
    {
        visit_commonmodule_ENG_CalcMethodKind([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_clcmth(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("Hz", commonmodule::MV::descriptor()))
    {
        visit_commonmodule_MV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_hz(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("PF", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_pf(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("PFSign", commonmodule::ENG_PFSignKind::descriptor()))
    {
        visit_commonmodule_ENG_PFSignKind([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_pfsign(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("PhV", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phv(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("PPV", commonmodule::DEL::descriptor()))
    {
        visit_commonmodule_DEL([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_ppv(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("VA", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_va(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("VAr", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_var(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("W", commonmodule::WYE::descriptor()))
    {
        visit_commonmodule_WYE([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_w(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_Vector(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("ang", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_ang(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mag", commonmodule::AnalogueValue::descriptor()))
    {
        visit_commonmodule_AnalogueValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_mag(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENG_CalcMethodKind(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::CalcMethodKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::CalcMethodKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_WYE(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("net", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_net(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("neut", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_neut(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsA", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsa(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsB", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsb(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("phsC", commonmodule::CMV::descriptor()))
    {
        visit_commonmodule_CMV([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_phsc(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("description", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_description(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("mRID", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_mrid(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("name", google::protobuf::StringValue::descriptor()))
    {
        visit_google_protobuf_StringValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_name(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ReadingMMTN(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("logicalNode", commonmodule::LogicalNode::descriptor()))
    {
        visit_commonmodule_LogicalNode([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DmdVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DmdVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("DmdWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("SupVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvah(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("SupVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supvarh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("SupWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_supwh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("TotVAh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvah(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("TotVArh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totvarh(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("TotWh", commonmodule::BCR::descriptor()))
    {
        visit_commonmodule_BCR([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_totwh(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    if(visitor.start_message_field("f", google::protobuf::FloatValue::descriptor()))
    {
        visit_google_protobuf_FloatValue([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_f(); }, visitor);
    }
    visitor.end_message_field();

    if(visitor.start_message_field("i", google::protobuf::Int32Value::descriptor()))
    {
        visit_google_protobuf_Int32Value([context](essmodule::ESSReadingProfile& profile) { return context(profile)->mutable_i(); }, visitor);
    }
    visitor.end_message_field();
}

template <class C>
void visit_commonmodule_ENG_PFSignKind(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::PFSignKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::PFSignKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Unit(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); };
        visitor.handle("multiplier", setter, commonmodule::UnitMultiplierKind_descriptor());
    }

    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("SIUnit", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, IConfigModelVisitor<essmodule::ESSReadingProfile>& visitor)
{
    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, bool> setter = [context](essmodule::ESSReadingProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<essmodule::ESSReadingProfile, int> setter = [context](essmodule::ESSReadingProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

} // end namespace adapter
