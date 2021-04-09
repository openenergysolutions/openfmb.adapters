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

#ifndef OPENFMB_QUALITYMAPPINGTYPE_H
#define OPENFMB_QUALITYMAPPINGTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace goose {

struct QualityMappingType
{
    enum class Value
    {
        // copy the value of the OpenFMB proto
        copy,
        // use a constant quality
        constant,
        // use a constant quality if the OpenFMB proto doesn't have a quality
        constant_if_absent,
    };

    static const char copy[];
    static const char constant[];
    static const char constant_if_absent[];

    static constexpr const char* label = "quality-mapping-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace goose

} // end namespace adapter

#endif

