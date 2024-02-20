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

#include "SetPointType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char SetPointType::real[] = "real";
const char SetPointType::discrete[] = "discrete";

const std::array<SetPointType::Value, 2> SetPointType::values =
{
    SetPointType::Value::real,
    SetPointType::Value::discrete,
};

std::string SetPointType::to_string(SetPointType::Value value)
{
    switch(value)
    {
        case(Value::real): return real;
        default: return discrete;
    }
}

SetPointType::Value SetPointType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {real, Value::real},
        {discrete, Value::discrete},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum SetPointType");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
