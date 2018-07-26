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

#ifndef OPENFMB_REGISTEROPERATION_H
#define OPENFMB_REGISTEROPERATION_H

#include <string>
#include <array>

namespace adapter {

namespace modbus {

struct RegisterOperation
{
    enum class Value
    {
        // read the register, clear masked bits, and write it back
        read_clear_masked_bits,
        // read the register, set masked bits, and write it back
        read_set_masked_bits,
        // write the register with the specified value
        write_value,
    };

    static const char read_clear_masked_bits[];
    static const char read_set_masked_bits[];
    static const char write_value[];

    static constexpr const char* label = "register-operation";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

