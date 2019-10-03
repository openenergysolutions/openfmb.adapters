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

#include "CommandActionAnalogType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace dnp3 {

const char CommandActionAnalogType::g41v1[] = "g41v1";
const char CommandActionAnalogType::g41v2[] = "g41v2";
const char CommandActionAnalogType::g41v3[] = "g41v3";
const char CommandActionAnalogType::g41v4[] = "g41v4";

const std::array<CommandActionAnalogType::Value, 4> CommandActionAnalogType::values =
{
    CommandActionAnalogType::Value::g41v1,
    CommandActionAnalogType::Value::g41v2,
    CommandActionAnalogType::Value::g41v3,
    CommandActionAnalogType::Value::g41v4,
};

std::string CommandActionAnalogType::to_string(CommandActionAnalogType::Value value)
{
    switch(value)
    {
        case(Value::g41v1): return g41v1;
        case(Value::g41v2): return g41v2;
        case(Value::g41v3): return g41v3;
        default: return g41v4;
    }
}

CommandActionAnalogType::Value CommandActionAnalogType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {g41v1, Value::g41v1},
        {g41v2, Value::g41v2},
        {g41v3, Value::g41v3},
        {g41v4, Value::g41v4},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum CommandActionAnalogType");
    return elem->second;
}

} // end namespace dnp3

} // end namespace adapter
