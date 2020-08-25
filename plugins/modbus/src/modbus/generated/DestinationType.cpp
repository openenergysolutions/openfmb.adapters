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

#include "DestinationType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char DestinationType::none[] = "none";
const char DestinationType::coil[] = "coil";
const char DestinationType::discrete_input[] = "discrete_input";
const char DestinationType::holding_register[] = "holding_register";
const char DestinationType::input_register[] = "input_register";

const std::array<DestinationType::Value, 5> DestinationType::values =
{
    DestinationType::Value::none,
    DestinationType::Value::coil,
    DestinationType::Value::discrete_input,
    DestinationType::Value::holding_register,
    DestinationType::Value::input_register,
};

std::string DestinationType::to_string(DestinationType::Value value)
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

DestinationType::Value DestinationType::from_string(const std::string& name)
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
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum DestinationType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
