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

#include "Conversions.h"

namespace adapter {

namespace dds {

template <class T, class R>
R* create(const T& value)
{
    auto ret = new R();
    convert(value, *ret);
    return ret;
};

void convert(const commonmodule::Timestamp& in, openfmb::commonmodule::Timestamp& out)
{
    out.clear();

}

void convert(const commonmodule::LogicalNode& in, openfmb::commonmodule::LogicalNode& out)
{
    out.clear();

    if(in.has_identifiedobject()) out.identifiedObject = create<commonmodule::IdentifiedObject,openfmb::commonmodule::IdentifiedObject>(in.identifiedobject());
}

void convert(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out)
{
    out.clear();

}

void convert(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out)
{
    out.clear();

}

void convert(const commonmodule::BCR& in, openfmb::commonmodule::BCR& out)
{
    out.clear();

    if(in.has_q()) out.q = create<commonmodule::Quality,openfmb::commonmodule::Quality>(in.q());
    if(in.has_t()) out.t = create<commonmodule::Timestamp,openfmb::commonmodule::Timestamp>(in.t());
    if(in.has_units()) out.units = create<commonmodule::Unit,openfmb::commonmodule::Unit>(in.units());
}

void convert(const commonmodule::ReadingMMTR& in, openfmb::commonmodule::ReadingMMTR& out)
{
    out.clear();

    if(in.has_logicalnode()) out.logicalNode = create<commonmodule::LogicalNode,openfmb::commonmodule::LogicalNode>(in.logicalnode());
    if(in.has_dmdvah()) out.DmdVAh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.dmdvah());
    if(in.has_dmdvarh()) out.DmdVArh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.dmdvarh());
    if(in.has_dmdwh()) out.DmdWh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.dmdwh());
    if(in.has_supvah()) out.SupVAh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.supvah());
    if(in.has_supvarh()) out.SupVArh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.supvarh());
    if(in.has_supwh()) out.SupWh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.supwh());
    if(in.has_totvah()) out.TotVAh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.totvah());
    if(in.has_totvarh()) out.TotVArh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.totvarh());
    if(in.has_totwh()) out.TotWh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.totwh());
}

void convert(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out)
{
    out.clear();

    if(in.has_net()) out.net = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.net());
    if(in.has_neut()) out.neut = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.neut());
    if(in.has_phsa()) out.phsA = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.phsa());
    if(in.has_phsb()) out.phsB = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.phsb());
    if(in.has_phsc()) out.phsC = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.phsc());
}

void convert(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out)
{
    out.clear();

    if(in.has_ang()) out.ang = create<commonmodule::AnalogValue,openfmb::commonmodule::AnalogValue>(in.ang());
    if(in.has_mag()) out.mag = create<commonmodule::AnalogValue,openfmb::commonmodule::AnalogValue>(in.mag());
}

void convert(const resourcemodule::ResourceReadingProfile& in, openfmb::resourcemodule::ResourceReadingProfile& out)
{
    out.clear();

    if(in.has_readingmessageinfo()) out.readingMessageInfo = create<commonmodule::ReadingMessageInfo,openfmb::commonmodule::ReadingMessageInfo>(in.readingmessageinfo());
    if(in.has_ied()) out.ied = create<commonmodule::IED,openfmb::commonmodule::IED>(in.ied());
    if(in.has_meter()) out.meter = create<commonmodule::Meter,openfmb::commonmodule::Meter>(in.meter());
    if(in.has_resourcereading()) out.resourceReading = create<resourcemodule::ResourceReading,openfmb::resourcemodule::ResourceReading>(in.resourcereading());
}

void convert(const commonmodule::Quality& in, openfmb::commonmodule::Quality& out)
{
    out.clear();

}

void convert(const commonmodule::ConductingEquipmentTerminalReading& in, openfmb::commonmodule::ConductingEquipmentTerminalReading& out)
{
    out.clear();

    if(in.has_terminal()) out.terminal = create<commonmodule::Terminal,openfmb::commonmodule::Terminal>(in.terminal());
}

void convert(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out)
{
    out.clear();

    if(in.has_logicalnode()) out.logicalNode = create<commonmodule::LogicalNode,openfmb::commonmodule::LogicalNode>(in.logicalnode());
    if(in.has_a()) out.A = create<commonmodule::WYE,openfmb::commonmodule::WYE>(in.a());
    if(in.has_clcmth()) out.ClcMth = create<commonmodule::ENG_CalcMethodKind,openfmb::commonmodule::ENG_CalcMethodKind>(in.clcmth());
    if(in.has_hz()) out.Hz = create<commonmodule::MV,openfmb::commonmodule::MV>(in.hz());
    if(in.has_phv()) out.PhV = create<commonmodule::WYE,openfmb::commonmodule::WYE>(in.phv());
    if(in.has_ppv()) out.PPV = create<commonmodule::DEL,openfmb::commonmodule::DEL>(in.ppv());
    if(in.has_va()) out.VA = create<commonmodule::WYE,openfmb::commonmodule::WYE>(in.va());
    if(in.has_var()) out.VAr = create<commonmodule::WYE,openfmb::commonmodule::WYE>(in.var());
    if(in.has_w()) out.W = create<commonmodule::WYE,openfmb::commonmodule::WYE>(in.w());
}

void convert(const commonmodule::ReadingMMTN& in, openfmb::commonmodule::ReadingMMTN& out)
{
    out.clear();

    if(in.has_logicalnode()) out.logicalNode = create<commonmodule::LogicalNode,openfmb::commonmodule::LogicalNode>(in.logicalnode());
    if(in.has_dmdvah()) out.DmdVAh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.dmdvah());
    if(in.has_dmdvarh()) out.DmdVArh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.dmdvarh());
    if(in.has_dmdwh()) out.DmdWh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.dmdwh());
    if(in.has_supvah()) out.SupVAh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.supvah());
    if(in.has_supvarh()) out.SupVArh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.supvarh());
    if(in.has_supwh()) out.SupWh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.supwh());
    if(in.has_totvah()) out.TotVAh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.totvah());
    if(in.has_totvarh()) out.TotVArh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.totvarh());
    if(in.has_totwh()) out.TotWh = create<commonmodule::BCR,openfmb::commonmodule::BCR>(in.totwh());
}

void convert(const commonmodule::PhaseMMTN& in, openfmb::commonmodule::PhaseMMTN& out)
{
    out.clear();

    if(in.has_phsa()) out.phsA = create<commonmodule::ReadingMMTN,openfmb::commonmodule::ReadingMMTN>(in.phsa());
    if(in.has_phsab()) out.phsAB = create<commonmodule::ReadingMMTN,openfmb::commonmodule::ReadingMMTN>(in.phsab());
    if(in.has_phsb()) out.phsB = create<commonmodule::ReadingMMTN,openfmb::commonmodule::ReadingMMTN>(in.phsb());
    if(in.has_phsbc()) out.phsBC = create<commonmodule::ReadingMMTN,openfmb::commonmodule::ReadingMMTN>(in.phsbc());
    if(in.has_phsc()) out.phsC = create<commonmodule::ReadingMMTN,openfmb::commonmodule::ReadingMMTN>(in.phsc());
    if(in.has_phsca()) out.phsCA = create<commonmodule::ReadingMMTN,openfmb::commonmodule::ReadingMMTN>(in.phsca());
}

void convert(const commonmodule::AnalogValue& in, openfmb::commonmodule::AnalogValue& out)
{
    out.clear();

}

void convert(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out)
{
    out.clear();

    if(in.has_cval()) out.cVal = create<commonmodule::Vector,openfmb::commonmodule::Vector>(in.cval());
    if(in.has_q()) out.q = create<commonmodule::Quality,openfmb::commonmodule::Quality>(in.q());
    if(in.has_t()) out.t = create<commonmodule::Timestamp,openfmb::commonmodule::Timestamp>(in.t());
    if(in.has_units()) out.units = create<commonmodule::Unit,openfmb::commonmodule::Unit>(in.units());
}

void convert(const commonmodule::MV& in, openfmb::commonmodule::MV& out)
{
    out.clear();

    if(in.has_mag()) out.mag = create<commonmodule::AnalogValue,openfmb::commonmodule::AnalogValue>(in.mag());
    if(in.has_q()) out.q = create<commonmodule::Quality,openfmb::commonmodule::Quality>(in.q());
    if(in.has_t()) out.t = create<commonmodule::Timestamp,openfmb::commonmodule::Timestamp>(in.t());
    if(in.has_units()) out.units = create<commonmodule::Unit,openfmb::commonmodule::Unit>(in.units());
}

void convert(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out)
{
    out.clear();

    if(in.has_conductingequipmentterminalreading()) out.conductingEquipmentTerminalReading = create<commonmodule::ConductingEquipmentTerminalReading,openfmb::commonmodule::ConductingEquipmentTerminalReading>(in.conductingequipmentterminalreading());
    if(in.has_phasemmtn()) out.phaseMMTN = create<commonmodule::PhaseMMTN,openfmb::commonmodule::PhaseMMTN>(in.phasemmtn());
    if(in.has_readingmmtr()) out.readingMMTR = create<commonmodule::ReadingMMTR,openfmb::commonmodule::ReadingMMTR>(in.readingmmtr());
    if(in.has_readingmmxu()) out.readingMMXU = create<commonmodule::ReadingMMXU,openfmb::commonmodule::ReadingMMXU>(in.readingmmxu());
}

void convert(const commonmodule::IdentifiedObject& in, openfmb::commonmodule::IdentifiedObject& out)
{
    out.clear();

}

void convert(const commonmodule::Terminal& in, openfmb::commonmodule::Terminal& out)
{
    out.clear();

    if(in.has_acdcterminal()) out.acdcTerminal = create<commonmodule::ACDCTerminal,openfmb::commonmodule::ACDCTerminal>(in.acdcterminal());
}

void convert(const commonmodule::IED& in, openfmb::commonmodule::IED& out)
{
    out.clear();

    if(in.has_identifiedobject()) out.identifiedObject = create<commonmodule::IdentifiedObject,openfmb::commonmodule::IdentifiedObject>(in.identifiedobject());
}

void convert(const commonmodule::ReadingMessageInfo& in, openfmb::commonmodule::ReadingMessageInfo& out)
{
    out.clear();

    if(in.has_identifiedobject()) out.identifiedObject = create<commonmodule::IdentifiedObject,openfmb::commonmodule::IdentifiedObject>(in.identifiedobject());
    if(in.has_messagetimestamp()) out.messageTimestamp = create<commonmodule::Timestamp,openfmb::commonmodule::Timestamp>(in.messagetimestamp());
}

void convert(const commonmodule::ACDCTerminal& in, openfmb::commonmodule::ACDCTerminal& out)
{
    out.clear();

    if(in.has_identifiedobject()) out.identifiedObject = create<commonmodule::IdentifiedObject,openfmb::commonmodule::IdentifiedObject>(in.identifiedobject());
}

void convert(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out)
{
    out.clear();

    if(in.has_phsab()) out.phsAB = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.phsab());
    if(in.has_phsbc()) out.phsBC = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.phsbc());
    if(in.has_phsca()) out.phsCA = create<commonmodule::CMV,openfmb::commonmodule::CMV>(in.phsca());
}

void convert(const commonmodule::Meter& in, openfmb::commonmodule::Meter& out)
{
    out.clear();

    if(in.has_identifiedobject()) out.identifiedObject = create<commonmodule::IdentifiedObject,openfmb::commonmodule::IdentifiedObject>(in.identifiedobject());
}

} // end namespace dds

} // end namespace adapter
