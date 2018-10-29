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
        // write a value to a single holding register
        write_register,
        // write the low and high words to two (possibly disjoint) registers
        write_two_registers,
        // read a holding register and write a modified value
        read_and_modify_register,
    };

    static const char none[];
    static const char write_register[];
    static const char write_two_registers[];
    static const char read_and_modify_register[];

    static constexpr const char* label = "output-type";

    static const std::array<Value, 4> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

