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

#include "adapter-api/config/generated/FieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace dnp3 {

const char FieldType::constant[] = "constant";
const char FieldType::mapped[] = "mapped";

const std::array<FieldType::Value, 2> FieldType::values =
{
    FieldType::Value::constant,
    FieldType::Value::mapped,
};

std::string FieldType::to_string(FieldType::Value value)
{
    switch(value)
    {
        case(Value::constant): return constant;
        default: return mapped;
    }
}

FieldType::Value FieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {constant, Value::constant},
        {mapped, Value::mapped},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum FieldType");
    return elem->second;
}

} // end namespace dnp3

} // end namespace adapter
