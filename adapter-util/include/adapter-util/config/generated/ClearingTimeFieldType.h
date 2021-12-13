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

#ifndef OPENFMB_CLEARINGTIMEFIELDTYPE_H
#define OPENFMB_CLEARINGTIMEFIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace util {

struct ClearingTimeFieldType
{
    enum class Value
    {
        // the clearing time for the point
        message,
        // the value is mapped dynamically from the underlying protocol
        mapped,
        // the time is ignored in this configuration
        ignored,
    };

    static const char message[];
    static const char mapped[];
    static const char ignored[];

    static constexpr const char* label = "clearingtime-field-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace util

} // end namespace adapter

#endif

