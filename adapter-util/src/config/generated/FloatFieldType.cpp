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

#include "adapter-util/config/generated/FloatFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char FloatFieldType::constant[] = "constant";
const char FloatFieldType::mapped[] = "mapped";
const char FloatFieldType::ignored[] = "ignored";

const std::array<FloatFieldType::Value, 3> FloatFieldType::values =
{
    FloatFieldType::Value::constant,
    FloatFieldType::Value::mapped,
    FloatFieldType::Value::ignored,
};

std::string FloatFieldType::to_string(FloatFieldType::Value value)
{
    switch(value)
    {
        case(Value::constant): return constant;
        case(Value::mapped): return mapped;
        default: return ignored;
    }
}

FloatFieldType::Value FloatFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {constant, Value::constant},
        {mapped, Value::mapped},
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum FloatFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
