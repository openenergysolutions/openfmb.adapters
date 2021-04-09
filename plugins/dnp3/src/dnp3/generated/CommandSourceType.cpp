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

#include "CommandSourceType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace dnp3 {

const char CommandSourceType::none[] = "none";
const char CommandSourceType::crob[] = "crob";
const char CommandSourceType::analog_output[] = "analog_output";

const std::array<CommandSourceType::Value, 3> CommandSourceType::values =
{
    CommandSourceType::Value::none,
    CommandSourceType::Value::crob,
    CommandSourceType::Value::analog_output,
};

std::string CommandSourceType::to_string(CommandSourceType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::crob): return crob;
        default: return analog_output;
    }
}

CommandSourceType::Value CommandSourceType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {crob, Value::crob},
        {analog_output, Value::analog_output},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum CommandSourceType");
    return elem->second;
}

} // end namespace dnp3

} // end namespace adapter
