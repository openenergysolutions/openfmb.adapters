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

#include "adapter-api/config/generated/Int32FieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char Int32FieldType::const_int32[] = "const_int32";
const char Int32FieldType::mapped_int32[] = "mapped_int32";
const char Int32FieldType::ignored_int32[] = "ignored_int32";

const std::array<Int32FieldType::Value, 3> Int32FieldType::values =
{
    Int32FieldType::Value::const_int32,
    Int32FieldType::Value::mapped_int32,
    Int32FieldType::Value::ignored_int32,
};

std::string Int32FieldType::to_string(Int32FieldType::Value value)
{
    switch(value)
    {
        case(Value::const_int32): return const_int32;
        case(Value::mapped_int32): return mapped_int32;
        default: return ignored_int32;
    }
}

Int32FieldType::Value Int32FieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {const_int32, Value::const_int32},
        {mapped_int32, Value::mapped_int32},
        {ignored_int32, Value::ignored_int32},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum Int32FieldType");
    return elem->second;
}

} // end namespace adapter
