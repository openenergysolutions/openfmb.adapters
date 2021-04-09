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

#ifndef OPENFMB_COMMANDSOURCETYPE_H
#define OPENFMB_COMMANDSOURCETYPE_H

#include <string>
#include <array>

namespace adapter {

namespace dnp3 {

struct CommandSourceType
{
    enum class Value
    {
        // not mapped
        none,
        // the value is mapped from a Control Relay Output Block (CROB)
        crob,
        // the value is mapped from an Analog Output (AO)
        analog_output,
    };

    static const char none[];
    static const char crob[];
    static const char analog_output[];

    static constexpr const char* label = "command-source-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace dnp3

} // end namespace adapter

#endif

