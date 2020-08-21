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

#include "reclosermodule/reclosermodule.pb.h"
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

#include "OpenFMB-IDL.hpp"

namespace adapter {

namespace dds {

namespace rti {

void convert_from_proto(const breakermodule::BreakerDiscreteControlProfile& in, openfmb::breakermodule::BreakerDiscreteControlProfile& out);

void convert_from_proto(const breakermodule::BreakerEventProfile& in, openfmb::breakermodule::BreakerEventProfile& out);

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, openfmb::breakermodule::BreakerReadingProfile& out);

void convert_from_proto(const breakermodule::BreakerStatusProfile& in, openfmb::breakermodule::BreakerStatusProfile& out);

void convert_from_proto(const capbankmodule::CapBankControlProfile& in, openfmb::capbankmodule::CapBankControlProfile& out);

void convert_from_proto(const capbankmodule::CapBankDiscreteControlProfile& in, openfmb::capbankmodule::CapBankDiscreteControlProfile& out);

void convert_from_proto(const capbankmodule::CapBankEventProfile& in, openfmb::capbankmodule::CapBankEventProfile& out);

void convert_from_proto(const capbankmodule::CapBankReadingProfile& in, openfmb::capbankmodule::CapBankReadingProfile& out);

void convert_from_proto(const capbankmodule::CapBankStatusProfile& in, openfmb::capbankmodule::CapBankStatusProfile& out);

void convert_from_proto(const essmodule::ESSControlProfile& in, openfmb::essmodule::ESSControlProfile& out);

void convert_from_proto(const essmodule::ESSEventProfile& in, openfmb::essmodule::ESSEventProfile& out);

void convert_from_proto(const essmodule::ESSReadingProfile& in, openfmb::essmodule::ESSReadingProfile& out);

void convert_from_proto(const essmodule::ESSStatusProfile& in, openfmb::essmodule::ESSStatusProfile& out);

void convert_from_proto(const generationmodule::GenerationControlProfile& in, openfmb::generationmodule::GenerationControlProfile& out);

void convert_from_proto(const generationmodule::GenerationDiscreteControlProfile& in, openfmb::generationmodule::GenerationDiscreteControlProfile& out);

void convert_from_proto(const generationmodule::GenerationEventProfile& in, openfmb::generationmodule::GenerationEventProfile& out);

void convert_from_proto(const generationmodule::GenerationReadingProfile& in, openfmb::generationmodule::GenerationReadingProfile& out);

void convert_from_proto(const generationmodule::GenerationStatusProfile& in, openfmb::generationmodule::GenerationStatusProfile& out);

void convert_from_proto(const loadmodule::LoadControlProfile& in, openfmb::loadmodule::LoadControlProfile& out);

void convert_from_proto(const loadmodule::LoadEventProfile& in, openfmb::loadmodule::LoadEventProfile& out);

void convert_from_proto(const loadmodule::LoadReadingProfile& in, openfmb::loadmodule::LoadReadingProfile& out);

void convert_from_proto(const loadmodule::LoadStatusProfile& in, openfmb::loadmodule::LoadStatusProfile& out);

void convert_from_proto(const metermodule::MeterReadingProfile& in, openfmb::metermodule::MeterReadingProfile& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControlProfile& in, openfmb::reclosermodule::RecloserDiscreteControlProfile& out);

void convert_from_proto(const reclosermodule::RecloserEventProfile& in, openfmb::reclosermodule::RecloserEventProfile& out);

void convert_from_proto(const reclosermodule::RecloserReadingProfile& in, openfmb::reclosermodule::RecloserReadingProfile& out);

void convert_from_proto(const reclosermodule::RecloserStatusProfile& in, openfmb::reclosermodule::RecloserStatusProfile& out);

void convert_from_proto(const regulatormodule::RegulatorDiscreteControlProfile& in, openfmb::regulatormodule::RegulatorDiscreteControlProfile& out);

void convert_from_proto(const regulatormodule::RegulatorControlProfile& in, openfmb::regulatormodule::RegulatorControlProfile& out);

void convert_from_proto(const regulatormodule::RegulatorEventProfile& in, openfmb::regulatormodule::RegulatorEventProfile& out);

void convert_from_proto(const regulatormodule::RegulatorReadingProfile& in, openfmb::regulatormodule::RegulatorReadingProfile& out);

void convert_from_proto(const regulatormodule::RegulatorStatusProfile& in, openfmb::regulatormodule::RegulatorStatusProfile& out);

void convert_from_proto(const resourcemodule::ResourceDiscreteControlProfile& in, openfmb::resourcemodule::ResourceDiscreteControlProfile& out);

void convert_from_proto(const resourcemodule::ResourceEventProfile& in, openfmb::resourcemodule::ResourceEventProfile& out);

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, openfmb::resourcemodule::ResourceReadingProfile& out);

void convert_from_proto(const resourcemodule::ResourceStatusProfile& in, openfmb::resourcemodule::ResourceStatusProfile& out);

void convert_from_proto(const solarmodule::SolarControlProfile& in, openfmb::solarmodule::SolarControlProfile& out);

void convert_from_proto(const solarmodule::SolarEventProfile& in, openfmb::solarmodule::SolarEventProfile& out);

void convert_from_proto(const solarmodule::SolarReadingProfile& in, openfmb::solarmodule::SolarReadingProfile& out);

void convert_from_proto(const solarmodule::SolarStatusProfile& in, openfmb::solarmodule::SolarStatusProfile& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControlProfile& in, openfmb::switchmodule::SwitchDiscreteControlProfile& out);

void convert_from_proto(const switchmodule::SwitchEventProfile& in, openfmb::switchmodule::SwitchEventProfile& out);

void convert_from_proto(const switchmodule::SwitchReadingProfile& in, openfmb::switchmodule::SwitchReadingProfile& out);

void convert_from_proto(const switchmodule::SwitchStatusProfile& in, openfmb::switchmodule::SwitchStatusProfile& out);

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

