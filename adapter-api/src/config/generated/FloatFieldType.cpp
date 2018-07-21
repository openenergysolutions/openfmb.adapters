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

#include "adapter-api/config/generated/FloatFieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char FloatFieldType::const_float[] = "const_float";
const char FloatFieldType::mapped_float[] = "mapped_float";
const char FloatFieldType::ignored_float[] = "ignored_float";

const std::array<FloatFieldType::Value, 3> FloatFieldType::values =
{
    FloatFieldType::Value::const_float,
    FloatFieldType::Value::mapped_float,
    FloatFieldType::Value::ignored_float,
};

std::string FloatFieldType::to_string(FloatFieldType::Value value)
{
    switch(value)
    {
        case(Value::const_float): return const_float;
        case(Value::mapped_float): return mapped_float;
        default: return ignored_float;
    }
}

FloatFieldType::Value FloatFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {const_float, Value::const_float},
        {mapped_float, Value::mapped_float},
        {ignored_float, Value::ignored_float},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum FloatFieldType");
    return elem->second;
}

} // end namespace adapter
