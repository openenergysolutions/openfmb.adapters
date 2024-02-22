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

#include "DeviceClass.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char DeviceClass::sbo[] = "sbo";
const char DeviceClass::non_sbo[] = "non_sbo";

const std::array<DeviceClass::Value, 2> DeviceClass::values =
{
    DeviceClass::Value::sbo,
    DeviceClass::Value::non_sbo,
};

std::string DeviceClass::to_string(DeviceClass::Value value)
{
    switch(value)
    {
        case(Value::sbo): return sbo;
        default: return non_sbo;
    }
}

DeviceClass::Value DeviceClass::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {sbo, Value::sbo},
        {non_sbo, Value::non_sbo},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum DeviceClass");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
