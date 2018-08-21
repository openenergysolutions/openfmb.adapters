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

#ifndef OPENFMB_TYPE_H
#define OPENFMB_TYPE_H

#include <string>
#include <array>

namespace adapter {

namespace goose {

struct Type
{
    enum class Value
    {
        // structure
        structure,
        // array
        array,
        // boolean
        boolean,
        // integer
        integer,
        // floating
        floating,
    };

    static const char structure[];
    static const char array[];
    static const char boolean[];
    static const char integer[];
    static const char floating[];

    static constexpr const char* label = "type";

    static const std::array<Value, 5> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace goose

} // end namespace adapter

#endif

