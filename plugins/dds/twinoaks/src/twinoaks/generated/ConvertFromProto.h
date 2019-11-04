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
#include "shuntmodule/shuntmodule.pb.h"
#include "solarmodule/solarmodule.pb.h"
#include "breakermodule/breakermodule.pb.h"
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

void convert_from_proto(const breakermodule::BreakerDiscreteControlProfile& in, twinoaks::breakermodule::BreakerDiscreteControlProfile& out);

void convert_from_proto(const breakermodule::BreakerEventProfile& in, twinoaks::breakermodule::BreakerEventProfile& out);

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, twinoaks::breakermodule::BreakerReadingProfile& out);

void convert_from_proto(const breakermodule::BreakerStatusProfile& in, twinoaks::breakermodule::BreakerStatusProfile& out);

void convert_from_proto(const essmodule::ESSControlProfile& in, twinoaks::essmodule::ESSControlProfile& out);

void convert_from_proto(const essmodule::ESSEventProfile& in, twinoaks::essmodule::ESSEventProfile& out);

void convert_from_proto(const essmodule::ESSReadingProfile& in, twinoaks::essmodule::ESSReadingProfile& out);

void convert_from_proto(const essmodule::ESSStatusProfile& in, twinoaks::essmodule::ESSStatusProfile& out);

void convert_from_proto(const generationmodule::GenerationControlProfile& in, twinoaks::generationmodule::GenerationControlProfile& out);

void convert_from_proto(const generationmodule::GenerationEventProfile& in, twinoaks::generationmodule::GenerationEventProfile& out);

void convert_from_proto(const generationmodule::GenerationReadingProfile& in, twinoaks::generationmodule::GenerationReadingProfile& out);

void convert_from_proto(const generationmodule::GenerationStatusProfile& in, twinoaks::generationmodule::GenerationStatusProfile& out);

void convert_from_proto(const loadmodule::LoadControlProfile& in, twinoaks::loadmodule::LoadControlProfile& out);

void convert_from_proto(const loadmodule::LoadEventProfile& in, twinoaks::loadmodule::LoadEventProfile& out);

void convert_from_proto(const loadmodule::LoadReadingProfile& in, twinoaks::loadmodule::LoadReadingProfile& out);

void convert_from_proto(const loadmodule::LoadStatusProfile& in, twinoaks::loadmodule::LoadStatusProfile& out);

void convert_from_proto(const metermodule::MeterReadingProfile& in, twinoaks::metermodule::MeterReadingProfile& out);

void convert_from_proto(const reclosermodule::RecloserControlProfile& in, twinoaks::reclosermodule::RecloserControlProfile& out);

void convert_from_proto(const reclosermodule::RecloserDiscreteControlProfile& in, twinoaks::reclosermodule::RecloserDiscreteControlProfile& out);

void convert_from_proto(const reclosermodule::RecloserEventProfile& in, twinoaks::reclosermodule::RecloserEventProfile& out);

void convert_from_proto(const reclosermodule::RecloserReadingProfile& in, twinoaks::reclosermodule::RecloserReadingProfile& out);

void convert_from_proto(const reclosermodule::RecloserStatusProfile& in, twinoaks::reclosermodule::RecloserStatusProfile& out);

void convert_from_proto(const regulatormodule::RegulatorControlProfile& in, twinoaks::regulatormodule::RegulatorControlProfile& out);

void convert_from_proto(const regulatormodule::RegulatorEventProfile& in, twinoaks::regulatormodule::RegulatorEventProfile& out);

void convert_from_proto(const regulatormodule::RegulatorReadingProfile& in, twinoaks::regulatormodule::RegulatorReadingProfile& out);

void convert_from_proto(const regulatormodule::RegulatorStatusProfile& in, twinoaks::regulatormodule::RegulatorStatusProfile& out);

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, twinoaks::resourcemodule::ResourceReadingProfile& out);

void convert_from_proto(const resourcemodule::ResourceStatusProfile& in, twinoaks::resourcemodule::ResourceStatusProfile& out);

void convert_from_proto(const solarmodule::SolarControlProfile& in, twinoaks::solarmodule::SolarControlProfile& out);

void convert_from_proto(const solarmodule::SolarEventProfile& in, twinoaks::solarmodule::SolarEventProfile& out);

void convert_from_proto(const solarmodule::SolarReadingProfile& in, twinoaks::solarmodule::SolarReadingProfile& out);

void convert_from_proto(const solarmodule::SolarStatusProfile& in, twinoaks::solarmodule::SolarStatusProfile& out);

void convert_from_proto(const shuntmodule::ShuntControlProfile& in, twinoaks::shuntmodule::ShuntControlProfile& out);

void convert_from_proto(const shuntmodule::ShuntDiscreteControlProfile& in, twinoaks::shuntmodule::ShuntDiscreteControlProfile& out);

void convert_from_proto(const shuntmodule::ShuntEventProfile& in, twinoaks::shuntmodule::ShuntEventProfile& out);

void convert_from_proto(const shuntmodule::ShuntStatusProfile& in, twinoaks::shuntmodule::ShuntStatusProfile& out);

void convert_from_proto(const shuntmodule::ShuntReadingProfile& in, twinoaks::shuntmodule::ShuntReadingProfile& out);

void convert_from_proto(const switchmodule::SwitchControlProfile& in, twinoaks::switchmodule::SwitchControlProfile& out);

void convert_from_proto(const switchmodule::SwitchDiscreteControlProfile& in, twinoaks::switchmodule::SwitchDiscreteControlProfile& out);

void convert_from_proto(const switchmodule::SwitchEventProfile& in, twinoaks::switchmodule::SwitchEventProfile& out);

void convert_from_proto(const switchmodule::SwitchReadingProfile& in, twinoaks::switchmodule::SwitchReadingProfile& out);

void convert_from_proto(const switchmodule::SwitchStatusProfile& in, twinoaks::switchmodule::SwitchStatusProfile& out);

} // end namespace dds

} // end namespace adapter

#endif

