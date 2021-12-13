// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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

#ifndef OPENFMB_MESSAGEVISITORS_H
#define OPENFMB_MESSAGEVISITORS_H

#include "reclosermodule/reclosermodule.pb.h"
#include "circuitsegmentservicemodule/circuitsegmentservicemodule.pb.h"
#include "solarmodule/solarmodule.pb.h"
#include "breakermodule/breakermodule.pb.h"
#include "capbankmodule/capbankmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "generationmodule/generationmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "regulatormodule/regulatormodule.pb.h"
#include "metermodule/metermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"
#include "../IMessageVisitor.h"

namespace adapter {

namespace util {

void visit(const breakermodule::BreakerDiscreteControlProfile& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerEventProfile& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerReadingProfile& message, IMessageVisitor& visitor);

void visit(const breakermodule::BreakerStatusProfile& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankControlProfile& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankDiscreteControlProfile& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankEventProfile& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankReadingProfile& message, IMessageVisitor& visitor);

void visit(const capbankmodule::CapBankStatusProfile& message, IMessageVisitor& visitor);

void visit(const circuitsegmentservicemodule::CircuitSegmentControlProfile& message, IMessageVisitor& visitor);

void visit(const circuitsegmentservicemodule::CircuitSegmentEventProfile& message, IMessageVisitor& visitor);

void visit(const circuitsegmentservicemodule::CircuitSegmentStatusProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSCapabilityOverrideProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSCapabilityProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSControlProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSEventProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSReadingProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSStatusProfile& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationCapabilityOverrideProfile& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationCapabilityProfile& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationControlProfile& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationDiscreteControlProfile& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationEventProfile& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationReadingProfile& message, IMessageVisitor& visitor);

void visit(const generationmodule::GenerationStatusProfile& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadControlProfile& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadEventProfile& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadReadingProfile& message, IMessageVisitor& visitor);

void visit(const loadmodule::LoadStatusProfile& message, IMessageVisitor& visitor);

void visit(const metermodule::MeterReadingProfile& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserDiscreteControlProfile& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserEventProfile& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserReadingProfile& message, IMessageVisitor& visitor);

void visit(const reclosermodule::RecloserStatusProfile& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorDiscreteControlProfile& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorControlProfile& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorEventProfile& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorReadingProfile& message, IMessageVisitor& visitor);

void visit(const regulatormodule::RegulatorStatusProfile& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceDiscreteControlProfile& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceEventProfile& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceReadingProfile& message, IMessageVisitor& visitor);

void visit(const resourcemodule::ResourceStatusProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarCapabilityOverrideProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarCapabilityProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControlProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarEventProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarReadingProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarStatusProfile& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchDiscreteControlProfile& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchEventProfile& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchReadingProfile& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchStatusProfile& message, IMessageVisitor& visitor);

} // end namespace util

} // end namespace adapter

#endif

