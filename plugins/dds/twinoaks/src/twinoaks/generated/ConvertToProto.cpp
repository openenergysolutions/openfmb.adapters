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

#include "ConvertToProto.h"

#include "../ConvertToProtoHelpers.h"

namespace adapter {

namespace dds {

// ---- forward declare the conversion routines for the child types ---

void convert_to_proto(const twinoaks::commonmodule::Timestamp& in, commonmodule::Timestamp& out);

void convert_to_proto(const twinoaks::commonmodule::WYE& in, commonmodule::WYE& out);

void convert_to_proto(const twinoaks::commonmodule::CMV& in, commonmodule::CMV& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out);

void convert_to_proto(const twinoaks::commonmodule::Quality& in, commonmodule::Quality& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out);

void convert_to_proto(const twinoaks::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out);

void convert_to_proto(const twinoaks::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out);

void convert_to_proto(const twinoaks::commonmodule::Terminal& in, commonmodule::Terminal& out);

void convert_to_proto(const twinoaks::commonmodule::BCR& in, commonmodule::BCR& out);

void convert_to_proto(const twinoaks::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out);

void convert_to_proto(const twinoaks::commonmodule::IED& in, commonmodule::IED& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out);

void convert_to_proto(const twinoaks::commonmodule::NamedObject& in, commonmodule::NamedObject& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out);

void convert_to_proto(const twinoaks::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out);

void convert_to_proto(const twinoaks::commonmodule::Vector& in, commonmodule::Vector& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out);

void convert_to_proto(const twinoaks::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::MV& in, commonmodule::MV& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out);

void convert_to_proto(const twinoaks::commonmodule::Unit& in, commonmodule::Unit& out);

void convert_to_proto(const twinoaks::breakermodule::Breaker& in, breakermodule::Breaker& out);

void convert_to_proto(const twinoaks::commonmodule::Meter& in, commonmodule::Meter& out);

void convert_to_proto(const twinoaks::commonmodule::DetailQual& in, commonmodule::DetailQual& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out);

void convert_to_proto(const twinoaks::commonmodule::DEL& in, commonmodule::DEL& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out);

// ---- implement the top level profile conversion routines ---

void convert_to_proto(const twinoaks::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type
    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
    convert_to_proto(in.meter, *out.mutable_meter()); // required field in DDS
    convert_to_proto(in.resourceReading, *out.mutable_resourcereading()); // required field in DDS
}

void convert_to_proto(const twinoaks::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type
    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS
    for(decltype(in.breakerReading.length()) i = 0; i < in.breakerReading.length(); ++i)
    {
        convert_to_proto(in.breakerReading.at(i), *out.mutable_breakerreading()->Add());
    }
    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

// ---- implement the conversion routines for the child types ---
void convert_to_proto(const twinoaks::commonmodule::Timestamp& in, commonmodule::Timestamp& out)
{
    out.Clear();
    // convert message fields
    if(in.tq) convert_to_proto(*in.tq, *out.mutable_tq());
    // convert required primitive fields
    out.set_fraction(convert_uint32(in.fraction));
    out.set_seconds(convert_uint64(in.seconds));
}

void convert_to_proto(const twinoaks::commonmodule::WYE& in, commonmodule::WYE& out)
{
    out.Clear();
    // convert message fields
    if(in.net) convert_to_proto(*in.net, *out.mutable_net());
    if(in.neut) convert_to_proto(*in.neut, *out.mutable_neut());
    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());
    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());
    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const twinoaks::commonmodule::CMV& in, commonmodule::CMV& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.cVal, *out.mutable_cval()); // required field in DDS
    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS
    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.terminal, *out.mutable_terminal()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::Quality& in, commonmodule::Quality& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.detailQual, *out.mutable_detailqual()); // required field in DDS
    // convert required primitive fields
    out.set_operatorblocked(convert_bool(in.operatorBlocked));
    out.set_source(static_cast<commonmodule::SourceKind>(in.source));
    out.set_test(convert_bool(in.test));
    out.set_validity(static_cast<commonmodule::ValidityKind>(in.validity));
}

void convert_to_proto(const twinoaks::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out)
{
    out.Clear();
    // convert required primitive fields
    out.set_setval(static_cast<commonmodule::CalcMethodKind>(in.setVal));
}

void convert_to_proto(const twinoaks::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out)
{
    out.Clear();
    // convert required primitive fields
    out.set_clockfailure(convert_bool(in.clockFailure));
    out.set_clocknotsynchronized(convert_bool(in.clockNotSynchronized));
    out.set_leapsecondsknown(convert_bool(in.leapSecondsKnown));
    out.set_timeaccuracy(static_cast<commonmodule::TimeAccuracyKind>(in.timeAccuracy));
}

void convert_to_proto(const twinoaks::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
    // convert optional (wrapped) primitive fields
    if(in.connected) out.mutable_connected()->set_value(*in.connected);
    if(in.sequenceNumber) out.mutable_sequencenumber()->set_value(*in.sequenceNumber);
}

void convert_to_proto(const twinoaks::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type
    if(in.diffReadingMMXU) convert_to_proto(*in.diffReadingMMXU, *out.mutable_diffreadingmmxu());
    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());
    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());
    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::commonmodule::Terminal& in, commonmodule::Terminal& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_acdcterminal()); // inherited type
    // convert required primitive fields
    if(in.phases) out.set_phases(static_cast<commonmodule::PhaseCodeKind>(*in.phases));
}

void convert_to_proto(const twinoaks::commonmodule::BCR& in, commonmodule::BCR& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS
    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
    // convert required primitive fields
    out.set_actval(convert_int64(in.actVal));
    if(in.units) out.set_units(static_cast<commonmodule::UnitSymbolKind>(*in.units));
}

void convert_to_proto(const twinoaks::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out)
{
    out.Clear();
    // convert optional (wrapped) primitive fields
    if(in.description) out.mutable_description()->set_value(in.description);
    if(in.mRID) out.mutable_mrid()->set_value(in.mRID);
    if(in.name) out.mutable_name()->set_value(in.name);
}

void convert_to_proto(const twinoaks::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type
    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());
    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());
    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type
    if(in.DmdVAh) convert_to_proto(*in.DmdVAh, *out.mutable_dmdvah());
    if(in.DmdVArh) convert_to_proto(*in.DmdVArh, *out.mutable_dmdvarh());
    if(in.DmdWh) convert_to_proto(*in.DmdWh, *out.mutable_dmdwh());
    if(in.SupVAh) convert_to_proto(*in.SupVAh, *out.mutable_supvah());
    if(in.SupVArh) convert_to_proto(*in.SupVArh, *out.mutable_supvarh());
    if(in.SupWh) convert_to_proto(*in.SupWh, *out.mutable_supwh());
    if(in.TotVAh) convert_to_proto(*in.TotVAh, *out.mutable_totvah());
    if(in.TotVArh) convert_to_proto(*in.TotVArh, *out.mutable_totvarh());
    if(in.TotWh) convert_to_proto(*in.TotWh, *out.mutable_totwh());
}

void convert_to_proto(const twinoaks::commonmodule::IED& in, commonmodule::IED& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out)
{
    out.Clear();
    // convert message fields
    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());
    if(in.phsAB) convert_to_proto(*in.phsAB, *out.mutable_phsab());
    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());
    if(in.phsBC) convert_to_proto(*in.phsBC, *out.mutable_phsbc());
    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
    if(in.phsCA) convert_to_proto(*in.phsCA, *out.mutable_phsca());
}

void convert_to_proto(const twinoaks::commonmodule::NamedObject& in, commonmodule::NamedObject& out)
{
    out.Clear();
    // convert optional (wrapped) primitive fields
    if(in.description) out.mutable_description()->set_value(in.description);
    if(in.name) out.mutable_name()->set_value(in.name);
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type
    if(in.A) convert_to_proto(*in.A, *out.mutable_a());
    if(in.ClcMth) convert_to_proto(*in.ClcMth, *out.mutable_clcmth());
    if(in.Hz) convert_to_proto(*in.Hz, *out.mutable_hz());
    if(in.PF) convert_to_proto(*in.PF, *out.mutable_pf());
    if(in.PFSign) convert_to_proto(*in.PFSign, *out.mutable_pfsign());
    if(in.PhV) convert_to_proto(*in.PhV, *out.mutable_phv());
    if(in.PPV) convert_to_proto(*in.PPV, *out.mutable_ppv());
    if(in.VA) convert_to_proto(*in.VA, *out.mutable_va());
    if(in.VAr) convert_to_proto(*in.VAr, *out.mutable_var());
    if(in.W) convert_to_proto(*in.W, *out.mutable_w());
}

void convert_to_proto(const twinoaks::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out)
{
    out.Clear();
    // convert optional (wrapped) primitive fields
    if(in.f) out.mutable_f()->set_value(*in.f);
    if(in.i) out.mutable_i()->set_value(*in.i);
}

void convert_to_proto(const twinoaks::commonmodule::Vector& in, commonmodule::Vector& out)
{
    out.Clear();
    // convert message fields
    if(in.ang) convert_to_proto(*in.ang, *out.mutable_ang());
    convert_to_proto(in.mag, *out.mutable_mag()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
    convert_to_proto(in.messageTimeStamp, *out.mutable_messagetimestamp()); // required field in DDS
}

void convert_to_proto(const twinoaks::commonmodule::MV& in, commonmodule::MV& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.mag, *out.mutable_mag()); // required field in DDS
    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS
    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_namedobject()); // inherited type
    // convert required primitive fields
    if(in.mRID) out.set_mrid(convert_string(in.mRID));
}

void convert_to_proto(const twinoaks::commonmodule::Unit& in, commonmodule::Unit& out)
{
    out.Clear();
    // convert required primitive fields
    if(in.multiplier) out.set_multiplier(static_cast<commonmodule::UnitMultiplierKind>(*in.multiplier));
    out.set_siunit(static_cast<commonmodule::UnitSymbolKind>(in.SIUnit));
}

void convert_to_proto(const twinoaks::breakermodule::Breaker& in, breakermodule::Breaker& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::Meter& in, commonmodule::Meter& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::DetailQual& in, commonmodule::DetailQual& out)
{
    out.Clear();
    // convert required primitive fields
    out.set_badreference(convert_bool(in.badReference));
    out.set_failure(convert_bool(in.failure));
    out.set_inaccurate(convert_bool(in.inaccurate));
    out.set_inconsistent(convert_bool(in.inconsistent));
    out.set_olddata(convert_bool(in.oldData));
    out.set_oscillatory(convert_bool(in.oscillatory));
    out.set_outofrange(convert_bool(in.outOfRange));
    out.set_overflow(convert_bool(in.overflow));
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_messageinfo()); // inherited type
}

void convert_to_proto(const twinoaks::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out)
{
    out.Clear();
    // convert required primitive fields
    out.set_setval(static_cast<commonmodule::PFSignKind>(in.setVal));
}

void convert_to_proto(const twinoaks::commonmodule::DEL& in, commonmodule::DEL& out)
{
    out.Clear();
    // convert message fields
    if(in.phsAB) convert_to_proto(*in.phsAB, *out.mutable_phsab());
    if(in.phsBC) convert_to_proto(*in.phsBC, *out.mutable_phsbc());
    if(in.phsCA) convert_to_proto(*in.phsCA, *out.mutable_phsca());
}

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type
    if(in.DmdVAh) convert_to_proto(*in.DmdVAh, *out.mutable_dmdvah());
    if(in.DmdVArh) convert_to_proto(*in.DmdVArh, *out.mutable_dmdvarh());
    if(in.DmdWh) convert_to_proto(*in.DmdWh, *out.mutable_dmdwh());
    if(in.SupVAh) convert_to_proto(*in.SupVAh, *out.mutable_supvah());
    if(in.SupVArh) convert_to_proto(*in.SupVArh, *out.mutable_supvarh());
    if(in.SupWh) convert_to_proto(*in.SupWh, *out.mutable_supwh());
    if(in.TotVAh) convert_to_proto(*in.TotVAh, *out.mutable_totvah());
    if(in.TotVArh) convert_to_proto(*in.TotVArh, *out.mutable_totvarh());
    if(in.TotWh) convert_to_proto(*in.TotWh, *out.mutable_totwh());
}

} // end namespace dds

} // end namespace adapter
