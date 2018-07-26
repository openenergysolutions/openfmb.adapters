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

#include "RegisterOpType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char RegisterOpType::none[] = "none";
const char RegisterOpType::read_clear_masked_bits[] = "read_clear_masked_bits";
const char RegisterOpType::read_set_masked_bits[] = "read_set_masked_bits";
const char RegisterOpType::write_value[] = "write_value";

const std::array<RegisterOpType::Value, 4> RegisterOpType::values =
{
    RegisterOpType::Value::none,
    RegisterOpType::Value::read_clear_masked_bits,
    RegisterOpType::Value::read_set_masked_bits,
    RegisterOpType::Value::write_value,
};

std::string RegisterOpType::to_string(RegisterOpType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::read_clear_masked_bits): return read_clear_masked_bits;
        case(Value::read_set_masked_bits): return read_set_masked_bits;
        default: return write_value;
    }
}

RegisterOpType::Value RegisterOpType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {read_clear_masked_bits, Value::read_clear_masked_bits},
        {read_set_masked_bits, Value::read_set_masked_bits},
        {write_value, Value::write_value},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum RegisterOpType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
