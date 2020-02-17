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

#ifndef OPENFMB_CONTROLTIMESTAMPFIELDTYPE_H
#define OPENFMB_CONTROLTIMESTAMPFIELDTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace util {

struct ControlTimestampFieldType
{
    enum class Value
    {
        // the timestamp field is ignored in this configuration
        ignored,
        // the main timestamp of the message is used
        message,
    };

    static const char ignored[];
    static const char message[];

    static constexpr const char* label = "control-timestamp-field-type";

    static const std::array<Value, 2> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace util

} // end namespace adapter

#endif

