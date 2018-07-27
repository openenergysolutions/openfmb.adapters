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

#include "CommandType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace dnp3 {

const char CommandType::crob[] = "crob";
const char CommandType::analog_output[] = "analog_output";

const std::array<CommandType::Value, 2> CommandType::values =
{
    CommandType::Value::crob,
    CommandType::Value::analog_output,
};

std::string CommandType::to_string(CommandType::Value value)
{
    switch(value)
    {
        case(Value::crob): return crob;
        default: return analog_output;
    }
}

CommandType::Value CommandType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {crob, Value::crob},
        {analog_output, Value::analog_output},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum CommandType");
    return elem->second;
}

} // end namespace dnp3

} // end namespace adapter
