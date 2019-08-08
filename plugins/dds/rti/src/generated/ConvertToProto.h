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
#include "solarmodule/solarmodule.pb.h"
#include "breakermodule/breakermodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "generationmodule/generationmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "regulatormodule/regulatormodule.pb.h"
#include "metermodule/metermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"

#include "OpenFMB-IDL.hpp"

namespace adapter {

namespace dds {

namespace rti {

void convert_to_proto(const openfmb::generationmodule::GenerationStatusProfile& in, generationmodule::GenerationStatusProfile& out);

void convert_to_proto(const openfmb::essmodule::ESSControlProfile& in, essmodule::ESSControlProfile& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorEventProfile& in, regulatormodule::RegulatorEventProfile& out);

void convert_to_proto(const openfmb::solarmodule::SolarEventProfile& in, solarmodule::SolarEventProfile& out);

void convert_to_proto(const openfmb::breakermodule::BreakerReadingProfile& in, breakermodule::BreakerReadingProfile& out);

void convert_to_proto(const openfmb::loadmodule::LoadEventProfile& in, loadmodule::LoadEventProfile& out);

void convert_to_proto(const openfmb::breakermodule::BreakerEventProfile& in, breakermodule::BreakerEventProfile& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserReadingProfile& in, reclosermodule::RecloserReadingProfile& out);

void convert_to_proto(const openfmb::switchmodule::SwitchStatusProfile& in, switchmodule::SwitchStatusProfile& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorStatusProfile& in, regulatormodule::RegulatorStatusProfile& out);

void convert_to_proto(const openfmb::switchmodule::SwitchReadingProfile& in, switchmodule::SwitchReadingProfile& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserDiscreteControlProfile& in, reclosermodule::RecloserDiscreteControlProfile& out);

void convert_to_proto(const openfmb::solarmodule::SolarReadingProfile& in, solarmodule::SolarReadingProfile& out);

void convert_to_proto(const openfmb::breakermodule::BreakerStatusProfile& in, breakermodule::BreakerStatusProfile& out);

void convert_to_proto(const openfmb::loadmodule::LoadReadingProfile& in, loadmodule::LoadReadingProfile& out);

void convert_to_proto(const openfmb::generationmodule::GenerationReadingProfile& in, generationmodule::GenerationReadingProfile& out);

void convert_to_proto(const openfmb::metermodule::MeterReadingProfile& in, metermodule::MeterReadingProfile& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserEventProfile& in, reclosermodule::RecloserEventProfile& out);

void convert_to_proto(const openfmb::switchmodule::SwitchControlProfile& in, switchmodule::SwitchControlProfile& out);

void convert_to_proto(const openfmb::switchmodule::SwitchDiscreteControlProfile& in, switchmodule::SwitchDiscreteControlProfile& out);

void convert_to_proto(const openfmb::generationmodule::GenerationControlProfile& in, generationmodule::GenerationControlProfile& out);

void convert_to_proto(const openfmb::loadmodule::LoadControlProfile& in, loadmodule::LoadControlProfile& out);

void convert_to_proto(const openfmb::breakermodule::BreakerDiscreteControlProfile& in, breakermodule::BreakerDiscreteControlProfile& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorReadingProfile& in, regulatormodule::RegulatorReadingProfile& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceReadingProfile& in, resourcemodule::ResourceReadingProfile& out);

void convert_to_proto(const openfmb::generationmodule::GenerationEventProfile& in, generationmodule::GenerationEventProfile& out);

void convert_to_proto(const openfmb::loadmodule::LoadStatusProfile& in, loadmodule::LoadStatusProfile& out);

void convert_to_proto(const openfmb::switchmodule::SwitchEventProfile& in, switchmodule::SwitchEventProfile& out);

void convert_to_proto(const openfmb::essmodule::ESSReadingProfile& in, essmodule::ESSReadingProfile& out);

void convert_to_proto(const openfmb::solarmodule::SolarControlProfile& in, solarmodule::SolarControlProfile& out);

void convert_to_proto(const openfmb::essmodule::ESSStatusProfile& in, essmodule::ESSStatusProfile& out);

void convert_to_proto(const openfmb::essmodule::ESSEventProfile& in, essmodule::ESSEventProfile& out);

void convert_to_proto(const openfmb::resourcemodule::ResourceStatusProfile& in, resourcemodule::ResourceStatusProfile& out);

void convert_to_proto(const openfmb::solarmodule::SolarStatusProfile& in, solarmodule::SolarStatusProfile& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserStatusProfile& in, reclosermodule::RecloserStatusProfile& out);

void convert_to_proto(const openfmb::regulatormodule::RegulatorControlProfile& in, regulatormodule::RegulatorControlProfile& out);

void convert_to_proto(const openfmb::reclosermodule::RecloserControlProfile& in, reclosermodule::RecloserControlProfile& out);

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

