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

#include "adapter-util/config/generated/ControlTimestampFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char ControlTimestampFieldType::ignored[] = "ignored";
const char ControlTimestampFieldType::message[] = "message";

const std::array<ControlTimestampFieldType::Value, 2> ControlTimestampFieldType::values =
{
    ControlTimestampFieldType::Value::ignored,
    ControlTimestampFieldType::Value::message,
};

std::string ControlTimestampFieldType::to_string(ControlTimestampFieldType::Value value)
{
    switch(value)
    {
        case(Value::ignored): return ignored;
        default: return message;
    }
}

ControlTimestampFieldType::Value ControlTimestampFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {ignored, Value::ignored},
        {message, Value::message},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum ControlTimestampFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
