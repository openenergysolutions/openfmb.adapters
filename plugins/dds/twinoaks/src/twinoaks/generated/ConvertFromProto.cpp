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

void convert_from_proto(const commonmodule::Timestamp& in, openfmb::commonmodule::Timestamp& out)
{
    out.clear();
    // convert message fields
    if(in.has_tq()) out.tq = allocate_from_proto<openfmb::commonmodule::TimeQuality>(in.tq());
    // convert primitive fields
    out.fraction = convert_uint32(in.fraction());
    out.seconds = convert_uint64(in.seconds());
}

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, openfmb::breakermodule::BreakerReadingProfile& out)
{
    out.clear();
    // convert message fields
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type
    convert_from_proto(in.breaker(), out.breaker); // required field in DDS
    convert_repeated_field(in.breakerreading(), out.breakerReading); // repeated field
    convert_from_proto(in.ied(), out.ied); // required field in DDS
}

void convert_from_proto(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out)
{
    out.clear();
    // convert message fields
    if(in.has_net()) out.net = allocate_from_proto<openfmb::commonmodule::CMV>(in.net());
    if(in.has_neut()) out.neut = allocate_from_proto<openfmb::commonmodule::CMV>(in.neut());
    if(in.has_phsa()) out.phsA = allocate_from_proto<openfmb::commonmodule::CMV>(in.phsa());
    if(in.has_phsb()) out.phsB = allocate_from_proto<openfmb::commonmodule::CMV>(in.phsb());
    if(in.has_phsc()) out.phsC = allocate_from_proto<openfmb::commonmodule::CMV>(in.phsc());
}

void convert_from_proto(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.cval(), out.cVal); // required field in DDS
    convert_from_proto(in.q(), out.q); // required field in DDS
    convert_from_proto(in.t(), out.t); // required field in DDS
    if(in.has_units()) out.units = allocate_from_proto<openfmb::commonmodule::Unit>(in.units());
}

void convert_from_proto(const google::protobuf::Int32Value& in, openfmb::google::protobuf::Int32Value& out)
{
    out.clear();
    // convert primitive fields
    out.value = create_int32(in.value());
}

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, openfmb::commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.terminal(), out.terminal); // required field in DDS
}

void convert_from_proto(const commonmodule::Quality& in, openfmb::commonmodule::Quality& out)
{
    // omitted via configuration
}

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out)
{
    out.clear();
    // convert primitive fields
    out.setVal = convert_enum(in.setval());
}

void convert_from_proto(const commonmodule::TimeQuality& in, openfmb::commonmodule::TimeQuality& out)
{
    out.clear();
    // convert primitive fields
    out.clockFailure = convert_bool(in.clockfailure());
    out.clockNotSynchronized = convert_bool(in.clocknotsynchronized());
    out.leapSecondsKnown = convert_bool(in.leapsecondsknown());
    out.timeAccuracy = convert_enum(in.timeaccuracy());
}

void convert_from_proto(const commonmodule::ACDCTerminal& in, openfmb::commonmodule::ACDCTerminal& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
    if(in.has_connected()) out.connected = allocate_from_proto<openfmb::google::protobuf::BoolValue>(in.connected());
    if(in.has_sequencenumber()) out.sequenceNumber = allocate_from_proto<openfmb::google::protobuf::Int32Value>(in.sequencenumber());
}

void convert_from_proto(const commonmodule::Terminal& in, openfmb::commonmodule::Terminal& out)
{
    out.clear();
    // convert message fields
    if(in.has_acdcterminal()) convert_from_proto(in.acdcterminal(), out); // inherited type
    // convert primitive fields
    out.phases = create_enum(in.phases());
}

void convert_from_proto(const commonmodule::BCR& in, openfmb::commonmodule::BCR& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.q(), out.q); // required field in DDS
    convert_from_proto(in.t(), out.t); // required field in DDS
    // convert primitive fields
    out.actVal = convert_int64(in.actval());
    out.units = create_enum(in.units());
}

void convert_from_proto(const commonmodule::IdentifiedObject& in, openfmb::commonmodule::IdentifiedObject& out)
{
    out.clear();
    // convert message fields
    if(in.has_description()) out.description = allocate_from_proto<openfmb::google::protobuf::StringValue>(in.description());
    if(in.has_mrid()) out.mRID = allocate_from_proto<openfmb::google::protobuf::StringValue>(in.mrid());
    if(in.has_name()) out.name = allocate_from_proto<openfmb::google::protobuf::StringValue>(in.name());
}

void convert_from_proto(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type
    if(in.has_phasemmtn()) out.phaseMMTN = allocate_from_proto<openfmb::commonmodule::PhaseMMTN>(in.phasemmtn());
    if(in.has_readingmmtr()) out.readingMMTR = allocate_from_proto<openfmb::commonmodule::ReadingMMTR>(in.readingmmtr());
    if(in.has_readingmmxu()) out.readingMMXU = allocate_from_proto<openfmb::commonmodule::ReadingMMXU>(in.readingmmxu());
}

void convert_from_proto(const commonmodule::ReadingMMTR& in, openfmb::commonmodule::ReadingMMTR& out)
{
    out.clear();
    // convert message fields
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
    if(in.has_dmdvah()) out.DmdVAh = allocate_from_proto<openfmb::commonmodule::BCR>(in.dmdvah());
    if(in.has_dmdvarh()) out.DmdVArh = allocate_from_proto<openfmb::commonmodule::BCR>(in.dmdvarh());
    if(in.has_dmdwh()) out.DmdWh = allocate_from_proto<openfmb::commonmodule::BCR>(in.dmdwh());
    if(in.has_supvah()) out.SupVAh = allocate_from_proto<openfmb::commonmodule::BCR>(in.supvah());
    if(in.has_supvarh()) out.SupVArh = allocate_from_proto<openfmb::commonmodule::BCR>(in.supvarh());
    if(in.has_supwh()) out.SupWh = allocate_from_proto<openfmb::commonmodule::BCR>(in.supwh());
    if(in.has_totvah()) out.TotVAh = allocate_from_proto<openfmb::commonmodule::BCR>(in.totvah());
    if(in.has_totvarh()) out.TotVArh = allocate_from_proto<openfmb::commonmodule::BCR>(in.totvarh());
    if(in.has_totwh()) out.TotWh = allocate_from_proto<openfmb::commonmodule::BCR>(in.totwh());
}

void convert_from_proto(const commonmodule::IED& in, openfmb::commonmodule::IED& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const breakermodule::BreakerReading& in, openfmb::breakermodule::BreakerReading& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipmentterminalreading()) convert_from_proto(in.conductingequipmentterminalreading(), out); // inherited type
    if(in.has_diffreadingmmxu()) out.diffReadingMMXU = allocate_from_proto<openfmb::commonmodule::ReadingMMXU>(in.diffreadingmmxu());
    if(in.has_phasemmtn()) out.phaseMMTN = allocate_from_proto<openfmb::commonmodule::PhaseMMTN>(in.phasemmtn());
    if(in.has_readingmmtr()) out.readingMMTR = allocate_from_proto<openfmb::commonmodule::ReadingMMTR>(in.readingmmtr());
    if(in.has_readingmmxu()) out.readingMMXU = allocate_from_proto<openfmb::commonmodule::ReadingMMXU>(in.readingmmxu());
}

void convert_from_proto(const commonmodule::PhaseMMTN& in, openfmb::commonmodule::PhaseMMTN& out)
{
    out.clear();
    // convert message fields
    if(in.has_phsa()) out.phsA = allocate_from_proto<openfmb::commonmodule::ReadingMMTN>(in.phsa());
    if(in.has_phsab()) out.phsAB = allocate_from_proto<openfmb::commonmodule::ReadingMMTN>(in.phsab());
    if(in.has_phsb()) out.phsB = allocate_from_proto<openfmb::commonmodule::ReadingMMTN>(in.phsb());
    if(in.has_phsbc()) out.phsBC = allocate_from_proto<openfmb::commonmodule::ReadingMMTN>(in.phsbc());
    if(in.has_phsc()) out.phsC = allocate_from_proto<openfmb::commonmodule::ReadingMMTN>(in.phsc());
    if(in.has_phsca()) out.phsCA = allocate_from_proto<openfmb::commonmodule::ReadingMMTN>(in.phsca());
}

void convert_from_proto(const google::protobuf::BoolValue& in, openfmb::google::protobuf::BoolValue& out)
{
    out.clear();
    // convert primitive fields
    out.value = create_bool(in.value());
}

void convert_from_proto(const commonmodule::NamedObject& in, openfmb::commonmodule::NamedObject& out)
{
    out.clear();
    // convert message fields
    if(in.has_description()) out.description = allocate_from_proto<openfmb::google::protobuf::StringValue>(in.description());
    if(in.has_name()) out.name = allocate_from_proto<openfmb::google::protobuf::StringValue>(in.name());
}

void convert_from_proto(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out)
{
    out.clear();
    // convert message fields
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
    if(in.has_a()) out.A = allocate_from_proto<openfmb::commonmodule::WYE>(in.a());
    if(in.has_clcmth()) out.ClcMth = allocate_from_proto<openfmb::commonmodule::ENG_CalcMethodKind>(in.clcmth());
    if(in.has_hz()) out.Hz = allocate_from_proto<openfmb::commonmodule::MV>(in.hz());
    if(in.has_pf()) out.PF = allocate_from_proto<openfmb::commonmodule::WYE>(in.pf());
    if(in.has_pfsign()) out.PFSign = allocate_from_proto<openfmb::commonmodule::ENG_PFSignKind>(in.pfsign());
    if(in.has_phv()) out.PhV = allocate_from_proto<openfmb::commonmodule::WYE>(in.phv());
    if(in.has_ppv()) out.PPV = allocate_from_proto<openfmb::commonmodule::DEL>(in.ppv());
    if(in.has_va()) out.VA = allocate_from_proto<openfmb::commonmodule::WYE>(in.va());
    if(in.has_var()) out.VAr = allocate_from_proto<openfmb::commonmodule::WYE>(in.var());
    if(in.has_w()) out.W = allocate_from_proto<openfmb::commonmodule::WYE>(in.w());
}

void convert_from_proto(const commonmodule::AnalogueValue& in, openfmb::commonmodule::AnalogueValue& out)
{
    out.clear();
    // convert message fields
    if(in.has_f()) out.f = allocate_from_proto<openfmb::google::protobuf::FloatValue>(in.f());
    if(in.has_i()) out.i = allocate_from_proto<openfmb::google::protobuf::Int32Value>(in.i());
}

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, openfmb::resourcemodule::ResourceReadingProfile& out)
{
    out.clear();
    // convert message fields
    if(in.has_readingmessageinfo()) convert_from_proto(in.readingmessageinfo(), out); // inherited type
    convert_from_proto(in.ied(), out.ied); // required field in DDS
    convert_from_proto(in.meter(), out.meter); // required field in DDS
    convert_from_proto(in.resourcereading(), out.resourceReading); // required field in DDS
}

void convert_from_proto(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out)
{
    out.clear();
    // convert message fields
    if(in.has_ang()) out.ang = allocate_from_proto<openfmb::commonmodule::AnalogueValue>(in.ang());
    convert_from_proto(in.mag(), out.mag); // required field in DDS
}

void convert_from_proto(const commonmodule::LogicalNode& in, openfmb::commonmodule::LogicalNode& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
}

void convert_from_proto(const commonmodule::MessageInfo& in, openfmb::commonmodule::MessageInfo& out)
{
    out.clear();
    // convert message fields
    if(in.has_identifiedobject()) convert_from_proto(in.identifiedobject(), out); // inherited type
    convert_from_proto(in.messagetimestamp(), out.messageTimeStamp); // required field in DDS
}

void convert_from_proto(const commonmodule::MV& in, openfmb::commonmodule::MV& out)
{
    out.clear();
    // convert message fields
    convert_from_proto(in.mag(), out.mag); // required field in DDS
    convert_from_proto(in.q(), out.q); // required field in DDS
    convert_from_proto(in.t(), out.t); // required field in DDS
    if(in.has_units()) out.units = allocate_from_proto<openfmb::commonmodule::Unit>(in.units());
}

void convert_from_proto(const commonmodule::ConductingEquipment& in, openfmb::commonmodule::ConductingEquipment& out)
{
    out.clear();
    // convert message fields
    if(in.has_namedobject()) convert_from_proto(in.namedobject(), out); // inherited type
    // convert primitive fields
    out.mRID = convert_string(in.mrid());
}

void convert_from_proto(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out)
{
    out.clear();
    // convert primitive fields
    out.multiplier = create_enum(in.multiplier());
    out.SIUnit = convert_enum(in.siunit());
}

void convert_from_proto(const commonmodule::Meter& in, openfmb::commonmodule::Meter& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const commonmodule::DetailQual& in, openfmb::commonmodule::DetailQual& out)
{
    out.clear();
    // convert primitive fields
    out.badReference = convert_bool(in.badreference());
    out.failure = convert_bool(in.failure());
    out.inaccurate = convert_bool(in.inaccurate());
    out.inconsistent = convert_bool(in.inconsistent());
    out.oldData = convert_bool(in.olddata());
    out.oscillatory = convert_bool(in.oscillatory());
    out.outOfRange = convert_bool(in.outofrange());
    out.overflow = convert_bool(in.overflow());
}

void convert_from_proto(const google::protobuf::FloatValue& in, openfmb::google::protobuf::FloatValue& out)
{
    out.clear();
    // convert primitive fields
    out.value = create_float(in.value());
}

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, openfmb::commonmodule::ReadingMessageInfo& out)
{
    out.clear();
    // convert message fields
    if(in.has_messageinfo()) convert_from_proto(in.messageinfo(), out); // inherited type
}

void convert_from_proto(const google::protobuf::StringValue& in, openfmb::google::protobuf::StringValue& out)
{
    out.clear();
    // convert primitive fields
    out.value = create_string(in.value());
}

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, openfmb::commonmodule::ENG_PFSignKind& out)
{
    out.clear();
    // convert primitive fields
    out.setVal = convert_enum(in.setval());
}

void convert_from_proto(const breakermodule::Breaker& in, openfmb::breakermodule::Breaker& out)
{
    out.clear();
    // convert message fields
    if(in.has_conductingequipment()) convert_from_proto(in.conductingequipment(), out); // inherited type
}

void convert_from_proto(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out)
{
    out.clear();
    // convert message fields
    if(in.has_phsab()) out.phsAB = allocate_from_proto<openfmb::commonmodule::CMV>(in.phsab());
    if(in.has_phsbc()) out.phsBC = allocate_from_proto<openfmb::commonmodule::CMV>(in.phsbc());
    if(in.has_phsca()) out.phsCA = allocate_from_proto<openfmb::commonmodule::CMV>(in.phsca());
}

void convert_from_proto(const commonmodule::ReadingMMTN& in, openfmb::commonmodule::ReadingMMTN& out)
{
    out.clear();
    // convert message fields
    if(in.has_logicalnode()) convert_from_proto(in.logicalnode(), out); // inherited type
    if(in.has_dmdvah()) out.DmdVAh = allocate_from_proto<openfmb::commonmodule::BCR>(in.dmdvah());
    if(in.has_dmdvarh()) out.DmdVArh = allocate_from_proto<openfmb::commonmodule::BCR>(in.dmdvarh());
    if(in.has_dmdwh()) out.DmdWh = allocate_from_proto<openfmb::commonmodule::BCR>(in.dmdwh());
    if(in.has_supvah()) out.SupVAh = allocate_from_proto<openfmb::commonmodule::BCR>(in.supvah());
    if(in.has_supvarh()) out.SupVArh = allocate_from_proto<openfmb::commonmodule::BCR>(in.supvarh());
    if(in.has_supwh()) out.SupWh = allocate_from_proto<openfmb::commonmodule::BCR>(in.supwh());
    if(in.has_totvah()) out.TotVAh = allocate_from_proto<openfmb::commonmodule::BCR>(in.totvah());
    if(in.has_totvarh()) out.TotVArh = allocate_from_proto<openfmb::commonmodule::BCR>(in.totvarh());
    if(in.has_totwh()) out.TotWh = allocate_from_proto<openfmb::commonmodule::BCR>(in.totwh());
}

static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_P_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_M_CLASS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::CalcMethodKind::CalcMethodKind_DIFF) == static_cast<int>(openfmb::commonmodule::CalcMethodKind::CalcMethodKind_DIFF), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_none) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_other) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_C) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_C), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_CN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_CN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AC) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_AC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ACN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ACN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_B) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_B), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_BN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BC) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_BC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_BCN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_BCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_A) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_A), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_AN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_AB) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_AB), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ABN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABC) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ABC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_ABCN), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s2N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s2N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s1N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s1N), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s12), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PhaseCodeKind::PhaseCodeKind_s12N) == static_cast<int>(openfmb::commonmodule::PhaseCodeKind::PhaseCodeKind_s12N), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_none) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_meter) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_meter), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_gram) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_gram), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Amp) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Amp), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_deg) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_deg), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_rad) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_rad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degC) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_degC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Farad) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Farad), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_sec) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_sec), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Henry) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Henry), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_V) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_V), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_ohm) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_ohm), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Joule) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Joule), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Newton) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Newton), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Hz) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Hz), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_W) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_W), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Pa) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Pa), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m2) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_m2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Siemens), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VA) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAr) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VAr), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerVA), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VAh) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VAh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Wh) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Wh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_VArh) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_VArh), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_hzPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerS), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_other) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_Ah) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_Ah), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_min) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_min), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_hour) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_hour), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_m3) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_m3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_wPerM2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_degF) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_degF), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitSymbolKind::UnitSymbolKind_mph) == static_cast<int>(openfmb::commonmodule::UnitSymbolKind::UnitSymbolKind_mph), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_none) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_none), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_other) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_other), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_centi), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_deci), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Giga), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_kilo), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Mega), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_micro), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_milli), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_nano), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_pico), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera) == static_cast<int>(openfmb::commonmodule::UnitMultiplierKind::UnitMultiplierKind_Tera), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_good) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_good), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_invalid) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_invalid), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_reserved) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_reserved), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::ValidityKind::ValidityKind_questionable) == static_cast<int>(openfmb::commonmodule::ValidityKind::ValidityKind_questionable), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T0), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T1), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T2), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T4), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_T5), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified) == static_cast<int>(openfmb::commonmodule::TimeAccuracyKind::TimeAccuracyKind_unspecified), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_IEC) == static_cast<int>(openfmb::commonmodule::PFSignKind::PFSignKind_IEC), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::PFSignKind::PFSignKind_EEI) == static_cast<int>(openfmb::commonmodule::PFSignKind::PFSignKind_EEI), "mismatched enum values");

static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_process) == static_cast<int>(openfmb::commonmodule::SourceKind::SourceKind_process), "mismatched enum values");
static_assert(static_cast<int>(commonmodule::SourceKind::SourceKind_substituted) == static_cast<int>(openfmb::commonmodule::SourceKind::SourceKind_substituted), "mismatched enum values");

} // end namespace dds

} // end namespace adapter
