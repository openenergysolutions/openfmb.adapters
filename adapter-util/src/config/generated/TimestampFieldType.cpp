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

#include "adapter-util/config/generated/TimestampFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char TimestampFieldType::message[] = "message";
const char TimestampFieldType::mapped[] = "mapped";
const char TimestampFieldType::ignored[] = "ignored";

const std::array<TimestampFieldType::Value, 3> TimestampFieldType::values =
{
    TimestampFieldType::Value::message,
    TimestampFieldType::Value::mapped,
    TimestampFieldType::Value::ignored,
};

std::string TimestampFieldType::to_string(TimestampFieldType::Value value)
{
    switch(value)
    {
        case(Value::message): return message;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

TimestampFieldType::Value TimestampFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {message, Value::message},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum TimestampFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
