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

#include "RegisterOperation.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char RegisterOperation::read_clear_masked_bits[] = "read_clear_masked_bits";
const char RegisterOperation::read_set_masked_bits[] = "read_set_masked_bits";
const char RegisterOperation::write_value[] = "write_value";

const std::array<RegisterOperation::Value, 3> RegisterOperation::values =
{
    RegisterOperation::Value::read_clear_masked_bits,
    RegisterOperation::Value::read_set_masked_bits,
    RegisterOperation::Value::write_value,
};

std::string RegisterOperation::to_string(RegisterOperation::Value value)
{
    switch(value)
    {
        case(Value::read_clear_masked_bits): return read_clear_masked_bits;
        case(Value::read_set_masked_bits): return read_set_masked_bits;
        default: return write_value;
    }
}

RegisterOperation::Value RegisterOperation::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {read_clear_masked_bits, Value::read_clear_masked_bits},
        {read_set_masked_bits, Value::read_set_masked_bits},
        {write_value, Value::write_value},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum RegisterOperation");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
