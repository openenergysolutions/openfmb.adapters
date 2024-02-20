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

#include "TagClass.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char TagClass::taggable[] = "taggable";
const char TagClass::non_taggable[] = "non_taggable";

const std::array<TagClass::Value, 2> TagClass::values =
{
    TagClass::Value::taggable,
    TagClass::Value::non_taggable,
};

std::string TagClass::to_string(TagClass::Value value)
{
    switch(value)
    {
        case(Value::taggable): return taggable;
        default: return non_taggable;
    }
}

TagClass::Value TagClass::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {taggable, Value::taggable},
        {non_taggable, Value::non_taggable},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum TagClass");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
