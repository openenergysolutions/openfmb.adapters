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

#include "adapter-util/config/generated/QualityFieldType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char QualityFieldType::ignored[] = "ignored";
const char QualityFieldType::mapped[] = "mapped";

const std::array<QualityFieldType::Value, 2> QualityFieldType::values =
{
    QualityFieldType::Value::ignored,
    QualityFieldType::Value::mapped,
};

std::string QualityFieldType::to_string(QualityFieldType::Value value)
{
    switch(value)
    {
        case(Value::ignored): return ignored;
        default: return mapped;
    }
}

QualityFieldType::Value QualityFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {ignored, Value::ignored},
        {mapped, Value::mapped},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum QualityFieldType");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
