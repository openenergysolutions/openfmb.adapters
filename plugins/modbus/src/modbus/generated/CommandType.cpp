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

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char CommandType::write_single_register[] = "write_single_register";
const char CommandType::write_multiple_register[] = "write_multiple_register";

const std::array<CommandType::Value, 2> CommandType::values =
{
    CommandType::Value::write_single_register,
    CommandType::Value::write_multiple_register,
};

std::string CommandType::to_string(CommandType::Value value)
{
    switch(value)
    {
        case(Value::write_single_register): return write_single_register;
        default: return write_multiple_register;
    }
}

CommandType::Value CommandType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {write_single_register, Value::write_single_register},
        {write_multiple_register, Value::write_multiple_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum CommandType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
