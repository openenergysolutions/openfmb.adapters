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

#ifndef OPENFMB_REGISTERMAPPING_H
#define OPENFMB_REGISTERMAPPING_H

#include <string>
#include <array>

namespace adapter {

namespace modbus {

struct RegisterMapping
{
    enum class Value
    {
        // field is not mapped
        none,
        // single signed register
        sint16,
        // single unsigned register
        uint16,
        // 32-bit signed register, formed from two modbus 16-bit registers
        sint32,
        // 32-bit unsigned register, formed from two modbus 16-bit registers
        uint32,
        // 32-bit signed register, formed from two modbus 16-bit registers, custom modulus
        sint32_with_modulus,
        // 32-bit unsigned register, formed from two modbus 16-bit registers, custom modulus
        uint32_with_modulus,
    };

    static const char none[];
    static const char sint16[];
    static const char uint16[];
    static const char sint32[];
    static const char uint32[];
    static const char sint32_with_modulus[];
    static const char uint32_with_modulus[];

    static constexpr const char* label = "register-mapping";

    static const std::array<Value, 7> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

