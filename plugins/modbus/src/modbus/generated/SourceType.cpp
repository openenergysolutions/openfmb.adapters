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

namespace modbus {

const char SourceType::none[] = "none";
const char SourceType::coil[] = "coil";
const char SourceType::discrete_input[] = "discrete_input";
const char SourceType::holding_register[] = "holding_register";
const char SourceType::input_register[] = "input_register";

const std::array<SourceType::Value, 5> SourceType::values =
{
    SourceType::Value::none,
    SourceType::Value::coil,
    SourceType::Value::discrete_input,
    SourceType::Value::holding_register,
    SourceType::Value::input_register,
};

std::string SourceType::to_string(SourceType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::coil): return coil;
        case(Value::discrete_input): return discrete_input;
        case(Value::holding_register): return holding_register;
        default: return input_register;
    }
}

SourceType::Value SourceType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {coil, Value::coil},
        {discrete_input, Value::discrete_input},
        {holding_register, Value::holding_register},
        {input_register, Value::input_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum SourceType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
