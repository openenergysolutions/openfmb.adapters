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

void convert_to_proto(const openfmb::commonmodule::MV& in, commonmodule::MV& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.mag, *out.mutable_mag()); // required field in DDS
    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS
    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const openfmb::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
    convert_to_proto(in.messageTimeStamp, *out.mutable_messagetimestamp()); // required field in DDS
    // convert primitive fields
    if(in.applicationName) out.set_applicationname(convert_string(in.applicationName));
}

void convert_to_proto(const openfmb::commonmodule::IED& in, commonmodule::IED& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::BCR& in, commonmodule::BCR& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS
    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
    // convert primitive fields
    out.set_actval(convert_int64(in.actVal));
    if(in.units) out.set_units(convert_enum(*in.units));
}

void convert_to_proto(const openfmb::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type
    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());
    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());
    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.terminal, *out.mutable_terminal()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::Quality& in, commonmodule::Quality& out)
{
    // omitted via configuration
}

void convert_to_proto(const openfmb::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out)
{
    out.Clear();
    // convert primitive fields
    out.set_setval(convert_enum(in.setVal));
}

void convert_to_proto(const openfmb::breakermodule::Breaker& in, breakermodule::Breaker& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::WYE& in, commonmodule::WYE& out)
{
    out.Clear();
    // convert message fields
    if(in.net) convert_to_proto(*in.net, *out.mutable_net());
    if(in.neut) convert_to_proto(*in.neut, *out.mutable_neut());
    if(in.phsA) convert_to_proto(*in.phsA, *out.mutable_phsa());
    if(in.phsB) convert_to_proto(*in.phsB, *out.mutable_phsb());
    if(in.phsC) convert_to_proto(*in.phsC, *out.mutable_phsc());
}

void convert_to_proto(const openfmb::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipmentterminalreading()); // inherited type
    if(in.phaseMMTN) convert_to_proto(*in.phaseMMTN, *out.mutable_phasemmtn());
    if(in.readingMMTR) convert_to_proto(*in.readingMMTR, *out.mutable_readingmmtr());
    if(in.readingMMXU) convert_to_proto(*in.readingMMXU, *out.mutable_readingmmxu());
}

void convert_to_proto(const openfmb::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out)
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

void convert_to_proto(const openfmb::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out)
{
    out.Clear();
    // convert primitive fields
    if(in.description) out.set_description(in.description);
    if(in.mRID) out.set_mrid(in.mRID);
    if(in.name) out.set_name(in.name);
}

void convert_to_proto(const openfmb::commonmodule::Vector& in, commonmodule::Vector& out)
{
    out.Clear();
    // convert message fields
    if(in.ang) convert_to_proto(*in.ang, *out.mutable_ang());
    convert_to_proto(in.mag, *out.mutable_mag()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
    // convert primitive fields
    if(in.connected) out.set_connected(convert_bool(*in.connected));
    if(in.sequenceNumber) out.set_sequencenumber(convert_int32(*in.sequenceNumber));
}

void convert_to_proto(const openfmb::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_identifiedobject()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::Meter& in, commonmodule::Meter& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_conductingequipment()); // inherited type
}

void convert_to_proto(const openfmb::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out)
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

void convert_to_proto(const openfmb::commonmodule::Terminal& in, commonmodule::Terminal& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_acdcterminal()); // inherited type
    // convert primitive fields
    if(in.phases) out.set_phases(convert_enum(*in.phases));
}

void convert_to_proto(const openfmb::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type
    convert_to_proto(in.breaker, *out.mutable_breaker()); // required field in DDS
    convert_repeated_field(in.breakerReading, *out.mutable_breakerreading()); // repeated field
    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
}

void convert_to_proto(const openfmb::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_readingmessageinfo()); // inherited type
    convert_to_proto(in.ied, *out.mutable_ied()); // required field in DDS
    convert_to_proto(in.meter, *out.mutable_meter()); // required field in DDS
    convert_to_proto(in.resourceReading, *out.mutable_resourcereading()); // required field in DDS
}

void convert_to_proto(const openfmb::commonmodule::DEL& in, commonmodule::DEL& out)
{
    out.Clear();
    // convert message fields
    if(in.phsAB) convert_to_proto(*in.phsAB, *out.mutable_phsab());
    if(in.phsBC) convert_to_proto(*in.phsBC, *out.mutable_phsbc());
    if(in.phsCA) convert_to_proto(*in.phsCA, *out.mutable_phsca());
}

void convert_to_proto(const openfmb::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out)
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

void convert_to_proto(const openfmb::commonmodule::Timestamp& in, commonmodule::Timestamp& out)
{
    out.Clear();
    // convert primitive fields
    out.set_fraction(convert_uint32(in.fraction));
    out.set_seconds(convert_uint64(in.seconds));
    // TODO - field 'tq' of type 'bytes' omitted
}

void convert_to_proto(const openfmb::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out)
{
    out.Clear();
    // convert primitive fields
    if(in.f) out.set_f(convert_float(*in.f));
    if(in.i) out.set_i(convert_int32(*in.i));
}

void convert_to_proto(const openfmb::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in, *out.mutable_logicalnode()); // inherited type
    if(in.A) convert_to_proto(*in.A, *out.mutable_a());
    if(in.ClcMth) convert_to_proto(*in.ClcMth, *out.mutable_clcmth());
    if(in.Hz) convert_to_proto(*in.Hz, *out.mutable_hz());
    if(in.PhV) convert_to_proto(*in.PhV, *out.mutable_phv());
    if(in.PPV) convert_to_proto(*in.PPV, *out.mutable_ppv());
    if(in.VA) convert_to_proto(*in.VA, *out.mutable_va());
    if(in.VAr) convert_to_proto(*in.VAr, *out.mutable_var());
    if(in.W) convert_to_proto(*in.W, *out.mutable_w());
}

void convert_to_proto(const openfmb::commonmodule::CMV& in, commonmodule::CMV& out)
{
    out.Clear();
    // convert message fields
    convert_to_proto(in.cVal, *out.mutable_cval()); // required field in DDS
    convert_to_proto(in.q, *out.mutable_q()); // required field in DDS
    convert_to_proto(in.t, *out.mutable_t()); // required field in DDS
    if(in.units) convert_to_proto(*in.units, *out.mutable_units());
}

void convert_to_proto(const openfmb::commonmodule::Unit& in, commonmodule::Unit& out)
{
    out.Clear();
    // convert primitive fields
    if(in.multiplier) out.set_multiplier(convert_enum(*in.multiplier));
    out.set_siunit(convert_enum(in.SIUnit));
}

} // end namespace dds

} // end namespace adapter
