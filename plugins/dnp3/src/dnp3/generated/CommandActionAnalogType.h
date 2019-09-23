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

#ifndef OPENFMB_COMMANDACTIONANALOGTYPE_H
#define OPENFMB_COMMANDACTIONANALOGTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace dnp3 {

struct CommandActionAnalogType
{
    enum class Value
    {
        // Analog output Variation 1 (Int32)
        g41v1,
        // Analog output Variation 2 (Int16)
        g41v2,
        // Analog output Variation 3 (float)
        g41v3,
        // Analog output Variation 4 (double)
        g41v4,
    };

    static const char g41v1[];
    static const char g41v2[];
    static const char g41v3[];
    static const char g41v4[];

    static constexpr const char* label = "command-action-analog-type";

    static const std::array<Value, 4> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace dnp3

} // end namespace adapter

#endif

