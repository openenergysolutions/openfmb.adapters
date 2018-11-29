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

#include "EnumMappingType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char EnumMappingType::none[] = "none";
const char EnumMappingType::holding_register[] = "holding_register";
const char EnumMappingType::multiple_holding_register[] = "multiple_holding_register";

const std::array<EnumMappingType::Value, 3> EnumMappingType::values =
{
    EnumMappingType::Value::none,
    EnumMappingType::Value::holding_register,
    EnumMappingType::Value::multiple_holding_register,
};

std::string EnumMappingType::to_string(EnumMappingType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::holding_register): return holding_register;
        default: return multiple_holding_register;
    }
}

EnumMappingType::Value EnumMappingType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {holding_register, Value::holding_register},
        {multiple_holding_register, Value::multiple_holding_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum EnumMappingType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
