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

#include "QualityMappingType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace goose {

const char QualityMappingType::copy[] = "copy";
const char QualityMappingType::constant[] = "constant";
const char QualityMappingType::constant_if_absent[] = "constant_if_absent";

const std::array<QualityMappingType::Value, 3> QualityMappingType::values =
{
    QualityMappingType::Value::copy,
    QualityMappingType::Value::constant,
    QualityMappingType::Value::constant_if_absent,
};

std::string QualityMappingType::to_string(QualityMappingType::Value value)
{
    switch(value)
    {
        case(Value::copy): return copy;
        case(Value::constant): return constant;
        default: return constant_if_absent;
    }
}

QualityMappingType::Value QualityMappingType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {copy, Value::copy},
        {constant, Value::constant},
        {constant_if_absent, Value::constant_if_absent},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum QualityMappingType");
    return elem->second;
}

} // end namespace goose

} // end namespace adapter
