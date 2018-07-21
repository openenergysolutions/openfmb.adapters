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

#ifndef OPENFMB_INT32FIELDTYPE_H
#define OPENFMB_INT32FIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

struct Int32FieldType
{
    enum class Value
    {
        // the value is always the same, set in configuration
        const_int32,
        // the value is mapped dynamically from the underlying protocol
        mapped_int32,
        // the value is ignored in the current configuration
        ignored_int32,
    };

    static const char const_int32[];
    static const char mapped_int32[];
    static const char ignored_int32[];

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace adapter

#endif

