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

#include "adapter-api/config/generated/Int64FieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char Int64FieldType::const_int64[] = "const_int64";
const char Int64FieldType::mapped_int64[] = "mapped_int64";
const char Int64FieldType::ignored_int64[] = "ignored_int64";

const std::array<Int64FieldType::Value, 3> Int64FieldType::values =
{
    Int64FieldType::Value::const_int64,
    Int64FieldType::Value::mapped_int64,
    Int64FieldType::Value::ignored_int64,
};

std::string Int64FieldType::to_string(Int64FieldType::Value value)
{
    switch(value)
    {
        case(Value::const_int64): return const_int64;
        case(Value::mapped_int64): return mapped_int64;
        default: return ignored_int64;
    }
}

Int64FieldType::Value Int64FieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {const_int64, Value::const_int64},
        {mapped_int64, Value::mapped_int64},
        {ignored_int64, Value::ignored_int64},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum Int64FieldType");
    return elem->second;
}

} // end namespace adapter
