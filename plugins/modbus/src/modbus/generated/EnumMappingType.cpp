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

#include "EnumMappingType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char EnumMappingType::none[] = "none";
const char EnumMappingType::single_bit[] = "single_bit";
const char EnumMappingType::single_register[] = "single_register";
const char EnumMappingType::multiple_register[] = "multiple_register";

const std::array<EnumMappingType::Value, 4> EnumMappingType::values =
{
    EnumMappingType::Value::none,
    EnumMappingType::Value::single_bit,
    EnumMappingType::Value::single_register,
    EnumMappingType::Value::multiple_register,
};

std::string EnumMappingType::to_string(EnumMappingType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::single_bit): return single_bit;
        case(Value::single_register): return single_register;
        default: return multiple_register;
    }
}

EnumMappingType::Value EnumMappingType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {single_bit, Value::single_bit},
        {single_register, Value::single_register},
        {multiple_register, Value::multiple_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum EnumMappingType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
