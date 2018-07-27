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

#ifndef OPENFMB_BITWISEOPERATION_H
#define OPENFMB_BITWISEOPERATION_H

#include <string>
#include <array>

namespace adapter {

namespace modbus {

struct BitwiseOperation
{
    enum class Value
    {
        // clear the bits in the mask
        clear_masked_bits,
        // set the bits in the mask
        set_masked_bits,
    };

    static const char clear_masked_bits[];
    static const char set_masked_bits[];

    static constexpr const char* label = "bitwise-operation";

    static const std::array<Value, 2> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

