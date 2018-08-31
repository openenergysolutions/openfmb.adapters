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

#include "breakermodule/breakermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"

#include "OpenFMB-3.0.0TypeSupport.hh"
#include "../NamespaceAlias.h"

namespace adapter {

namespace dds {

void convert_from_proto(const commonmodule::Timestamp& in, twinoaks::commonmodule::Timestamp& out);

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, twinoaks::breakermodule::BreakerReadingProfile& out);

void convert_from_proto(const commonmodule::WYE& in, twinoaks::commonmodule::WYE& out);

void convert_from_proto(const commonmodule::CMV& in, twinoaks::commonmodule::CMV& out);

void convert_from_proto(const commonmodule::ConductingEquipmentTerminalReading& in, twinoaks::commonmodule::ConductingEquipmentTerminalReading& out);

void convert_from_proto(const commonmodule::Quality& in, twinoaks::commonmodule::Quality& out);

void convert_from_proto(const commonmodule::ENG_CalcMethodKind& in, twinoaks::commonmodule::ENG_CalcMethodKind& out);

void convert_from_proto(const commonmodule::TimeQuality& in, twinoaks::commonmodule::TimeQuality& out);

void convert_from_proto(const commonmodule::ACDCTerminal& in, twinoaks::commonmodule::ACDCTerminal& out);

void convert_from_proto(const commonmodule::Terminal& in, twinoaks::commonmodule::Terminal& out);

void convert_from_proto(const commonmodule::BCR& in, twinoaks::commonmodule::BCR& out);

void convert_from_proto(const commonmodule::IdentifiedObject& in, twinoaks::commonmodule::IdentifiedObject& out);

void convert_from_proto(const resourcemodule::ResourceReading& in, twinoaks::resourcemodule::ResourceReading& out);

void convert_from_proto(const commonmodule::ReadingMMTR& in, twinoaks::commonmodule::ReadingMMTR& out);

void convert_from_proto(const commonmodule::IED& in, twinoaks::commonmodule::IED& out);

void convert_from_proto(const breakermodule::BreakerReading& in, twinoaks::breakermodule::BreakerReading& out);

void convert_from_proto(const commonmodule::PhaseMMTN& in, twinoaks::commonmodule::PhaseMMTN& out);

void convert_from_proto(const commonmodule::NamedObject& in, twinoaks::commonmodule::NamedObject& out);

void convert_from_proto(const commonmodule::ReadingMMXU& in, twinoaks::commonmodule::ReadingMMXU& out);

void convert_from_proto(const commonmodule::AnalogueValue& in, twinoaks::commonmodule::AnalogueValue& out);

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, twinoaks::resourcemodule::ResourceReadingProfile& out);

void convert_from_proto(const commonmodule::Vector& in, twinoaks::commonmodule::Vector& out);

void convert_from_proto(const commonmodule::LogicalNode& in, twinoaks::commonmodule::LogicalNode& out);

void convert_from_proto(const commonmodule::MessageInfo& in, twinoaks::commonmodule::MessageInfo& out);

void convert_from_proto(const commonmodule::MV& in, twinoaks::commonmodule::MV& out);

void convert_from_proto(const commonmodule::ConductingEquipment& in, twinoaks::commonmodule::ConductingEquipment& out);

void convert_from_proto(const commonmodule::Unit& in, twinoaks::commonmodule::Unit& out);

void convert_from_proto(const commonmodule::Meter& in, twinoaks::commonmodule::Meter& out);

void convert_from_proto(const commonmodule::DetailQual& in, twinoaks::commonmodule::DetailQual& out);

void convert_from_proto(const commonmodule::ReadingMessageInfo& in, twinoaks::commonmodule::ReadingMessageInfo& out);

void convert_from_proto(const commonmodule::ENG_PFSignKind& in, twinoaks::commonmodule::ENG_PFSignKind& out);

void convert_from_proto(const breakermodule::Breaker& in, twinoaks::breakermodule::Breaker& out);

void convert_from_proto(const commonmodule::DEL& in, twinoaks::commonmodule::DEL& out);

void convert_from_proto(const commonmodule::ReadingMMTN& in, twinoaks::commonmodule::ReadingMMTN& out);

} // end namespace dds

} // end namespace adapter

#endif

