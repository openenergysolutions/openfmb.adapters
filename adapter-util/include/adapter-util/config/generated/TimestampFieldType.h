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

#ifndef OPENFMB_TIMESTAMPFIELDTYPE_H
#define OPENFMB_TIMESTAMPFIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace util {

struct TimestampFieldType
{
    enum class Value
    {
        // the main timestamp for the message
        message,
        // the value is mapped dynamically from the underlying protocol
        mapped,
        // the timestamp is ignored in this configuration
        ignored,
    };

    static const char message[];
    static const char mapped[];
    static const char ignored[];

    static constexpr const char* label = "timestamp-field-type";

    static const std::array<Value, 3> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace util

} // end namespace adapter

#endif

