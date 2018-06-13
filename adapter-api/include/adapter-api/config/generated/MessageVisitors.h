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
#include "solarmodule/solarmodule.pb.h"
#include "../IMessageVisitor.h"

namespace adapter {

void visit(const resourcemodule::ResourceReadingProfile& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchReadingProfile& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchStatusProfile& message, IMessageVisitor& visitor);

void visit(const switchmodule::SwitchControlProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSReadingProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSStatusProfile& message, IMessageVisitor& visitor);

void visit(const essmodule::ESSControlProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarReadingProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarStatusProfile& message, IMessageVisitor& visitor);

void visit(const solarmodule::SolarControlProfile& message, IMessageVisitor& visitor);

} // end namespace adapter
