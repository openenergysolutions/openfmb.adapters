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

#ifndef OPENFMB_CONVERSIONS_H
#define OPENFMB_CONVERSIONS_H

#include "adapter-api/proto/resourcemodule/resourcemodule.pb.h"
#include "adapter-api/proto/breakermodule/breakermodule.pb.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

namespace adapter {

namespace dds {

void convert_message(const commonmodule::MV&, openfmb::commonmodule::MV&);

void convert_message(const commonmodule::ReadingMessageInfo&, openfmb::commonmodule::ReadingMessageInfo&);

void convert_message(const commonmodule::IED&, openfmb::commonmodule::IED&);

void convert_message(const commonmodule::BCR&, openfmb::commonmodule::BCR&);

void convert_message(const resourcemodule::ResourceReading&, openfmb::resourcemodule::ResourceReading&);

void convert_message(const commonmodule::ConductingEquipment&, openfmb::commonmodule::ConductingEquipment&);

void convert_message(const commonmodule::ConductingEquipmentTerminalReading&, openfmb::commonmodule::ConductingEquipmentTerminalReading&);

void convert_message(const commonmodule::Quality&, openfmb::commonmodule::Quality&);

void convert_message(const commonmodule::ENG_CalcMethodKind&, openfmb::commonmodule::ENG_CalcMethodKind&);

void convert_message(const breakermodule::Breaker&, openfmb::breakermodule::Breaker&);

void convert_message(const commonmodule::WYE&, openfmb::commonmodule::WYE&);

void convert_message(const breakermodule::BreakerReading&, openfmb::breakermodule::BreakerReading&);

void convert_message(const commonmodule::PhaseMMTN&, openfmb::commonmodule::PhaseMMTN&);

void convert_message(const commonmodule::IdentifiedObject&, openfmb::commonmodule::IdentifiedObject&);

void convert_message(const commonmodule::Vector&, openfmb::commonmodule::Vector&);

void convert_message(const commonmodule::ACDCTerminal&, openfmb::commonmodule::ACDCTerminal&);

void convert_message(const commonmodule::LogicalNode&, openfmb::commonmodule::LogicalNode&);

void convert_message(const commonmodule::Meter&, openfmb::commonmodule::Meter&);

void convert_message(const commonmodule::ReadingMMTR&, openfmb::commonmodule::ReadingMMTR&);

void convert_message(const commonmodule::Terminal&, openfmb::commonmodule::Terminal&);

void convert_message(const breakermodule::BreakerReadingProfile&, openfmb::breakermodule::BreakerReadingProfile&);

void convert_message(const resourcemodule::ResourceReadingProfile&, openfmb::resourcemodule::ResourceReadingProfile&);

void convert_message(const commonmodule::DEL&, openfmb::commonmodule::DEL&);

void convert_message(const commonmodule::ReadingMMTN&, openfmb::commonmodule::ReadingMMTN&);

void convert_message(const commonmodule::Timestamp&, openfmb::commonmodule::Timestamp&);

void convert_message(const commonmodule::AnalogueValue&, openfmb::commonmodule::AnalogueValue&);

void convert_message(const commonmodule::ReadingMMXU&, openfmb::commonmodule::ReadingMMXU&);

void convert_message(const commonmodule::CMV&, openfmb::commonmodule::CMV&);

void convert_message(const commonmodule::Unit&, openfmb::commonmodule::Unit&);

} // end namespace dds

} // end namespace adapter

#endif

