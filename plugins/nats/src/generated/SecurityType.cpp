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

namespace nats {

const char SecurityType::none[] = "none";
const char SecurityType::tls_server_auth[] = "tls_server_auth";
const char SecurityType::tls_mutual_auth[] = "tls_mutual_auth";
const char SecurityType::jwt[] = "jwt";

const std::array<SecurityType::Value, 4> SecurityType::values =
{
    SecurityType::Value::none,
    SecurityType::Value::tls_server_auth,
    SecurityType::Value::tls_mutual_auth,
    SecurityType::Value::jwt,
};

std::string SecurityType::to_string(SecurityType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::tls_server_auth): return tls_server_auth;
        case(Value::tls_mutual_auth): return tls_mutual_auth;
        default: return jwt;
    }
}

SecurityType::Value SecurityType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {tls_server_auth, Value::tls_server_auth},
        {tls_mutual_auth, Value::tls_mutual_auth},
        {jwt, Value::jwt},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum SecurityType");
    return elem->second;
}

} // end namespace nats

} // end namespace adapter
