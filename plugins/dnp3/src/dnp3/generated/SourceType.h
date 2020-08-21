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

#ifndef OPENFMB_SOURCETYPE_H
#define OPENFMB_SOURCETYPE_H

#include <string>
#include <array>

namespace adapter {

namespace dnp3 {

struct SourceType
{
    enum class Value
    {
        // the field is disabled
        none,
        // the field value is mapped to a DNP3 binary input
        binary,
        // the field value is derived to a DNP3 analog input
        analog,
        // the field value is derived to a DNP3 counter
        counter,
    };

    static const char none[];
    static const char binary[];
    static const char analog[];
    static const char counter[];

    static constexpr const char* label = "source-type";

    static const std::array<Value, 4> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace dnp3

} // end namespace adapter

#endif

