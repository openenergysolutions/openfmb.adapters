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

#include "SecurityType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace mqtt {

const char SecurityType::none[] = "none";
const char SecurityType::tls_server_auth[] = "tls_server_auth";
const char SecurityType::tls_mutual_auth[] = "tls_mutual_auth";

const std::array<SecurityType::Value, 3> SecurityType::values =
{
    SecurityType::Value::none,
    SecurityType::Value::tls_server_auth,
    SecurityType::Value::tls_mutual_auth,
};

std::string SecurityType::to_string(SecurityType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::tls_server_auth): return tls_server_auth;
        default: return tls_mutual_auth;
    }
}

SecurityType::Value SecurityType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {tls_server_auth, Value::tls_server_auth},
        {tls_mutual_auth, Value::tls_mutual_auth},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum SecurityType");
    return elem->second;
}

} // end namespace mqtt

} // end namespace adapter
