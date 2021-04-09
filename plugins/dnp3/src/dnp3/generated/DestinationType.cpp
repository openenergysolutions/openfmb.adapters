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

#include "DestinationType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace dnp3 {

const char DestinationType::none[] = "none";
const char DestinationType::binary[] = "binary";
const char DestinationType::analog[] = "analog";
const char DestinationType::counter[] = "counter";

const std::array<DestinationType::Value, 4> DestinationType::values =
{
    DestinationType::Value::none,
    DestinationType::Value::binary,
    DestinationType::Value::analog,
    DestinationType::Value::counter,
};

std::string DestinationType::to_string(DestinationType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::binary): return binary;
        case(Value::analog): return analog;
        default: return counter;
    }
}

DestinationType::Value DestinationType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {binary, Value::binary},
        {analog, Value::analog},
        {counter, Value::counter},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum DestinationType");
    return elem->second;
}

} // end namespace dnp3

} // end namespace adapter
