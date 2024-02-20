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

#ifndef OPENFMB_AUTHENTICATIONTYPE_H
#define OPENFMB_AUTHENTICATIONTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace iccp {

struct AuthenticationType
{
    enum class Value
    {
        // no authenticate mechanism
        none,
        // basic password authentication
        password,
        // tls certificate authentication
        certificate,
    };

    static const char none[];
    static const char password[];
    static const char certificate[];

    static constexpr const char* label = "authentication-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace iccp

} // end namespace adapter

#endif

