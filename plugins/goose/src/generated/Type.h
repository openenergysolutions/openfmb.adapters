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

#ifndef OPENFMB_TYPE_H
#define OPENFMB_TYPE_H

#include <string>
#include <array>

namespace adapter {

namespace goose {

struct Type
{
    enum class Value
    {
        // ignored
        ignored,
        // structure
        structure,
        // array
        array,
        // boolean
        boolean,
        // integer
        integer,
        // floating
        floating,
        // visible_string
        visible_string,
        // mms_string
        mms_string,
        // bitstring
        bitstring,
        // generalized_time
        generalized_time,
        // binary_time
        binary_time,
        // utc_time
        utc_time,
    };

    static const char ignored[];
    static const char structure[];
    static const char array[];
    static const char boolean[];
    static const char integer[];
    static const char floating[];
    static const char visible_string[];
    static const char mms_string[];
    static const char bitstring[];
    static const char generalized_time[];
    static const char binary_time[];
    static const char utc_time[];

    static constexpr const char* label = "type";

    static const std::array<Value, 12> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace goose

} // end namespace adapter

#endif

