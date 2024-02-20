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

#ifndef OPENFMB_INDICATIONPOINTTYPE_H
#define OPENFMB_INDICATIONPOINTTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace iccp {

struct IndicationPointType
{
    enum class Value
    {
        // field is not mapped
        none,
        // Discrete indication point type
        discrete,
        // DiscreteQ indication point type
        discrete_q,
        // DiscreteQTimeTag indication point type
        discrete_q_t,
        // DiscreteQTimeTagExtended indication point type
        discrete_q_t_ext,
        // DiscreteExtended indication point type
        discrete_ext,
        // Real indication point type
        real,
        // RealQ indication point type
        real_q,
        // RealQTimeTag indication point type
        real_q_t,
        // RealQTimeTagExtended indication point type
        real_q_t_ext,
        // RealExtended indication point type
        real_ext,
        // State indication point type
        state,
        // StateQ indication point type
        state_q,
        // StateQTimeTag indication point type
        state_q_t,
        // StateQTimeTagExtended indication point type
        state_q_t_ext,
        // StateExtended indication point type
        state_ext,
    };

    static const char none[];
    static const char discrete[];
    static const char discrete_q[];
    static const char discrete_q_t[];
    static const char discrete_q_t_ext[];
    static const char discrete_ext[];
    static const char real[];
    static const char real_q[];
    static const char real_q_t[];
    static const char real_q_t_ext[];
    static const char real_ext[];
    static const char state[];
    static const char state_q[];
    static const char state_q_t[];
    static const char state_q_t_ext[];
    static const char state_ext[];

    static constexpr const char* label = "indication-point-type";

    static const std::array<Value, 16> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace iccp

} // end namespace adapter

#endif

