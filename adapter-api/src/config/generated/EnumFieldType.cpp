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

#include "adapter-api/config/generated/EnumFieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char EnumFieldType::optional_constant[] = "optional_constant";
const char EnumFieldType::mapped[] = "mapped";

const std::array<EnumFieldType::Value, 2> EnumFieldType::values =
{
    EnumFieldType::Value::optional_constant,
    EnumFieldType::Value::mapped,
};

std::string EnumFieldType::to_string(EnumFieldType::Value value)
{
    switch(value)
    {
        case(Value::optional_constant): return optional_constant;
        default: return mapped;
    }
}

EnumFieldType::Value EnumFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {optional_constant, Value::optional_constant},
        {mapped, Value::mapped},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum EnumFieldType");
    return elem->second;
}

} // end namespace adapter
