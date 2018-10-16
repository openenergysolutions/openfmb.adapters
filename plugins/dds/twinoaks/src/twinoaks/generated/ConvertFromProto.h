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

#include "solarmodule/solarmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "metermodule/metermodule.pb.h"

#include "OpenFMB-3.0.0TypeSupport.hh"

#include "../NamespaceAlias.h"

namespace adapter {

namespace dds {

void convert_from_proto(const solarmodule::SolarControlProfile& in, twinoaks::solarmodule::SolarControlProfile& out);

void convert_from_proto(const essmodule::ESSStatusProfile& in, twinoaks::essmodule::ESSStatusProfile& out);

void convert_from_proto(const essmodule::ESSReadingProfile& in, twinoaks::essmodule::ESSReadingProfile& out);

void convert_from_proto(const switchmodule::SwitchReadingProfile& in, twinoaks::switchmodule::SwitchReadingProfile& out);

void convert_from_proto(const switchmodule::SwitchControlProfile& in, twinoaks::switchmodule::SwitchControlProfile& out);

void convert_from_proto(const loadmodule::LoadReadingProfile& in, twinoaks::loadmodule::LoadReadingProfile& out);

void convert_from_proto(const switchmodule::SwitchStatusProfile& in, twinoaks::switchmodule::SwitchStatusProfile& out);

void convert_from_proto(const loadmodule::LoadControlProfile& in, twinoaks::loadmodule::LoadControlProfile& out);

void convert_from_proto(const solarmodule::SolarReadingProfile& in, twinoaks::solarmodule::SolarReadingProfile& out);

void convert_from_proto(const essmodule::ESSControlProfile& in, twinoaks::essmodule::ESSControlProfile& out);

void convert_from_proto(const solarmodule::SolarStatusProfile& in, twinoaks::solarmodule::SolarStatusProfile& out);

void convert_from_proto(const metermodule::MeterReadingProfile& in, twinoaks::metermodule::MeterReadingProfile& out);

void convert_from_proto(const loadmodule::LoadStatusProfile& in, twinoaks::loadmodule::LoadStatusProfile& out);

} // end namespace dds

} // end namespace adapter

#endif

