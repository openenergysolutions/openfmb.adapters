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

#include "adapter-util/config/generated/EnumFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char EnumFieldType::constant[] = "constant";
const char EnumFieldType::mapped[] = "mapped";
const char EnumFieldType::ignored[] = "ignored";

const std::array<EnumFieldType::Value, 3> EnumFieldType::values =
{
    EnumFieldType::Value::constant,
    EnumFieldType::Value::mapped,
    EnumFieldType::Value::ignored,
};

std::string EnumFieldType::to_string(EnumFieldType::Value value)
{
    switch(value)
    {
        case(Value::constant): return constant;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

EnumFieldType::Value EnumFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {constant, Value::constant},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum EnumFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
