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

#include "RegisterMapping.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char RegisterMapping::sint16[] = "sint16";
const char RegisterMapping::uint16[] = "uint16";
const char RegisterMapping::sint32[] = "sint32";
const char RegisterMapping::uint32[] = "uint32";
const char RegisterMapping::sint32_with_modulus[] = "sint32_with_modulus";
const char RegisterMapping::uint32_with_modulus[] = "uint32_with_modulus";
const char RegisterMapping::float32[] = "float32";
const char RegisterMapping::float64[] = "float64";

const std::array<RegisterMapping::Value, 8> RegisterMapping::values =
{
    RegisterMapping::Value::sint16,
    RegisterMapping::Value::uint16,
    RegisterMapping::Value::sint32,
    RegisterMapping::Value::uint32,
    RegisterMapping::Value::sint32_with_modulus,
    RegisterMapping::Value::uint32_with_modulus,
    RegisterMapping::Value::float32,
    RegisterMapping::Value::float64,
};

std::string RegisterMapping::to_string(RegisterMapping::Value value)
{
    switch(value)
    {
        case(Value::sint16): return sint16;
        case(Value::uint16): return uint16;
        case(Value::sint32): return sint32;
        case(Value::uint32): return uint32;
        case(Value::sint32_with_modulus): return sint32_with_modulus;
        case(Value::uint32_with_modulus): return uint32_with_modulus;
        case(Value::float32): return float32;
        default: return float64;
    }
}

RegisterMapping::Value RegisterMapping::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {sint16, Value::sint16},
        {uint16, Value::uint16},
        {sint32, Value::sint32},
        {uint32, Value::uint32},
        {sint32_with_modulus, Value::sint32_with_modulus},
        {uint32_with_modulus, Value::uint32_with_modulus},
        {float32, Value::float32},
        {float64, Value::float64},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum RegisterMapping");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
