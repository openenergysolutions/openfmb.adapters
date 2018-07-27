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

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char OutputType::none[] = "none";
const char OutputType::write_register[] = "write_register";
const char OutputType::read_and_modify_register[] = "read_and_modify_register";
const char OutputType::write_multiple_registers[] = "write_multiple_registers";

const std::array<OutputType::Value, 4> OutputType::values =
{
    OutputType::Value::none,
    OutputType::Value::write_register,
    OutputType::Value::read_and_modify_register,
    OutputType::Value::write_multiple_registers,
};

std::string OutputType::to_string(OutputType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::write_register): return write_register;
        case(Value::read_and_modify_register): return read_and_modify_register;
        default: return write_multiple_registers;
    }
}

OutputType::Value OutputType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {write_register, Value::write_register},
        {read_and_modify_register, Value::read_and_modify_register},
        {write_multiple_registers, Value::write_multiple_registers},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum OutputType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
