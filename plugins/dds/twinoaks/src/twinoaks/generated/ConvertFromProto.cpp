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

#include "ConvertFromProto.h"

#include "../ConvertFromProtoHelpers.h"

namespace adapter {

namespace dds {

// ---- forward declare the conversion routines for the child types ---

void convert_from_proto(const commonmodule::Timestamp& in, twinoaks::commonmodule::Timestamp& out);

void convert_from_proto(const commonmodule::WYE& in, twinoaks::commonmodule::WYE& out);

void convert_from_proto(const commonmodule::CMV& in, twinoaks::commonmodule::CMV& out);

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, twinoaks::commonmodule::ConductingEquipmentTerminalReading& out);

void convert_from_proto(const commonmodule::Quality& in, twinoaks::commonmodule::Quality& out);

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, twinoaks::commonmodule::ENG_CalcMethodKind& out);

void convert_from_proto(const commonmodule::TimeQuality& in, twinoaks::commonmodule::TimeQuality& out);

void convert_from_proto(const commonmodule::ACDCTerminal& in, twinoaks::commonmodule::ACDCTerminal& out);

void convert_from_proto(const breakermodule::BreakerReading& in, twinoaks::breakermodule::BreakerReading& out);

void convert_from_proto(const commonmodule::Terminal& in, twinoaks::commonmodule::Terminal& out);

void convert_from_proto(const commonmodule::BCR& in, twinoaks::commonmodule::BCR& out);

void convert_from_proto(const commonmodule::IdentifiedObject& in, twinoaks::commonmodule::IdentifiedObject& out);

void convert_from_proto(const resourcemodule::ResourceReading& in, twinoaks::resourcemodule::ResourceReading& out);

void convert_from_proto(const commonmodule::ReadingMMTR& in, twinoaks::commonmodule::ReadingMMTR& out);

void convert_from_proto(const commonmodule::IED& in, twinoaks::commonmodule::IED& out);

void convert_from_proto(const commonmodule::PhaseMMTN& in, twinoaks::commonmodule::PhaseMMTN& out);

void convert_from_proto(const commonmodule::NamedObject& in, twinoaks::commonmodule::NamedObject& out);

void convert_from_proto(const commonmodule::ReadingMMXU& in, twinoaks::commonmodule::ReadingMMXU& out);

void convert_from_proto(const commonmodule::AnalogueValue& in, twinoaks::commonmodule::AnalogueValue& out);

void convert_from_proto(const commonmodule::Vector& in, twinoaks::commonmodule::Vector& out);

void convert_from_proto(const commonmodule::LogicalNode& in, twinoaks::commonmodule::LogicalNode& out);

void convert_from_proto(const commonmodule::MessageInfo& in, twinoaks::commonmodule::MessageInfo& out);

void convert_from_proto(const commonmodule::MV& in, twinoaks::commonmodule::MV& out);

void convert_from_proto(const commonmodule::ConductingEquipment& in, twinoaks::commonmodule::ConductingEquipment& out);

void convert_from_proto(const commonmodule::Unit& in, twinoaks::commonmodule::Unit& out);

void convert_from_proto(const breakermodule::Breaker& in, twinoaks::breakermodule::Breaker& out);

void convert_from_proto(const commonmodule::Meter& in, twinoaks::commonmodule::Meter& out);

void convert_from_proto(const commonmodule::DetailQual& in, twinoaks::commonmodule::DetailQual& out);

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, twinoaks::commonmodule::ReadingMessageInfo& out);

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, twinoaks::commonmodule::ENG_PFSignKind& out);

void convert_from_proto(const commonmodule::DEL& in, twinoaks::commonmodule::DEL& out);

void convert_from_proto(const commonmodule::ReadingMMTN& in, twinoaks::commonmodule::ReadingMMTN& out);

// ---- implement the top level profile conversion routines ---

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, twinoaks::resourcemodule::ResourceReadingProfile& out)
{
    out.clear();
    // convert message fields
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type
    convert_from_proto(in.ied(), out.ied); // required field in DDS
    convert_from_proto(in.meter(), out.meter); // required field in DDS
    convert_from_proto(in.resourcereading(), out.resourceReading); // required field in DDS
}

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, twinoaks::breakermodule::BreakerReadingProfile& out)
{
    out.clear();
    // convert message fields
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type
    convert_from_proto(in.breaker(), out.breaker); // required field in DDS
    for(const auto& input : in.breakerreading())
    {
        twinoaks::breakermodule::BreakerReading ouput;
        convert_from_proto(input, ouput);
        out.breakerReading.push_back(ouput);
    }
    convert_from_proto(in.ied(), out.ied); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_from_proto(const commonmodule::Timestamp& in, twinoaks::commonmodule::Timestamp& out)
{
    out.clear();
    // convert message fields
    if(in.has_tq())
    {
        out.tq = new twinoaks::commonmodule::TimeQuality();
        convert_from_proto(in.tq(), *out.tq);
    }
    // convert primitive fields
    out.fraction = convert(in.fraction());
    out.seconds = convert(in.seconds());
}

void convert_from_proto(const commonmodule::WYE& in, twinoaks::commonmodule::WYE& out)
{
    out.clear();
    // convert message fields
    if(in.has_net())
    {
        out.net = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.net(), *out.net);
    }
    if(in.has_neut())
    {
        out.neut = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.neut(), *out.neut);
    }
    if(in.has_phsa())
    {
        out.phsA = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsa(), *out.phsA);
    }
    if(in.has_phsb())
    {
        out.phsB = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsb(), *out.phsB);
    }
    if(in.has_phsc())
    {
        out.phsC = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsc(), *out.phsC);
    }
}

void convert_from_proto(const commonmodule::CMV& in, twinoaks::commonmodule::CMV& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.cval(), out.cVal); // required field in DDS
    convert_from_proto(in.q(), out.q); // required field in DDS
    convert_from_proto(in.t(), out.t); // required field in DDS
    if(in.has_units())
    {
        out.units = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.units(), *out.units);
    }
}

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, twinoaks::commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.terminal(), out.terminal); // required field in DDS
}

void convert_from_proto(const commonmodule::Quality& in, twinoaks::commonmodule::Quality& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.detailqual(), out.detailQual); // required field in DDS
    // convert primitive fields
    out.operatorBlocked = convert(in.operatorblocked());
    out.source = static_cast<twinoaks::commonmodule::SourceKind>(in.source());
    out.test = convert(in.test());
    out.validity = static_cast<twinoaks::commonmodule::ValidityKind>(in.validity());
}

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, twinoaks::commonmodule::ENG_CalcMethodKind& out)
{
    out.clear();
    // convert primitive fields
    out.setVal = static_cast<twinoaks::commonmodule::CalcMethodKind>(in.setval());
}

void convert_from_proto(const commonmodule::TimeQuality& in, twinoaks::commonmodule::TimeQuality& out)
{
    out.clear();
    // convert primitive fields
    out.clockFailure = convert(in.clockfailure());
    out.clockNotSynchronized = convert(in.clocknotsynchronized());
    out.leapSecondsKnown = convert(in.leapsecondsknown());
    out.timeAccuracy = static_cast<twinoaks::commonmodule::TimeAccuracyKind>(in.timeaccuracy());
}

void convert_from_proto(const commonmodule::ACDCTerminal& in, twinoaks::commonmodule::ACDCTerminal& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
    // convert wrapped primitive fields
    if(in.has_connected()) out.connected = allocate(in.connected().value());
    if(in.has_sequencenumber()) out.sequenceNumber = allocate(in.sequencenumber().value());
}

void convert_from_proto(const breakermodule::BreakerReading& in, twinoaks::breakermodule::BreakerReading& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type
    if(in.has_diffreadingmmxu())
    {
        out.diffReadingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.diffreadingmmxu(), *out.diffReadingMMXU);
    }
    if(in.has_phasemmtn())
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }
    if(in.has_readingmmtr())
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }
    if(in.has_readingmmxu())
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const commonmodule::Terminal& in, twinoaks::commonmodule::Terminal& out)
{
    out.clear();
    // convert message fields
    if(in.has_acdcterminal()) convert_from_proto(in.acdcterminal(), out); // inherited type
    // convert primitive fields
    out.phases = allocate_enum<twinoaks::commonmodule::PhaseCodeKind>(in.phases());
}

void convert_from_proto(const commonmodule::BCR& in, twinoaks::commonmodule::BCR& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.q(), out.q); // required field in DDS
    convert_from_proto(in.t(), out.t); // required field in DDS
    // convert primitive fields
    out.actVal = convert(in.actval());
    out.units = allocate_enum<twinoaks::commonmodule::UnitSymbolKind>(in.units());
}

void convert_from_proto(const commonmodule::IdentifiedObject& in, twinoaks::commonmodule::IdentifiedObject& out)
{
    out.clear();
    // convert wrapped primitive fields
    if(in.has_description()) out.description = allocate(in.description().value());
    if(in.has_mrid()) out.mRID = allocate(in.mrid().value());
    if(in.has_name()) out.name = allocate(in.name().value());
}

void convert_from_proto(const resourcemodule::ResourceReading& in, twinoaks::resourcemodule::ResourceReading& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type
    if(in.has_phasemmtn())
    {
        out.phaseMMTN = new twinoaks::commonmodule::PhaseMMTN();
        convert_from_proto(in.phasemmtn(), *out.phaseMMTN);
    }
    if(in.has_readingmmtr())
    {
        out.readingMMTR = new twinoaks::commonmodule::ReadingMMTR();
        convert_from_proto(in.readingmmtr(), *out.readingMMTR);
    }
    if(in.has_readingmmxu())
    {
        out.readingMMXU = new twinoaks::commonmodule::ReadingMMXU();
        convert_from_proto(in.readingmmxu(), *out.readingMMXU);
    }
}

void convert_from_proto(const commonmodule::ReadingMMTR& in, twinoaks::commonmodule::ReadingMMTR& out)
{
    out.clear();
    // convert message fields
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
    if(in.has_dmdvah())
    {
        out.DmdVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvah(), *out.DmdVAh);
    }
    if(in.has_dmdvarh())
    {
        out.DmdVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvarh(), *out.DmdVArh);
    }
    if(in.has_dmdwh())
    {
        out.DmdWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdwh(), *out.DmdWh);
    }
    if(in.has_supvah())
    {
        out.SupVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvah(), *out.SupVAh);
    }
    if(in.has_supvarh())
    {
        out.SupVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvarh(), *out.SupVArh);
    }
    if(in.has_supwh())
    {
        out.SupWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supwh(), *out.SupWh);
    }
    if(in.has_totvah())
    {
        out.TotVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvah(), *out.TotVAh);
    }
    if(in.has_totvarh())
    {
        out.TotVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvarh(), *out.TotVArh);
    }
    if(in.has_totwh())
    {
        out.TotWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totwh(), *out.TotWh);
    }
}

void convert_from_proto(const commonmodule::IED& in, twinoaks::commonmodule::IED& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::PhaseMMTN& in, twinoaks::commonmodule::PhaseMMTN& out)
{
    out.clear();
    // convert message fields
    if(in.has_phsa())
    {
        out.phsA = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsa(), *out.phsA);
    }
    if(in.has_phsab())
    {
        out.phsAB = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsab(), *out.phsAB);
    }
    if(in.has_phsb())
    {
        out.phsB = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsb(), *out.phsB);
    }
    if(in.has_phsbc())
    {
        out.phsBC = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsbc(), *out.phsBC);
    }
    if(in.has_phsc())
    {
        out.phsC = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsc(), *out.phsC);
    }
    if(in.has_phsca())
    {
        out.phsCA = new twinoaks::commonmodule::ReadingMMTN();
        convert_from_proto(in.phsca(), *out.phsCA);
    }
}

void convert_from_proto(const commonmodule::NamedObject& in, twinoaks::commonmodule::NamedObject& out)
{
    out.clear();
    // convert wrapped primitive fields
    if(in.has_description()) out.description = allocate(in.description().value());
    if(in.has_name()) out.name = allocate(in.name().value());
}

void convert_from_proto(const commonmodule::ReadingMMXU& in, twinoaks::commonmodule::ReadingMMXU& out)
{
    out.clear();
    // convert message fields
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
    if(in.has_a())
    {
        out.A = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.a(), *out.A);
    }
    if(in.has_clcmth())
    {
        out.ClcMth = new twinoaks::commonmodule::ENG_CalcMethodKind();
        convert_from_proto(in.clcmth(), *out.ClcMth);
    }
    if(in.has_hz())
    {
        out.Hz = new twinoaks::commonmodule::MV();
        convert_from_proto(in.hz(), *out.Hz);
    }
    if(in.has_pf())
    {
        out.PF = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.pf(), *out.PF);
    }
    if(in.has_pfsign())
    {
        out.PFSign = new twinoaks::commonmodule::ENG_PFSignKind();
        convert_from_proto(in.pfsign(), *out.PFSign);
    }
    if(in.has_phv())
    {
        out.PhV = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.phv(), *out.PhV);
    }
    if(in.has_ppv())
    {
        out.PPV = new twinoaks::commonmodule::DEL();
        convert_from_proto(in.ppv(), *out.PPV);
    }
    if(in.has_va())
    {
        out.VA = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.va(), *out.VA);
    }
    if(in.has_var())
    {
        out.VAr = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.var(), *out.VAr);
    }
    if(in.has_w())
    {
        out.W = new twinoaks::commonmodule::WYE();
        convert_from_proto(in.w(), *out.W);
    }
}

void convert_from_proto(const commonmodule::AnalogueValue& in, twinoaks::commonmodule::AnalogueValue& out)
{
    out.clear();
    // convert wrapped primitive fields
    if(in.has_f()) out.f = allocate(in.f().value());
    if(in.has_i()) out.i = allocate(in.i().value());
}

void convert_from_proto(const commonmodule::Vector& in, twinoaks::commonmodule::Vector& out)
{
    out.clear();
    // convert message fields
    if(in.has_ang())
    {
        out.ang = new twinoaks::commonmodule::AnalogueValue();
        convert_from_proto(in.ang(), *out.ang);
    }
    convert_from_proto(in.mag(), out.mag); // required field in DDS
}

void convert_from_proto(const commonmodule::LogicalNode& in, twinoaks::commonmodule::LogicalNode& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::MessageInfo& in, twinoaks::commonmodule::MessageInfo& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
    convert_from_proto(in.messagetimestamp(), out.messageTimeStamp); // required field in DDS
}

void convert_from_proto(const commonmodule::MV& in, twinoaks::commonmodule::MV& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.mag(), out.mag); // required field in DDS
    convert_from_proto(in.q(), out.q); // required field in DDS
    convert_from_proto(in.t(), out.t); // required field in DDS
    if(in.has_units())
    {
        out.units = new twinoaks::commonmodule::Unit();
        convert_from_proto(in.units(), *out.units);
    }
}

void convert_from_proto(const commonmodule::ConductingEquipment& in, twinoaks::commonmodule::ConductingEquipment& out)
{
    out.clear();
    // convert message fields
    if(in.has_namedobject()) convert_from_proto(in.namedobject(), out); // inherited type
    // convert primitive fields
    out.mRID = convert(in.mrid());
}

void convert_from_proto(const commonmodule::Unit& in, twinoaks::commonmodule::Unit& out)
{
    out.clear();
    // convert primitive fields
    out.multiplier = allocate_enum<twinoaks::commonmodule::UnitMultiplierKind>(in.multiplier());
    out.SIUnit = static_cast<twinoaks::commonmodule::UnitSymbolKind>(in.siunit());
}

void convert_from_proto(const breakermodule::Breaker& in, twinoaks::breakermodule::Breaker& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const commonmodule::Meter& in, twinoaks::commonmodule::Meter& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const commonmodule::DetailQual& in, twinoaks::commonmodule::DetailQual& out)
{
    out.clear();
    // convert primitive fields
    out.badReference = convert(in.badreference());
    out.failure = convert(in.failure());
    out.inaccurate = convert(in.inaccurate());
    out.inconsistent = convert(in.inconsistent());
    out.oldData = convert(in.olddata());
    out.oscillatory = convert(in.oscillatory());
    out.outOfRange = convert(in.outofrange());
    out.overflow = convert(in.overflow());
}

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, twinoaks::commonmodule::ReadingMessageInfo& out)
{
    out.clear();
    // convert message fields
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, twinoaks::commonmodule::ENG_PFSignKind& out)
{
    out.clear();
    // convert primitive fields
    out.setVal = static_cast<twinoaks::commonmodule::PFSignKind>(in.setval());
}

void convert_from_proto(const commonmodule::DEL& in, twinoaks::commonmodule::DEL& out)
{
    out.clear();
    // convert message fields
    if(in.has_phsab())
    {
        out.phsAB = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsab(), *out.phsAB);
    }
    if(in.has_phsbc())
    {
        out.phsBC = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsbc(), *out.phsBC);
    }
    if(in.has_phsca())
    {
        out.phsCA = new twinoaks::commonmodule::CMV();
        convert_from_proto(in.phsca(), *out.phsCA);
    }
}

void convert_from_proto(const commonmodule::ReadingMMTN& in, twinoaks::commonmodule::ReadingMMTN& out)
{
    out.clear();
    // convert message fields
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
    if(in.has_dmdvah())
    {
        out.DmdVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvah(), *out.DmdVAh);
    }
    if(in.has_dmdvarh())
    {
        out.DmdVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdvarh(), *out.DmdVArh);
    }
    if(in.has_dmdwh())
    {
        out.DmdWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.dmdwh(), *out.DmdWh);
    }
    if(in.has_supvah())
    {
        out.SupVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvah(), *out.SupVAh);
    }
    if(in.has_supvarh())
    {
        out.SupVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supvarh(), *out.SupVArh);
    }
    if(in.has_supwh())
    {
        out.SupWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.supwh(), *out.SupWh);
    }
    if(in.has_totvah())
    {
        out.TotVAh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvah(), *out.TotVAh);
    }
    if(in.has_totvarh())
    {
        out.TotVArh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totvarh(), *out.TotVArh);
    }
    if(in.has_totwh())
    {
        out.TotWh = new twinoaks::commonmodule::BCR();
        convert_from_proto(in.totwh(), *out.TotWh);
    }
}

// ---- static assertions related to enums
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_DIFF) == static_cast<int>(twinoaks::commonmodule::CalcMethodKind::CalcMethodKind_DIFF), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_none) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_other) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_C) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_C), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_CN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_CN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AC) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_AC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ACN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ACN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_B) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_B), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_BN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BC) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_BC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BCN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_BCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_A) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_A), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_AN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AB) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_AB), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ABN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABC) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ABC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s2N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s1N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s12), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12N) == static_cast<int>(twinoaks::commonmodule::PhaseCodeKind::PhaseCodeKind_s12N), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_none) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_meter) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_meter), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_gram) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_gram), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Amp) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Amp), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_deg) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_deg), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_rad) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_rad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degC) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_degC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Farad) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Farad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_sec) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_sec), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Henry) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Henry), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_V) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_V), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_ohm) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_ohm), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Joule) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Joule), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Newton) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Newton), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Hz) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Hz), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_W) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_W), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Pa) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Pa), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m2) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_m2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VA) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAr) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VAr), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAh) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VAh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Wh) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Wh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VArh) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_VArh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_other) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Ah) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_Ah), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_min) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_min), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hour) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_hour), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m3) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_m3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degF) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_degF), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_mph) == static_cast<int>(twinoaks::commonmodule::UnitSymbolKind::UnitSymbolKind_mph), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_none) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_other) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera) == static_cast<int>(twinoaks::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_good) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_good), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_invalid) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_invalid), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_reserved) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_reserved), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_questionable) == static_cast<int>(twinoaks::commonmodule::ValidityKind::ValidityKind_questionable), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified) == static_cast<int>(twinoaks::commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_IEC) == static_cast<int>(twinoaks::commonmodule::PFSignKind::PFSignKind_IEC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_EEI) == static_cast<int>(twinoaks::commonmodule::PFSignKind::PFSignKind_EEI), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_process) == static_cast<int>(twinoaks::commonmodule::SourceKind::SourceKind_process), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_substituted) == static_cast<int>(twinoaks::commonmodule::SourceKind::SourceKind_substituted), "mismatched enum values");

} // end namespace dds

} // end namespace adapter
