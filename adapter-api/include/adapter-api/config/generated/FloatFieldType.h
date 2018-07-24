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

#ifndef OPENFMB_FLOATFIELDTYPE_H
#define OPENFMB_FLOATFIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

struct FloatFieldType
{
    enum class Value
    {
        // the value is always the same, set in configuration
        const_float,
        // the value is mapped dynamically from the underlying protocol
        mapped_float,
        // the value is ignored in the current configuration
        ignored_float,
    };

    static const char const_float[];
    static const char mapped_float[];
    static const char ignored_float[];

    static constexpr const char* label = "float-field-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace adapter

#endif

