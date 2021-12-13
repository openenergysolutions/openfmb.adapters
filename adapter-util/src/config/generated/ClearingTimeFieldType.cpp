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

#include "adapter-util/config/generated/ClearingTimeFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char ClearingTimeFieldType::message[] = "message";
const char ClearingTimeFieldType::mapped[] = "mapped";
const char ClearingTimeFieldType::ignored[] = "ignored";

const std::array<ClearingTimeFieldType::Value, 3> ClearingTimeFieldType::values =
{
    ClearingTimeFieldType::Value::message,
    ClearingTimeFieldType::Value::mapped,
    ClearingTimeFieldType::Value::ignored,
};

std::string ClearingTimeFieldType::to_string(ClearingTimeFieldType::Value value)
{
    switch(value)
    {
        case(Value::message): return message;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

ClearingTimeFieldType::Value ClearingTimeFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {message, Value::message},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum ClearingTimeFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
