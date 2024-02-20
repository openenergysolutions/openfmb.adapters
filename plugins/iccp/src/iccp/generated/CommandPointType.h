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

#ifndef OPENFMB_COMMANDPOINTTYPE_H
#define OPENFMB_COMMANDPOINTTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace iccp {

struct CommandPointType
{
    enum class Value
    {
        // field is not mapped
        none,
        // Command type
        command,
        // Command type (SBO)
        command_sbo,
        // Real SetPoint type
        set_point_real,
        // Real SetPoint type (SBO)
        set_point_real_sbo,
        // Discrete SetPoint type
        set_point_discrete,
        // Discrete SetPoint type (SBO)
        set_point_discrete_sbo,
    };

    static const char none[];
    static const char command[];
    static const char command_sbo[];
    static const char set_point_real[];
    static const char set_point_real_sbo[];
    static const char set_point_discrete[];
    static const char set_point_discrete_sbo[];

    static constexpr const char* label = "command-point-type";

    static const std::array<Value, 7> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace iccp

} // end namespace adapter

#endif

