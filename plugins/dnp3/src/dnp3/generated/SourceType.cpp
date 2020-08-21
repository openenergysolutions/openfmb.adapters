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

#include "SourceType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace dnp3 {

const char SourceType::none[] = "none";
const char SourceType::binary[] = "binary";
const char SourceType::analog[] = "analog";
const char SourceType::counter[] = "counter";

const std::array<SourceType::Value, 4> SourceType::values =
{
    SourceType::Value::none,
    SourceType::Value::binary,
    SourceType::Value::analog,
    SourceType::Value::counter,
};

std::string SourceType::to_string(SourceType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::binary): return binary;
        case(Value::analog): return analog;
        default: return counter;
    }
}

SourceType::Value SourceType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {binary, Value::binary},
        {analog, Value::analog},
        {counter, Value::counter},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum SourceType");
    return elem->second;
}

} // end namespace dnp3

} // end namespace adapter
