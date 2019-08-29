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

#include "OutputType.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char OutputType::none[] = "none";
const char OutputType::write_register[] = "write_register";
const char OutputType::write_two_registers[] = "write_two_registers";
const char OutputType::write_multiple_registers_float32[] = "write_multiple_registers_float32";
const char OutputType::read_and_modify_register[] = "read_and_modify_register";

const std::array<OutputType::Value, 5> OutputType::values =
{
    OutputType::Value::none,
    OutputType::Value::write_register,
    OutputType::Value::write_two_registers,
    OutputType::Value::write_multiple_registers_float32,
    OutputType::Value::read_and_modify_register,
};

std::string OutputType::to_string(OutputType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::write_register): return write_register;
        case(Value::write_two_registers): return write_two_registers;
        case(Value::write_multiple_registers_float32): return write_multiple_registers_float32;
        default: return read_and_modify_register;
    }
}

OutputType::Value OutputType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {write_register, Value::write_register},
        {write_two_registers, Value::write_two_registers},
        {write_multiple_registers_float32, Value::write_multiple_registers_float32},
        {read_and_modify_register, Value::read_and_modify_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum OutputType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
