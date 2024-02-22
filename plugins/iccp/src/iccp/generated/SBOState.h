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

#ifndef OPENFMB_SBOSTATE_H
#define OPENFMB_SBOSTATE_H

#include <string>
#include <array>

namespace adapter {

namespace iccp {

struct SBOState
{
    enum class Value
    {
        // Selected state
        selected,
        // Not selected state
        not_selected,
    };

    static const char selected[];
    static const char not_selected[];

    static constexpr const char* label = "sbo-state";

    static const std::array<Value, 2> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace iccp

} // end namespace adapter

#endif

