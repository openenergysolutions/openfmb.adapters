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

#include "ProfileAction.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char ProfileAction::update[] = "update";
const char ProfileAction::clear_and_update[] = "clear_and_update";
const char ProfileAction::update_and_publish[] = "update_and_publish";

const std::array<ProfileAction::Value, 3> ProfileAction::values =
{
    ProfileAction::Value::update,
    ProfileAction::Value::clear_and_update,
    ProfileAction::Value::update_and_publish,
};

std::string ProfileAction::to_string(ProfileAction::Value value)
{
    switch(value)
    {
        case(Value::update): return update;
        case(Value::clear_and_update): return clear_and_update;
        default: return update_and_publish;
    }
}

ProfileAction::Value ProfileAction::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {update, Value::update},
        {clear_and_update, Value::clear_and_update},
        {update_and_publish, Value::update_and_publish},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum ProfileAction");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
