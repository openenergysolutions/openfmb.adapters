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

#ifndef OPENFMB_CONVERTTOPROTO_H
#define OPENFMB_CONVERTTOPROTO_H

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

#include "OpenFMB-IDLTypeSupport.hh"

#include "../NamespaceAlias.h"

namespace adapter {

namespace dds {

void convert_to_proto(const twinoaks::breakermodule::BreakerDiscreteControlProfile& in, breakermodule::BreakerDiscreteControlProfile& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerEventProfile& in, breakermodule::BreakerEventProfile& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out);

void convert_to_proto(const twinoaks::breakermodule::BreakerStatusProfile& in, breakermodule::BreakerStatusProfile& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankControlProfile& in, capbankmodule::CapBankControlProfile& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankDiscreteControlProfile& in, capbankmodule::CapBankDiscreteControlProfile& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankEventProfile& in, capbankmodule::CapBankEventProfile& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankReadingProfile& in, capbankmodule::CapBankReadingProfile& out);

void convert_to_proto(const twinoaks::capbankmodule::CapBankStatusProfile& in, capbankmodule::CapBankStatusProfile& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentControlProfile& in, circuitsegmentservicemodule::CircuitSegmentControlProfile& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentEventProfile& in, circuitsegmentservicemodule::CircuitSegmentEventProfile& out);

void convert_to_proto(const twinoaks::circuitsegmentservicemodule::CircuitSegmentStatusProfile& in, circuitsegmentservicemodule::CircuitSegmentStatusProfile& out);

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityOverrideProfile& in, essmodule::ESSCapabilityOverrideProfile& out);

void convert_to_proto(const twinoaks::essmodule::ESSCapabilityProfile& in, essmodule::ESSCapabilityProfile& out);

void convert_to_proto(const twinoaks::essmodule::ESSControlProfile& in, essmodule::ESSControlProfile& out);

void convert_to_proto(const twinoaks::essmodule::ESSEventProfile& in, essmodule::ESSEventProfile& out);

void convert_to_proto(const twinoaks::essmodule::ESSReadingProfile& in, essmodule::ESSReadingProfile& out);

void convert_to_proto(const twinoaks::essmodule::ESSStatusProfile& in, essmodule::ESSStatusProfile& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityOverrideProfile& in, generationmodule::GenerationCapabilityOverrideProfile& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationCapabilityProfile& in, generationmodule::GenerationCapabilityProfile& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationControlProfile& in, generationmodule::GenerationControlProfile& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationDiscreteControlProfile& in, generationmodule::GenerationDiscreteControlProfile& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationEventProfile& in, generationmodule::GenerationEventProfile& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationReadingProfile& in, generationmodule::GenerationReadingProfile& out);

void convert_to_proto(const twinoaks::generationmodule::GenerationStatusProfile& in, generationmodule::GenerationStatusProfile& out);

void convert_to_proto(const twinoaks::loadmodule::LoadControlProfile& in, loadmodule::LoadControlProfile& out);

void convert_to_proto(const twinoaks::loadmodule::LoadEventProfile& in, loadmodule::LoadEventProfile& out);

void convert_to_proto(const twinoaks::loadmodule::LoadReadingProfile& in, loadmodule::LoadReadingProfile& out);

void convert_to_proto(const twinoaks::loadmodule::LoadStatusProfile& in, loadmodule::LoadStatusProfile& out);

void convert_to_proto(const twinoaks::metermodule::MeterReadingProfile& in, metermodule::MeterReadingProfile& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserDiscreteControlProfile& in, reclosermodule::RecloserDiscreteControlProfile& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserEventProfile& in, reclosermodule::RecloserEventProfile& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserReadingProfile& in, reclosermodule::RecloserReadingProfile& out);

void convert_to_proto(const twinoaks::reclosermodule::RecloserStatusProfile& in, reclosermodule::RecloserStatusProfile& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorDiscreteControlProfile& in, regulatormodule::RegulatorDiscreteControlProfile& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorControlProfile& in, regulatormodule::RegulatorControlProfile& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorEventProfile& in, regulatormodule::RegulatorEventProfile& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorReadingProfile& in, regulatormodule::RegulatorReadingProfile& out);

void convert_to_proto(const twinoaks::regulatormodule::RegulatorStatusProfile& in, regulatormodule::RegulatorStatusProfile& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceDiscreteControlProfile& in, resourcemodule::ResourceDiscreteControlProfile& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceEventProfile& in, resourcemodule::ResourceEventProfile& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out);

void convert_to_proto(const twinoaks::resourcemodule::ResourceStatusProfile& in, resourcemodule::ResourceStatusProfile& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityOverrideProfile& in, solarmodule::SolarCapabilityOverrideProfile& out);

void convert_to_proto(const twinoaks::solarmodule::SolarCapabilityProfile& in, solarmodule::SolarCapabilityProfile& out);

void convert_to_proto(const twinoaks::solarmodule::SolarControlProfile& in, solarmodule::SolarControlProfile& out);

void convert_to_proto(const twinoaks::solarmodule::SolarEventProfile& in, solarmodule::SolarEventProfile& out);

void convert_to_proto(const twinoaks::solarmodule::SolarReadingProfile& in, solarmodule::SolarReadingProfile& out);

void convert_to_proto(const twinoaks::solarmodule::SolarStatusProfile& in, solarmodule::SolarStatusProfile& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchDiscreteControlProfile& in, switchmodule::SwitchDiscreteControlProfile& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchEventProfile& in, switchmodule::SwitchEventProfile& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchReadingProfile& in, switchmodule::SwitchReadingProfile& out);

void convert_to_proto(const twinoaks::switchmodule::SwitchStatusProfile& in, switchmodule::SwitchStatusProfile& out);

} // end namespace dds

} // end namespace adapter

#endif

