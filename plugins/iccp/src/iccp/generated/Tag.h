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

#ifndef OPENFMB_TAG_H
#define OPENFMB_TAG_H

#include <string>
#include <array>

namespace adapter {

namespace iccp {

struct Tag
{
    enum class Value
    {
        // No tag
        no_tag,
        // Open-And-Close-Inhibit
        open_and_close_inhibit,
        // Close-Only-Inhibit
        close_only_inhibit,
    };

    static const char no_tag[];
    static const char open_and_close_inhibit[];
    static const char close_only_inhibit[];

    static constexpr const char* label = "tag";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace iccp

} // end namespace adapter

#endif

