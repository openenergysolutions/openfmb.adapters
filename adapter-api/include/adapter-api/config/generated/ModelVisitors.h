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

#include "resourcemodule/resourcemodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "../IModelVisitor.h"

namespace adapter {

void visit(IModelVisitor<resourcemodule::ResourceReadingProfile>& visitor);

void visit(IModelVisitor<switchmodule::SwitchReadingProfile>& visitor);

void visit(IModelVisitor<switchmodule::SwitchStatusProfile>& visitor);

void visit(IModelVisitor<switchmodule::SwitchControlProfile>& visitor);

void visit(IModelVisitor<essmodule::ESSReadingProfile>& visitor);

void visit(IModelVisitor<essmodule::ESSStatusProfile>& visitor);

} // end namespace adapter
