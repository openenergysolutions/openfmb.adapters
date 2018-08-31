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

#ifndef OPENFMB_CONVERTTOPROTO_H
#define OPENFMB_CONVERTTOPROTO_H

#include "breakermodule/breakermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

#include "../NamespaceAlias.h"

namespace adapter {

namespace dds {

void convert_to_proto(const twinoaks::commonmodule::Timestamp& in, commonmodule::Timestamp& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out);

void convert_to_proto(const twinoaks::commonmodule::WYE& in, commonmodule::WYE& out);

void convert_to_proto(const twinoaks::commonmodule::CMV& in, commonmodule::CMV& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out);

void convert_to_proto(const twinoaks::commonmodule::Quality& in, commonmodule::Quality& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out);

void convert_to_proto(const twinoaks::commonmodule::TimeQuality& in, commonmodule::TimeQuality& out);

void convert_to_proto(const twinoaks::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out);

void convert_to_proto(const twinoaks::commonmodule::Terminal& in, commonmodule::Terminal& out);

void convert_to_proto(const twinoaks::commonmodule::BCR& in, commonmodule::BCR& out);

void convert_to_proto(const twinoaks::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out);

void convert_to_proto(const twinoaks::commonmodule::IED& in, commonmodule::IED& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out);

void convert_to_proto(const twinoaks::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out);

void convert_to_proto(const twinoaks::commonmodule::NamedObject& in, commonmodule::NamedObject& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out);

void convert_to_proto(const twinoaks::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out);

void convert_to_proto(const twinoaks::commonmodule::Vector& in, commonmodule::Vector& out);

void convert_to_proto(const twinoaks::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out);

void convert_to_proto(const twinoaks::commonmodule::MessageInfo& in, commonmodule::MessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::MV& in, commonmodule::MV& out);

void convert_to_proto(const twinoaks::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out);

void convert_to_proto(const twinoaks::commonmodule::Unit& in, commonmodule::Unit& out);

void convert_to_proto(const twinoaks::commonmodule::Meter& in, commonmodule::Meter& out);

void convert_to_proto(const twinoaks::commonmodule::DetailQual& in, commonmodule::DetailQual& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out);

void convert_to_proto(const twinoaks::commonmodule::ENG_PFSignKind& in, commonmodule::ENG_PFSignKind& out);

void convert_to_proto(const twinoaks::breakermodule::Breaker& in, breakermodule::Breaker& out);

void convert_to_proto(const twinoaks::commonmodule::DEL& in, commonmodule::DEL& out);

void convert_to_proto(const twinoaks::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out);

} // end namespace dds

} // end namespace adapter

#endif

