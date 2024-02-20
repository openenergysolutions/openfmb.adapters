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

#include "Tag.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace iccp {

const char Tag::no_tag[] = "no_tag";
const char Tag::open_and_close_inhibit[] = "open_and_close_inhibit";
const char Tag::close_only_inhibit[] = "close_only_inhibit";

const std::array<Tag::Value, 3> Tag::values =
{
    Tag::Value::no_tag,
    Tag::Value::open_and_close_inhibit,
    Tag::Value::close_only_inhibit,
};

std::string Tag::to_string(Tag::Value value)
{
    switch(value)
    {
        case(Value::no_tag): return no_tag;
        case(Value::open_and_close_inhibit): return open_and_close_inhibit;
        default: return close_only_inhibit;
    }
}

Tag::Value Tag::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {no_tag, Value::no_tag},
        {open_and_close_inhibit, Value::open_and_close_inhibit},
        {close_only_inhibit, Value::close_only_inhibit},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum Tag");
    return elem->second;
}

} // end namespace iccp

} // end namespace adapter
