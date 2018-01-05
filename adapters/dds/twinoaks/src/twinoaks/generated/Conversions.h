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

#include "OpenFMB-3.0.0TypeSupport.hh"

namespace adapter {

namespace dds {

void convert(const commonmodule::Timestamp&, openfmb::commonmodule::Timestamp&);

void convert(const commonmodule::LogicalNode&, openfmb::commonmodule::LogicalNode&);

void convert(const commonmodule::Unit&, openfmb::commonmodule::Unit&);

void convert(const commonmodule::ENG_CalcMethodKind&, openfmb::commonmodule::ENG_CalcMethodKind&);

void convert(const commonmodule::BCR&, openfmb::commonmodule::BCR&);

void convert(const commonmodule::ReadingMMTR&, openfmb::commonmodule::ReadingMMTR&);

void convert(const commonmodule::WYE&, openfmb::commonmodule::WYE&);

void convert(const commonmodule::Vector&, openfmb::commonmodule::Vector&);

void convert(const resourcemodule::ResourceReadingProfile&, openfmb::resourcemodule::ResourceReadingProfile&);

void convert(const commonmodule::Quality&, openfmb::commonmodule::Quality&);

void convert(const commonmodule::ConductingEquipmentTerminalReading&, openfmb::commonmodule::ConductingEquipmentTerminalReading&);

void convert(const commonmodule::ConductingEquipment&, openfmb::commonmodule::ConductingEquipment&);

void convert(const commonmodule::ReadingMMXU&, openfmb::commonmodule::ReadingMMXU&);

void convert(const commonmodule::ReadingMMTN&, openfmb::commonmodule::ReadingMMTN&);

void convert(const commonmodule::PhaseMMTN&, openfmb::commonmodule::PhaseMMTN&);

void convert(const commonmodule::AnalogueValue&, openfmb::commonmodule::AnalogueValue&);

void convert(const commonmodule::CMV&, openfmb::commonmodule::CMV&);

void convert(const commonmodule::MV&, openfmb::commonmodule::MV&);

void convert(const resourcemodule::ResourceReading&, openfmb::resourcemodule::ResourceReading&);

void convert(const commonmodule::IdentifiedObject&, openfmb::commonmodule::IdentifiedObject&);

void convert(const commonmodule::Terminal&, openfmb::commonmodule::Terminal&);

void convert(const commonmodule::IED&, openfmb::commonmodule::IED&);

void convert(const commonmodule::ReadingMessageInfo&, openfmb::commonmodule::ReadingMessageInfo&);

void convert(const commonmodule::ACDCTerminal&, openfmb::commonmodule::ACDCTerminal&);

void convert(const commonmodule::DEL&, openfmb::commonmodule::DEL&);

void convert(const commonmodule::Meter&, openfmb::commonmodule::Meter&);

} // end namespace dds

} // end namespace adapter

#endif

