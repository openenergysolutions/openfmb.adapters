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

#ifndef OPENFMB_ENUMFIELDTYPE_H
#define OPENFMB_ENUMFIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

struct EnumFieldType
{
    enum class Value
    {
        // an optional enum that is the same value in every message
        optional_const_enum,
        // an enum that is mapped from values in the underlying protocol
        mapped_enum,
        // the enum is ignored in this configuration
        ignored_enum,
    };

    static const char optional_const_enum[];
    static const char mapped_enum[];
    static const char ignored_enum[];

    static constexpr const char* label = "enum-field-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace adapter

#endif

