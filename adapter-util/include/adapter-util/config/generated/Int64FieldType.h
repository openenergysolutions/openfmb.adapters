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

#ifndef OPENFMB_INT64FIELDTYPE_H
#define OPENFMB_INT64FIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace util {

struct Int64FieldType
{
    enum class Value
    {
        // the value is always the same, set in configuration
        constant,
        // the value is mapped dynamically from the underlying protocol
        mapped,
        // the value is ignored in the current configuration
        ignored,
    };

    static const char constant[];
    static const char mapped[];
    static const char ignored[];

    static constexpr const char* label = "int64-field-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace util

} // end namespace adapter

#endif

