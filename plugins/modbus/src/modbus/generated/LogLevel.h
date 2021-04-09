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

#ifndef OPENFMB_LOGLEVEL_H
#define OPENFMB_LOGLEVEL_H

#include <string>
#include <array>

namespace adapter {

namespace modbus {

struct LogLevel
{
    enum class Value
    {
        // Trace
        Trace,
        // Debug
        Debug,
        // Info
        Info,
        // Warn
        Warn,
        // Error
        Error,
        // Critical
        Critical,
    };

    static const char Trace[];
    static const char Debug[];
    static const char Info[];
    static const char Warn[];
    static const char Error[];
    static const char Critical[];

    static constexpr const char* label = "log-level";

    static const std::array<Value, 6> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

