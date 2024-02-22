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

#ifndef OPENFMB_TAGCLASS_H
#define OPENFMB_TAGCLASS_H

#include <string>
#include <array>

namespace adapter {

namespace iccp {

struct TagClass
{
    enum class Value
    {
        // Taggable tag class
        taggable,
        // Non-Taggable tag class
        non_taggable,
    };

    static const char taggable[];
    static const char non_taggable[];

    static constexpr const char* label = "tag-class";

    static const std::array<Value, 2> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace iccp

} // end namespace adapter

#endif

