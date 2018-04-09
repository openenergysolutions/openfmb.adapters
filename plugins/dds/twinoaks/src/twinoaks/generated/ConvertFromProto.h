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

#ifndef OPENFMB_CONVERTFROMPROTO_H
#define OPENFMB_CONVERTFROMPROTO_H

#include "adapter-api/proto/resourcemodule/resourcemodule.pb.h"
#include "adapter-api/proto/breakermodule/breakermodule.pb.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

namespace adapter {

namespace dds {

void convert_from_proto(const commonmodule::TimeQuality& in, openfmb::commonmodule::TimeQuality& out);

void convert_from_proto(const commonmodule::Timestamp& in, openfmb::commonmodule::Timestamp& out);

void convert_from_proto(const commonmodule::ReadingMMXU& in, openfmb::commonmodule::ReadingMMXU& out);

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, openfmb::commonmodule::ENG_CalcMethodKind& out);

void convert_from_proto(const commonmodule::ReadingMMTR& in, openfmb::commonmodule::ReadingMMTR& out);

void convert_from_proto(const commonmodule::AnalogueValue& in, openfmb::commonmodule::AnalogueValue& out);

void convert_from_proto(const commonmodule::CMV& in, openfmb::commonmodule::CMV& out);

void convert_from_proto(const commonmodule::LogicalNode& in, openfmb::commonmodule::LogicalNode& out);

void convert_from_proto(const commonmodule::MV& in, openfmb::commonmodule::MV& out);

void convert_from_proto(const commonmodule::IdentifiedObject& in, openfmb::commonmodule::IdentifiedObject& out);

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, openfmb::commonmodule::ConductingEquipmentTerminalReading& out);

void convert_from_proto(const commonmodule::Terminal& in, openfmb::commonmodule::Terminal& out);

void convert_from_proto(const commonmodule::ConductingEquipment& in, openfmb::commonmodule::ConductingEquipment& out);

void convert_from_proto(const commonmodule::BCR& in, openfmb::commonmodule::BCR& out);

void convert_from_proto(const breakermodule::Breaker& in, openfmb::breakermodule::Breaker& out);

void convert_from_proto(const commonmodule::IED& in, openfmb::commonmodule::IED& out);

void convert_from_proto(const commonmodule::Meter& in, openfmb::commonmodule::Meter& out);

void convert_from_proto(const commonmodule::Vector& in, openfmb::commonmodule::Vector& out);

void convert_from_proto(const resourcemodule::ResourceReading& in, openfmb::resourcemodule::ResourceReading& out);

void convert_from_proto(const commonmodule::WYE& in, openfmb::commonmodule::WYE& out);

void convert_from_proto(const commonmodule::ReadingMMTN& in, openfmb::commonmodule::ReadingMMTN& out);

void convert_from_proto(const commonmodule::Unit& in, openfmb::commonmodule::Unit& out);

void convert_from_proto(const commonmodule::DEL& in, openfmb::commonmodule::DEL& out);

void convert_from_proto(const breakermodule::BreakerReading& in, openfmb::breakermodule::BreakerReading& out);

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, openfmb::resourcemodule::ResourceReadingProfile& out);

void convert_from_proto(const commonmodule::ACDCTerminal& in, openfmb::commonmodule::ACDCTerminal& out);

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, openfmb::commonmodule::ReadingMessageInfo& out);

void convert_from_proto(const commonmodule::Quality& in, openfmb::commonmodule::Quality& out);

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, openfmb::breakermodule::BreakerReadingProfile& out);

void convert_from_proto(const commonmodule::DetailQual& in, openfmb::commonmodule::DetailQual& out);

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, openfmb::commonmodule::ENG_PFSignKind& out);

void convert_from_proto(const commonmodule::PhaseMMTN& in, openfmb::commonmodule::PhaseMMTN& out);

} // end namespace dds

} // end namespace adapter

#endif

