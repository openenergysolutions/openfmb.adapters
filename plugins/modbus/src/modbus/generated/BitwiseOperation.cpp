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

#include "BitwiseOperation.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char BitwiseOperation::clear_masked_bits[] = "clear_masked_bits";
const char BitwiseOperation::set_masked_bits[] = "set_masked_bits";

const std::array<BitwiseOperation::Value, 2> BitwiseOperation::values =
{
    BitwiseOperation::Value::clear_masked_bits,
    BitwiseOperation::Value::set_masked_bits,
};

std::string BitwiseOperation::to_string(BitwiseOperation::Value value)
{
    switch(value)
    {
        case(Value::clear_masked_bits): return clear_masked_bits;
        default: return set_masked_bits;
    }
}

BitwiseOperation::Value BitwiseOperation::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {clear_masked_bits, Value::clear_masked_bits},
        {set_masked_bits, Value::set_masked_bits},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum BitwiseOperation");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
