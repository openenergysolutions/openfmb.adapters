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

#include "adapter-api/config/generated/QualityFieldType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

const char QualityFieldType::ignored[] = "ignored";

const std::array<QualityFieldType::Value, 1> QualityFieldType::values =
{
    QualityFieldType::Value::ignored,
};

std::string QualityFieldType::to_string(QualityFieldType::Value value)
{
    switch(value)
    {
        default: return ignored;
    }
}

QualityFieldType::Value QualityFieldType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {ignored, Value::ignored},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum QualityFieldType");
    return elem->second;
}

} // end namespace adapter
