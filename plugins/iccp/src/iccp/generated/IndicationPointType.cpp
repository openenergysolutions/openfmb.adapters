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

#include "IndicationPointType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char IndicationPointType::none[] = "none";
const char IndicationPointType::discrete[] = "discrete";
const char IndicationPointType::discrete_q[] = "discrete_q";
const char IndicationPointType::discrete_q_t[] = "discrete_q_t";
const char IndicationPointType::discrete_q_t_ext[] = "discrete_q_t_ext";
const char IndicationPointType::discrete_ext[] = "discrete_ext";
const char IndicationPointType::real[] = "real";
const char IndicationPointType::real_q[] = "real_q";
const char IndicationPointType::real_q_t[] = "real_q_t";
const char IndicationPointType::real_q_t_ext[] = "real_q_t_ext";
const char IndicationPointType::real_ext[] = "real_ext";
const char IndicationPointType::state[] = "state";
const char IndicationPointType::state_q[] = "state_q";
const char IndicationPointType::state_q_t[] = "state_q_t";
const char IndicationPointType::state_q_t_ext[] = "state_q_t_ext";
const char IndicationPointType::state_ext[] = "state_ext";

const std::array<IndicationPointType::Value, 16> IndicationPointType::values =
{
    IndicationPointType::Value::none,
    IndicationPointType::Value::discrete,
    IndicationPointType::Value::discrete_q,
    IndicationPointType::Value::discrete_q_t,
    IndicationPointType::Value::discrete_q_t_ext,
    IndicationPointType::Value::discrete_ext,
    IndicationPointType::Value::real,
    IndicationPointType::Value::real_q,
    IndicationPointType::Value::real_q_t,
    IndicationPointType::Value::real_q_t_ext,
    IndicationPointType::Value::real_ext,
    IndicationPointType::Value::state,
    IndicationPointType::Value::state_q,
    IndicationPointType::Value::state_q_t,
    IndicationPointType::Value::state_q_t_ext,
    IndicationPointType::Value::state_ext,
};

std::string IndicationPointType::to_string(IndicationPointType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::discrete): return discrete;
        case(Value::discrete_q): return discrete_q;
        case(Value::discrete_q_t): return discrete_q_t;
        case(Value::discrete_q_t_ext): return discrete_q_t_ext;
        case(Value::discrete_ext): return discrete_ext;
        case(Value::real): return real;
        case(Value::real_q): return real_q;
        case(Value::real_q_t): return real_q_t;
        case(Value::real_q_t_ext): return real_q_t_ext;
        case(Value::real_ext): return real_ext;
        case(Value::state): return state;
        case(Value::state_q): return state_q;
        case(Value::state_q_t): return state_q_t;
        case(Value::state_q_t_ext): return state_q_t_ext;
        default: return state_ext;
    }
}

IndicationPointType::Value IndicationPointType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {discrete, Value::discrete},
        {discrete_q, Value::discrete_q},
        {discrete_q_t, Value::discrete_q_t},
        {discrete_q_t_ext, Value::discrete_q_t_ext},
        {discrete_ext, Value::discrete_ext},
        {real, Value::real},
        {real_q, Value::real_q},
        {real_q_t, Value::real_q_t},
        {real_q_t_ext, Value::real_q_t_ext},
        {real_ext, Value::real_ext},
        {state, Value::state},
        {state_q, Value::state_q},
        {state_q_t, Value::state_q_t},
        {state_q_t_ext, Value::state_q_t_ext},
        {state_ext, Value::state_ext},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum IndicationPointType");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
