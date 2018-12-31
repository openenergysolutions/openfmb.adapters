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

#ifndef OPENFMB_SECURITYTYPE_H
#define OPENFMB_SECURITYTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace mqtt {

struct SecurityType
{
    enum class Value
    {
        // no security - bare TCP
        none,
        // tls - only authenticate the server
        tls_server_auth,
        // tls - authenticate the server and provide client cert
        tls_mutual_auth,
    };

    static const char none[];
    static const char tls_server_auth[];
    static const char tls_mutual_auth[];

    static constexpr const char* label = "security-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace mqtt

} // end namespace adapter

#endif

