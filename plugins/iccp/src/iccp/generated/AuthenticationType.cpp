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

#include "AuthenticationType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char AuthenticationType::none[] = "none";
const char AuthenticationType::password[] = "password";
const char AuthenticationType::certificate[] = "certificate";

const std::array<AuthenticationType::Value, 3> AuthenticationType::values =
{
    AuthenticationType::Value::none,
    AuthenticationType::Value::password,
    AuthenticationType::Value::certificate,
};

std::string AuthenticationType::to_string(AuthenticationType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::password): return password;
        default: return certificate;
    }
}

AuthenticationType::Value AuthenticationType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {password, Value::password},
        {certificate, Value::certificate},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum AuthenticationType");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
