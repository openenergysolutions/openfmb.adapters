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

#ifndef OPENFMB_TYPEDMODELVISITORS_H
#define OPENFMB_TYPEDMODELVISITORS_H

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

#include "../ITypedModelVisitor.h"

namespace adapter {

namespace util {

void visit(ITypedModelVisitor<essmodule::ESSStatusProfile>& visitor);

void visit(ITypedModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit(ITypedModelVisitor<loadmodule::LoadReadingProfile>& visitor);

void visit(ITypedModelVisitor<metermodule::MeterReadingProfile>& visitor);

void visit(ITypedModelVisitor<essmodule::ESSControlProfile>& visitor);

void visit(ITypedModelVisitor<solarmodule::SolarStatusProfile>& visitor);

void visit(ITypedModelVisitor<switchmodule::SwitchDiscreteControlProfile>& visitor);

void visit(ITypedModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit(ITypedModelVisitor<breakermodule::BreakerStatusProfile>& visitor);

void visit(ITypedModelVisitor<generationmodule::GenerationReadingProfile>& visitor);

void visit(ITypedModelVisitor<breakermodule::BreakerEventProfile>& visitor);

void visit(ITypedModelVisitor<breakermodule::BreakerReadingProfile>& visitor);

void visit(ITypedModelVisitor<regulatormodule::RegulatorEventProfile>& visitor);

void visit(ITypedModelVisitor<solarmodule::SolarReadingProfile>& visitor);

void visit(ITypedModelVisitor<reclosermodule::RecloserControlProfile>& visitor);

void visit(ITypedModelVisitor<reclosermodule::RecloserStatusProfile>& visitor);

void visit(ITypedModelVisitor<reclosermodule::RecloserDiscreteControlProfile>& visitor);

void visit(ITypedModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit(ITypedModelVisitor<solarmodule::SolarControlProfile>& visitor);

void visit(ITypedModelVisitor<loadmodule::LoadStatusProfile>& visitor);

void visit(ITypedModelVisitor<switchmodule::SwitchEventProfile>& visitor);

void visit(ITypedModelVisitor<regulatormodule::RegulatorStatusProfile>& visitor);

void visit(ITypedModelVisitor<breakermodule::BreakerDiscreteControlProfile>& visitor);

void visit(ITypedModelVisitor<reclosermodule::RecloserEventProfile>& visitor);

void visit(ITypedModelVisitor<loadmodule::LoadControlProfile>& visitor);

void visit(ITypedModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit(ITypedModelVisitor<loadmodule::LoadEventProfile>& visitor);

void visit(ITypedModelVisitor<essmodule::ESSEventProfile>& visitor);

void visit(ITypedModelVisitor<generationmodule::GenerationEventProfile>& visitor);

void visit(ITypedModelVisitor<generationmodule::GenerationStatusProfile>& visitor);

void visit(ITypedModelVisitor<resourcemodule::ResourceReadingProfile>& visitor);

} // end namespace util

} // end namespace adapter

#endif

