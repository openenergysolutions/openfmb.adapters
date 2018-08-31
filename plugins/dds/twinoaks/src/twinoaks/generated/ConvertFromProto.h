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

void convert_from_proto(const resourcemodule::ResourceReadingProfile& in, twinoaks::resourcemodule::ResourceReadingProfile& out);

void convert_from_proto(const breakermodule::BreakerReadingProfile& in, twinoaks::breakermodule::BreakerReadingProfile& out);

} // end namespace dds

} // end namespace adapter

#endif

