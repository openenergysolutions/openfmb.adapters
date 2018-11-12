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

#ifndef OPENFMB_ENUMMAPPINGTYPE_H
#define OPENFMB_ENUMMAPPINGTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace modbus {

struct EnumMappingType
{
    enum class Value
    {
        // field is not mapped
        none,
        // enum is mapped from a single holding register
        holding_register,
        // enum is mapped from bits in multiple holding registers
        multiple_holding_register,
    };

    static const char none[];
    static const char holding_register[];
    static const char multiple_holding_register[];

    static constexpr const char* label = "enum-mapping-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

