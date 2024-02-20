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

#include "SBOState.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char SBOState::selected[] = "selected";
const char SBOState::not_selected[] = "not_selected";

const std::array<SBOState::Value, 2> SBOState::values =
{
    SBOState::Value::selected,
    SBOState::Value::not_selected,
};

std::string SBOState::to_string(SBOState::Value value)
{
    switch(value)
    {
        case(Value::selected): return selected;
        default: return not_selected;
    }
}

SBOState::Value SBOState::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {selected, Value::selected},
        {not_selected, Value::not_selected},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum SBOState");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
