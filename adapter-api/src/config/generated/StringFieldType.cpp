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
const char StringFieldType::constant_uuid[] = "constant_uuid";
const char StringFieldType::primary_uuid[] = "primary_uuid";
const char StringFieldType::constant[] = "constant";
const char StringFieldType::mapped[] = "mapped";
const char StringFieldType::ignored[] = "ignored";

const std::array<StringFieldType::Value, 6> StringFieldType::values =
{
    StringFieldType::Value::generated_uuid,
    StringFieldType::Value::constant_uuid,
    StringFieldType::Value::primary_uuid,
    StringFieldType::Value::constant,
    StringFieldType::Value::mapped,
    StringFieldType::Value::ignored,
};

std::string StringFieldType::to_string(StringFieldType::Value value)
{
    switch(value)
    {
        case(Value::generated_uuid): return generated_uuid;
        case(Value::constant_uuid): return constant_uuid;
        case(Value::primary_uuid): return primary_uuid;
        case(Value::constant): return constant;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

StringFieldType::Value StringFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {generated_uuid, Value::generated_uuid},
        {constant_uuid, Value::constant_uuid},
        {primary_uuid, Value::primary_uuid},
        {constant, Value::constant},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum StringFieldType");
    return elem->second;
}

} // end namespace adapter
