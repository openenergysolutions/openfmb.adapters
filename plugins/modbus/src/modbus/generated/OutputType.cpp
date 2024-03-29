// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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
const char OutputType::write_single_coil[] = "write_single_coil";
const char OutputType::flip_single_coil[] = "flip_single_coil";
const char OutputType::write_single_register_uint16[] = "write_single_register_uint16";
const char OutputType::write_single_register_int16[] = "write_single_register_int16";
const char OutputType::write_multiple_registers_uint32[] = "write_multiple_registers_uint32";
const char OutputType::write_multiple_registers_int32[] = "write_multiple_registers_int32";
const char OutputType::write_multiple_registers_float32[] = "write_multiple_registers_float32";
const char OutputType::read_and_modify_register[] = "read_and_modify_register";

const std::array<OutputType::Value, 9> OutputType::values =
{
    OutputType::Value::none,
    OutputType::Value::write_single_coil,
    OutputType::Value::flip_single_coil,
    OutputType::Value::write_single_register_uint16,
    OutputType::Value::write_single_register_int16,
    OutputType::Value::write_multiple_registers_uint32,
    OutputType::Value::write_multiple_registers_int32,
    OutputType::Value::write_multiple_registers_float32,
    OutputType::Value::read_and_modify_register,
};

std::string OutputType::to_string(OutputType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        case(Value::write_single_coil): return write_single_coil;
        case(Value::flip_single_coil): return flip_single_coil;
        case(Value::write_single_register_uint16): return write_single_register_uint16;
        case(Value::write_single_register_int16): return write_single_register_int16;
        case(Value::write_multiple_registers_uint32): return write_multiple_registers_uint32;
        case(Value::write_multiple_registers_int32): return write_multiple_registers_int32;
        case(Value::write_multiple_registers_float32): return write_multiple_registers_float32;
        default: return read_and_modify_register;
    }
}

OutputType::Value OutputType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {write_single_coil, Value::write_single_coil},
        {flip_single_coil, Value::flip_single_coil},
        {write_single_register_uint16, Value::write_single_register_uint16},
        {write_single_register_int16, Value::write_single_register_int16},
        {write_multiple_registers_uint32, Value::write_multiple_registers_uint32},
        {write_multiple_registers_int32, Value::write_multiple_registers_int32},
        {write_multiple_registers_float32, Value::write_multiple_registers_float32},
        {read_and_modify_register, Value::read_and_modify_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum OutputType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
