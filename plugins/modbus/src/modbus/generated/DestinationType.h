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

#ifndef OPENFMB_DESTINATIONTYPE_H
#define OPENFMB_DESTINATIONTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace modbus {

struct DestinationType
{
    enum class Value
    {
        // field is not mapped
        none,
        // field is mapped out to a coil
        coil,
        // field is mapped out to a discrete input
        discrete_input,
        // field is mapped out to a holding register
        holding_register,
        // field is mapped out to an input register
        input_register,
    };

    static const char none[];
    static const char coil[];
    static const char discrete_input[];
    static const char holding_register[];
    static const char input_register[];

    static constexpr const char* label = "destination-type";

    static const std::array<Value, 5> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

