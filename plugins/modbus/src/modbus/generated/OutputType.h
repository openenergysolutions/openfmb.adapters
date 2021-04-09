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

#ifndef OPENFMB_OUTPUTTYPE_H
#define OPENFMB_OUTPUTTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace modbus {

struct OutputType
{
    enum class Value
    {
        // output is not mapped
        none,
        // write a single coil
        write_single_coil,
        // flip a single coil
        flip_single_coil,
        // write a value to a single holding register, casted as an unsigned integer
        write_single_register_uint16,
        // write a value to a single holding register, casted as a signed integer
        write_single_register_int16,
        // write the low and high words to two (possibly disjoint) registers, casted as an unsigned integer
        write_multiple_registers_uint32,
        // write the low and high words to two (possibly disjoint) registers, casted as a signed integer
        write_multiple_registers_int32,
        // write the IEEE 754 in two (possibly disjoint) registers
        write_multiple_registers_float32,
        // read a holding register and write a modified value
        read_and_modify_register,
    };

    static const char none[];
    static const char write_single_coil[];
    static const char flip_single_coil[];
    static const char write_single_register_uint16[];
    static const char write_single_register_int16[];
    static const char write_multiple_registers_uint32[];
    static const char write_multiple_registers_int32[];
    static const char write_multiple_registers_float32[];
    static const char read_and_modify_register[];

    static constexpr const char* label = "output-type";

    static const std::array<Value, 9> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

