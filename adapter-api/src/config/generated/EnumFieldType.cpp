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

const char EnumFieldType::optional_const_enum[] = "optional_const_enum";
const char EnumFieldType::mapped_enum[] = "mapped_enum";
const char EnumFieldType::ignored_enum[] = "ignored_enum";

const std::array<EnumFieldType::Value, 3> EnumFieldType::values =
{
    EnumFieldType::Value::optional_const_enum,
    EnumFieldType::Value::mapped_enum,
    EnumFieldType::Value::ignored_enum,
};

std::string EnumFieldType::to_string(EnumFieldType::Value value)
{
    switch(value)
    {
        case(Value::optional_const_enum): return optional_const_enum;
        case(Value::mapped_enum): return mapped_enum;
        default: return ignored_enum;
    }
}

EnumFieldType::Value EnumFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {optional_const_enum, Value::optional_const_enum},
        {mapped_enum, Value::mapped_enum},
        {ignored_enum, Value::ignored_enum},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum EnumFieldType");
    return elem->second;
}

} // end namespace adapter
