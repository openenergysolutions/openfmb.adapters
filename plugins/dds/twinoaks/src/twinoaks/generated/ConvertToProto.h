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

#include "adapter-api/proto/resourcemodule/resourcemodule.pb.h"
#include "adapter-api/proto/breakermodule/breakermodule.pb.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

namespace adapter {

namespace dds {

void convert_to_proto(const openfmb::commonmodule::MV& in, commonmodule::MV& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMessageInfo& in, commonmodule::ReadingMessageInfo& out);

void convert_to_proto(const openfmb::commonmodule::IED& in, commonmodule::IED& out);

void convert_to_proto(const openfmb::commonmodule::BCR& in, commonmodule::BCR& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceReading& in, resourcemodule::ResourceReading& out);

void convert_to_proto(const openfmb::commonmodule::ConductingEquipment& in, commonmodule::ConductingEquipment& out);

void convert_to_proto(const openfmb::commonmodule::ConductingEquipmentTerminalReading& in, commonmodule::ConductingEquipmentTerminalReading& out);

void convert_to_proto(const openfmb::commonmodule::Quality& in, commonmodule::Quality& out);

void convert_to_proto(const openfmb::commonmodule::ENG_CalcMethodKind& in, commonmodule::ENG_CalcMethodKind& out);

void convert_to_proto(const openfmb::breakermodule::Breaker& in, breakermodule::Breaker& out);

void convert_to_proto(const openfmb::commonmodule::WYE& in, commonmodule::WYE& out);

void convert_to_proto(const openfmb::breakermodule::BreakerReading& in, breakermodule::BreakerReading& out);

void convert_to_proto(const openfmb::commonmodule::PhaseMMTN& in, commonmodule::PhaseMMTN& out);

void convert_to_proto(const openfmb::commonmodule::IdentifiedObject& in, commonmodule::IdentifiedObject& out);

void convert_to_proto(const openfmb::commonmodule::Vector& in, commonmodule::Vector& out);

void convert_to_proto(const openfmb::commonmodule::ACDCTerminal& in, commonmodule::ACDCTerminal& out);

void convert_to_proto(const openfmb::commonmodule::LogicalNode& in, commonmodule::LogicalNode& out);

void convert_to_proto(const openfmb::commonmodule::Meter& in, commonmodule::Meter& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMMTR& in, commonmodule::ReadingMMTR& out);

void convert_to_proto(const openfmb::commonmodule::Terminal& in, commonmodule::Terminal& out);

void convert_to_proto(const openfmb::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out);

void convert_to_proto(const openfmb::commonmodule::DEL& in, commonmodule::DEL& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMMTN& in, commonmodule::ReadingMMTN& out);

void convert_to_proto(const openfmb::commonmodule::Timestamp& in, commonmodule::Timestamp& out);

void convert_to_proto(const openfmb::commonmodule::AnalogueValue& in, commonmodule::AnalogueValue& out);

void convert_to_proto(const openfmb::commonmodule::ReadingMMXU& in, commonmodule::ReadingMMXU& out);

void convert_to_proto(const openfmb::commonmodule::CMV& in, commonmodule::CMV& out);

void convert_to_proto(const openfmb::commonmodule::Unit& in, commonmodule::Unit& out);

} // end namespace dds

} // end namespace adapter

#endif

