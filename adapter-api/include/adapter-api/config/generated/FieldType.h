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

#ifndef OPENFMB_FIELDTYPE_H
#define OPENFMB_FIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace dnp3 {

struct FieldType
{
    enum class Value
    {
        // the field value is always the same, fixed in configuration
        constant,
        // the field value is mapped dynamically from the downstream protocol
        mapped,
    };

    static const char constant[];
    static const char mapped[];

    static const std::array<Value, 2> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace dnp3

} // end namespace adapter

#endif

