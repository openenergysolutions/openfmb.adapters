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

#include "adapter-api/config/generated/BoolFieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char BoolFieldType::const_bool[] = "const_bool";
const char BoolFieldType::mapped_bool[] = "mapped_bool";
const char BoolFieldType::ignored_bool[] = "ignored_bool";

const std::array<BoolFieldType::Value, 3> BoolFieldType::values =
{
    BoolFieldType::Value::const_bool,
    BoolFieldType::Value::mapped_bool,
    BoolFieldType::Value::ignored_bool,
};

std::string BoolFieldType::to_string(BoolFieldType::Value value)
{
    switch(value)
    {
        case(Value::const_bool): return const_bool;
        case(Value::mapped_bool): return mapped_bool;
        default: return ignored_bool;
    }
}

BoolFieldType::Value BoolFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {const_bool, Value::const_bool},
        {mapped_bool, Value::mapped_bool},
        {ignored_bool, Value::ignored_bool},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum BoolFieldType");
    return elem->second;
}

} // end namespace adapter
