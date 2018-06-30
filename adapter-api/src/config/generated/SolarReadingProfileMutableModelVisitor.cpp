#include "adapter-api/config/generated/SolarReadingProfileMutableModelVisitor.h"
#include "../DescriptorPathImpl.h"

namespace adapter {

// ---- forward declare all the template method for child types ----

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_solarmodule_SolarReading(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_DEL(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_BCR(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_CMV(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_MV(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_google_protobuf_Int32Value(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_PhaseMMTN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_google_protobuf_BoolValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMMTR(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ACDCTerminal(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Terminal(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ConductingEquipmentTerminalReading(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMMXU(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Vector(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_CalcMethodKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_WYE(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ReadingMMTN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_solarmodule_SolarInverter(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_ENG_PFSignKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_Unit(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor);

// ---- the exposed visit function ----

void visit(IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    DescriptorPathImpl path;

    // this is so that we can reuse the same generators for child visitors
    const auto context = [](solarmodule::SolarReadingProfile& profile) { return &profile; };

    path.push(commonmodule::ReadingMessageInfo::descriptor());
    if(visitor.start_message_field("readingMessageInfo", path))
    {
        visit_commonmodule_ReadingMessageInfo([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_readingmessageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::IED::descriptor());
    if(visitor.start_message_field("ied", path))
    {
        visit_commonmodule_IED([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_ied(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarInverter::descriptor());
    if(visitor.start_message_field("solarInverter", path))
    {
        visit_solarmodule_SolarInverter([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_solarinverter(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(solarmodule::SolarReading::descriptor());
    if(visitor.start_message_field("solarReading", path))
    {
        visit_solarmodule_SolarReading([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_solarreading(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

// ---- template definitions for child types ----

template <class C>
void visit_google_protobuf_FloatValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, float> setter = [context](solarmodule::SolarReadingProfile& profile, const float& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_solarmodule_SolarReading(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipmentTerminalReading::descriptor());
    if(visitor.start_message_field("conductingEquipmentTerminalReading", path))
    {
        visit_commonmodule_ConductingEquipmentTerminalReading([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_conductingequipmentterminalreading(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::PhaseMMTN::descriptor());
    if(visitor.start_message_field("phaseMMTN", path))
    {
        visit_commonmodule_PhaseMMTN([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phasemmtn(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ReadingMMTR::descriptor());
    if(visitor.start_message_field("readingMMTR", path))
    {
        visit_commonmodule_ReadingMMTR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_readingmmtr(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ReadingMMXU::descriptor());
    if(visitor.start_message_field("readingMMXU", path))
    {
        visit_commonmodule_ReadingMMXU([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_readingmmxu(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_LogicalNode(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_DEL(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("phsAB", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsab(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("phsBC", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsbc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("phsCA", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsca(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IED(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ConductingEquipment(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::NamedObject::descriptor());
    if(visitor.start_message_field("namedObject", path))
    {
        visit_commonmodule_NamedObject([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_namedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarReadingProfile, std::string> setter = [context](solarmodule::SolarReadingProfile& profile, const std::string& value) { context(profile)->set_mrid(value); };
        visitor.handle("mRID", setter);
    }
}

template <class C>
void visit_commonmodule_MessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("messageTimeStamp", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_messagetimestamp(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_BCR(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, int64_t> setter = [context](solarmodule::SolarReadingProfile& profile, const int64_t& value) { context(profile)->set_actval(value); };
        visitor.handle("actVal", setter);
    }

    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_units(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("units", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Quality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::DetailQual::descriptor());
    if(visitor.start_message_field("detailQual", path))
    {
        visit_commonmodule_DetailQual([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_detailqual(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_operatorblocked(value); };
        visitor.handle("operatorBlocked", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_source(static_cast<commonmodule::SourceKind>(value)); };
        visitor.handle("source", setter, commonmodule::SourceKind_descriptor());
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_test(value); };
        visitor.handle("test", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_validity(static_cast<commonmodule::ValidityKind>(value)); };
        visitor.handle("validity", setter, commonmodule::ValidityKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_CMV(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::Vector::descriptor());
    if(visitor.start_message_field("cVal", path))
    {
        visit_commonmodule_Vector([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_cval(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Unit::descriptor());
    if(visitor.start_message_field("units", path))
    {
        visit_commonmodule_Unit([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_units(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_MV(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::AnalogueValue::descriptor());
    if(visitor.start_message_field("mag", path))
    {
        visit_commonmodule_AnalogueValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_mag(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Quality::descriptor());
    if(visitor.start_message_field("q", path))
    {
        visit_commonmodule_Quality([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_q(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Timestamp::descriptor());
    if(visitor.start_message_field("t", path))
    {
        visit_commonmodule_Timestamp([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_t(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::Unit::descriptor());
    if(visitor.start_message_field("units", path))
    {
        visit_commonmodule_Unit([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_units(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_Int32Value(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, int32_t> setter = [context](solarmodule::SolarReadingProfile& profile, const int32_t& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_PhaseMMTN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::ReadingMMTN::descriptor());
    if(visitor.start_message_field("phsA", path))
    {
        visit_commonmodule_ReadingMMTN([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ReadingMMTN::descriptor());
    if(visitor.start_message_field("phsAB", path))
    {
        visit_commonmodule_ReadingMMTN([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsab(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ReadingMMTN::descriptor());
    if(visitor.start_message_field("phsB", path))
    {
        visit_commonmodule_ReadingMMTN([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ReadingMMTN::descriptor());
    if(visitor.start_message_field("phsBC", path))
    {
        visit_commonmodule_ReadingMMTN([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsbc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ReadingMMTN::descriptor());
    if(visitor.start_message_field("phsC", path))
    {
        visit_commonmodule_ReadingMMTN([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ReadingMMTN::descriptor());
    if(visitor.start_message_field("phsCA", path))
    {
        visit_commonmodule_ReadingMMTN([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsca(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_BoolValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_ReadingMMTR(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("DmdVAh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("DmdVArh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("DmdWh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("SupVAh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("SupVArh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("SupWh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("TotVAh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("TotVArh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("TotWh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ACDCTerminal(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::IdentifiedObject::descriptor());
    if(visitor.start_message_field("identifiedObject", path))
    {
        visit_commonmodule_IdentifiedObject([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_identifiedobject(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::BoolValue::descriptor());
    if(visitor.start_message_field("connected", path))
    {
        visit_google_protobuf_BoolValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_connected(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::Int32Value::descriptor());
    if(visitor.start_message_field("sequenceNumber", path))
    {
        visit_google_protobuf_Int32Value([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_sequencenumber(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_google_protobuf_StringValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, std::string> setter = [context](solarmodule::SolarReadingProfile& profile, const std::string& value) { context(profile)->set_value(value); };
        visitor.handle("value", setter);
    }
}

template <class C>
void visit_commonmodule_Timestamp(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, uint32_t> setter = [context](solarmodule::SolarReadingProfile& profile, const uint32_t& value) { context(profile)->set_fraction(value); };
        visitor.handle("fraction", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, uint64_t> setter = [context](solarmodule::SolarReadingProfile& profile, const uint64_t& value) { context(profile)->set_seconds(value); };
        visitor.handle("seconds", setter);
    }

    path.push(commonmodule::TimeQuality::descriptor());
    if(visitor.start_message_field("tq", path))
    {
        visit_commonmodule_TimeQuality([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_tq(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_Terminal(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::ACDCTerminal::descriptor());
    if(visitor.start_message_field("aCDCTerminal", path))
    {
        visit_commonmodule_ACDCTerminal([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_acdcterminal(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_phases(static_cast<commonmodule::PhaseCodeKind>(value)); };
        visitor.handle("phases", setter, commonmodule::PhaseCodeKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_ConductingEquipmentTerminalReading(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::Terminal::descriptor());
    if(visitor.start_message_field("terminal", path))
    {
        visit_commonmodule_Terminal([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_terminal(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ReadingMessageInfo(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::MessageInfo::descriptor());
    if(visitor.start_message_field("messageInfo", path))
    {
        visit_commonmodule_MessageInfo([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_messageinfo(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_DetailQual(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_badreference(value); };
        visitor.handle("badReference", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_failure(value); };
        visitor.handle("failure", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_inaccurate(value); };
        visitor.handle("inaccurate", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_inconsistent(value); };
        visitor.handle("inconsistent", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_olddata(value); };
        visitor.handle("oldData", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_oscillatory(value); };
        visitor.handle("oscillatory", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_outofrange(value); };
        visitor.handle("outOfRange", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_overflow(value); };
        visitor.handle("overflow", setter);
    }
}

template <class C>
void visit_commonmodule_ReadingMMXU(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::WYE::descriptor());
    if(visitor.start_message_field("A", path))
    {
        visit_commonmodule_WYE([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_a(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENG_CalcMethodKind::descriptor());
    if(visitor.start_message_field("ClcMth", path))
    {
        visit_commonmodule_ENG_CalcMethodKind([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_clcmth(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::MV::descriptor());
    if(visitor.start_message_field("Hz", path))
    {
        visit_commonmodule_MV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_hz(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::WYE::descriptor());
    if(visitor.start_message_field("PF", path))
    {
        visit_commonmodule_WYE([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_pf(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::ENG_PFSignKind::descriptor());
    if(visitor.start_message_field("PFSign", path))
    {
        visit_commonmodule_ENG_PFSignKind([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_pfsign(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::WYE::descriptor());
    if(visitor.start_message_field("PhV", path))
    {
        visit_commonmodule_WYE([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phv(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::DEL::descriptor());
    if(visitor.start_message_field("PPV", path))
    {
        visit_commonmodule_DEL([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_ppv(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::WYE::descriptor());
    if(visitor.start_message_field("VA", path))
    {
        visit_commonmodule_WYE([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_va(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::WYE::descriptor());
    if(visitor.start_message_field("VAr", path))
    {
        visit_commonmodule_WYE([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_var(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::WYE::descriptor());
    if(visitor.start_message_field("W", path))
    {
        visit_commonmodule_WYE([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_w(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_Vector(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::AnalogueValue::descriptor());
    if(visitor.start_message_field("ang", path))
    {
        visit_commonmodule_AnalogueValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_ang(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::AnalogueValue::descriptor());
    if(visitor.start_message_field("mag", path))
    {
        visit_commonmodule_AnalogueValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_mag(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENG_CalcMethodKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::CalcMethodKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::CalcMethodKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_WYE(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("net", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_net(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("neut", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_neut(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("phsA", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsa(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("phsB", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsb(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::CMV::descriptor());
    if(visitor.start_message_field("phsC", path))
    {
        visit_commonmodule_CMV([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_phsc(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_NamedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_IdentifiedObject(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("description", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_description(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("mRID", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_mrid(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::StringValue::descriptor());
    if(visitor.start_message_field("name", path))
    {
        visit_google_protobuf_StringValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_name(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ReadingMMTN(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::LogicalNode::descriptor());
    if(visitor.start_message_field("logicalNode", path))
    {
        visit_commonmodule_LogicalNode([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_logicalnode(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("DmdVAh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvah(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("DmdVArh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdvarh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("DmdWh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_dmdwh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("SupVAh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvah(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("SupVArh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supvarh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("SupWh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_supwh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("TotVAh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvah(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("TotVArh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totvarh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(commonmodule::BCR::descriptor());
    if(visitor.start_message_field("TotWh", path))
    {
        visit_commonmodule_BCR([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_totwh(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_AnalogueValue(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(google::protobuf::FloatValue::descriptor());
    if(visitor.start_message_field("f", path))
    {
        visit_google_protobuf_FloatValue([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_f(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();

    path.push(google::protobuf::Int32Value::descriptor());
    if(visitor.start_message_field("i", path))
    {
        visit_google_protobuf_Int32Value([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_i(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_solarmodule_SolarInverter(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    path.push(commonmodule::ConductingEquipment::descriptor());
    if(visitor.start_message_field("conductingEquipment", path))
    {
        visit_commonmodule_ConductingEquipment([context](solarmodule::SolarReadingProfile& profile) { return context(profile)->mutable_conductingequipment(); }, path, visitor);
    }
    visitor.end_message_field();
    path.pop();
}

template <class C>
void visit_commonmodule_ENG_PFSignKind(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_setval(static_cast<commonmodule::PFSignKind>(value)); };
        visitor.handle("setVal", setter, commonmodule::PFSignKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_Unit(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(value)); };
        visitor.handle("multiplier", setter, commonmodule::UnitMultiplierKind_descriptor());
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_siunit(static_cast<commonmodule::UnitSymbolKind>(value)); };
        visitor.handle("SIUnit", setter, commonmodule::UnitSymbolKind_descriptor());
    }
}

template <class C>
void visit_commonmodule_TimeQuality(const C& context, DescriptorPathImpl& path, IMutableModelVisitor<solarmodule::SolarReadingProfile>& visitor)
{
    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_clockfailure(value); };
        visitor.handle("clockFailure", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_clocknotsynchronized(value); };
        visitor.handle("clockNotSynchronized", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, bool> setter = [context](solarmodule::SolarReadingProfile& profile, const bool& value) { context(profile)->set_leapsecondsknown(value); };
        visitor.handle("leapSecondsKnown", setter);
    }

    {
        const setter_t<solarmodule::SolarReadingProfile, int> setter = [context](solarmodule::SolarReadingProfile& profile, const int& value) { context(profile)->set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(value)); };
        visitor.handle("timeAccuracy", setter, commonmodule::TimeAccuracyKind_descriptor());
    }
}

} // end namespace adapter
