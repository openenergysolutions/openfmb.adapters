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

#include "adapter-util/config/generated/BoolFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char BoolFieldType::constant[] = "constant";
const char BoolFieldType::mapped[] = "mapped";
const char BoolFieldType::ignored[] = "ignored";

const std::array<BoolFieldType::Value, 3> BoolFieldType::values =
{
    BoolFieldType::Value::constant,
    BoolFieldType::Value::mapped,
    BoolFieldType::Value::ignored,
};

std::string BoolFieldType::to_string(BoolFieldType::Value value)
{
    switch(value)
    {
        case(Value::constant): return constant;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

BoolFieldType::Value BoolFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {constant, Value::constant},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum BoolFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
