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

#include "adapter-util/config/generated/DoubleFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char DoubleFieldType::constant[] = "constant";
const char DoubleFieldType::mapped[] = "mapped";
const char DoubleFieldType::ignored[] = "ignored";

const std::array<DoubleFieldType::Value, 3> DoubleFieldType::values =
{
    DoubleFieldType::Value::constant,
    DoubleFieldType::Value::mapped,
    DoubleFieldType::Value::ignored,
};

std::string DoubleFieldType::to_string(DoubleFieldType::Value value)
{
    switch(value)
    {
        case(Value::constant): return constant;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

DoubleFieldType::Value DoubleFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {constant, Value::constant},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum DoubleFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
