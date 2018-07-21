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

#ifndef OPENFMB_STRINGFIELDTYPE_H
#define OPENFMB_STRINGFIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

struct StringFieldType
{
    enum class Value
    {
        // the value is randomly generated UUID
        generated_uuid,
        // the value is an optional constant UUID
        optional_const_uuid,
        // the value is a required primary UUID (conducting equipment)
        primary_uuid,
        // the value is an optional constant string
        optional_string,
        // the field is ignored in this configuration
        ignored_string,
    };

    static const char generated_uuid[];
    static const char optional_const_uuid[];
    static const char primary_uuid[];
    static const char optional_string[];
    static const char ignored_string[];

    static const std::array<Value, 5> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace adapter

#endif

