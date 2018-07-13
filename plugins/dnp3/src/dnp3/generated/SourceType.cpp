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

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace dnp3 {

std::string SourceType::to_string(SourceType::Value value)
{
    static const std::map<Value, std::string> map = 
    {
        {Value::none, none},
        {Value::binary, binary},
        {Value::analog, analog},
        {Value::counter, counter},
    };
    return map.find(value)->second;
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
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum SourceType");
    return elem->second;
}

} // end namespace dnp3

} // end namespace adapter
