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

#include "adapter-util/config/generated/Int64FieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char Int64FieldType::constant[] = "constant";
const char Int64FieldType::mapped[] = "mapped";
const char Int64FieldType::ignored[] = "ignored";

const std::array<Int64FieldType::Value, 3> Int64FieldType::values =
{
    Int64FieldType::Value::constant,
    Int64FieldType::Value::mapped,
    Int64FieldType::Value::ignored,
};

std::string Int64FieldType::to_string(Int64FieldType::Value value)
{
    switch(value)
    {
        case(Value::constant): return constant;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

Int64FieldType::Value Int64FieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {constant, Value::constant},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum Int64FieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
