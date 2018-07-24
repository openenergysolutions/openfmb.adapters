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

#include "adapter-api/config/generated/TimestampFieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char TimestampFieldType::message[] = "message";
const char TimestampFieldType::ignored[] = "ignored";

const std::array<TimestampFieldType::Value, 2> TimestampFieldType::values =
{
    TimestampFieldType::Value::message,
    TimestampFieldType::Value::ignored,
};

std::string TimestampFieldType::to_string(TimestampFieldType::Value value)
{
    switch(value)
    {
        case(Value::message): return message;
        default: return ignored;
    }
}

TimestampFieldType::Value TimestampFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {message, Value::message},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum TimestampFieldType");
    return elem->second;
}

} // end namespace adapter
