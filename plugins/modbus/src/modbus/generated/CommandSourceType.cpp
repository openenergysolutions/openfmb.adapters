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

#include "CommandSourceType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char CommandSourceType::none[] = "none";
const char CommandSourceType::coil[] = "coil";
const char CommandSourceType::holding_register[] = "holding_register";

const std::array<CommandSourceType::Value, 3> CommandSourceType::values =
{
    CommandSourceType::Value::none,
    CommandSourceType::Value::coil,
    CommandSourceType::Value::holding_register,
};

std::string CommandSourceType::to_string(CommandSourceType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::coil): return coil;
        default: return holding_register;
    }
}

CommandSourceType::Value CommandSourceType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {coil, Value::coil},
        {holding_register, Value::holding_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum CommandSourceType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
