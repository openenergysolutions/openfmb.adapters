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

#include "adapter-api/config/generated/StringFieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char StringFieldType::generated_uuid[] = "generated_uuid";
const char StringFieldType::optional_const_uuid[] = "optional_const_uuid";
const char StringFieldType::primary_uuid[] = "primary_uuid";
const char StringFieldType::optional_string[] = "optional_string";
const char StringFieldType::ignored_string[] = "ignored_string";

const std::array<StringFieldType::Value, 5> StringFieldType::values =
{
    StringFieldType::Value::generated_uuid,
    StringFieldType::Value::optional_const_uuid,
    StringFieldType::Value::primary_uuid,
    StringFieldType::Value::optional_string,
    StringFieldType::Value::ignored_string,
};

std::string StringFieldType::to_string(StringFieldType::Value value)
{
    switch(value)
    {
        case(Value::generated_uuid): return generated_uuid;
        case(Value::optional_const_uuid): return optional_const_uuid;
        case(Value::primary_uuid): return primary_uuid;
        case(Value::optional_string): return optional_string;
        default: return ignored_string;
    }
}

StringFieldType::Value StringFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {generated_uuid, Value::generated_uuid},
        {optional_const_uuid, Value::optional_const_uuid},
        {primary_uuid, Value::primary_uuid},
        {optional_string, Value::optional_string},
        {ignored_string, Value::ignored_string},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum StringFieldType");
    return elem->second;
}

} // end namespace adapter
