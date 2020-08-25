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

#include "adapter-util/config/generated/Int32FieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char Int32FieldType::constant[] = "constant";
const char Int32FieldType::mapped[] = "mapped";
const char Int32FieldType::ignored[] = "ignored";

const std::array<Int32FieldType::Value, 3> Int32FieldType::values =
{
    Int32FieldType::Value::constant,
    Int32FieldType::Value::mapped,
    Int32FieldType::Value::ignored,
};

std::string Int32FieldType::to_string(Int32FieldType::Value value)
{
    switch(value)
    {
        case(Value::constant): return constant;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

Int32FieldType::Value Int32FieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {constant, Value::constant},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum Int32FieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
