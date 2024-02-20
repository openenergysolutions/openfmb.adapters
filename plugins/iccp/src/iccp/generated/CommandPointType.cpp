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

#include "CommandPointType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char CommandPointType::none[] = "none";
const char CommandPointType::command[] = "command";
const char CommandPointType::command_sbo[] = "command_sbo";
const char CommandPointType::set_point_real[] = "set_point_real";
const char CommandPointType::set_point_real_sbo[] = "set_point_real_sbo";
const char CommandPointType::set_point_discrete[] = "set_point_discrete";
const char CommandPointType::set_point_discrete_sbo[] = "set_point_discrete_sbo";

const std::array<CommandPointType::Value, 7> CommandPointType::values =
{
    CommandPointType::Value::none,
    CommandPointType::Value::command,
    CommandPointType::Value::command_sbo,
    CommandPointType::Value::set_point_real,
    CommandPointType::Value::set_point_real_sbo,
    CommandPointType::Value::set_point_discrete,
    CommandPointType::Value::set_point_discrete_sbo,
};

std::string CommandPointType::to_string(CommandPointType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::command): return command;
        case(Value::command_sbo): return command_sbo;
        case(Value::set_point_real): return set_point_real;
        case(Value::set_point_real_sbo): return set_point_real_sbo;
        case(Value::set_point_discrete): return set_point_discrete;
        default: return set_point_discrete_sbo;
    }
}

CommandPointType::Value CommandPointType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {command, Value::command},
        {command_sbo, Value::command_sbo},
        {set_point_real, Value::set_point_real},
        {set_point_real_sbo, Value::set_point_real_sbo},
        {set_point_discrete, Value::set_point_discrete},
        {set_point_discrete_sbo, Value::set_point_discrete_sbo},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum CommandPointType");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
