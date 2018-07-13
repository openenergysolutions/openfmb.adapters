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

namespace adapter {

namespace dnp3 {

struct SourceType
{
    enum class Value
    {
        none,
        binary,
        analog,
        counter,
    };

    static constexpr const char* const none = "none";
    static constexpr const char* const binary = "binary";
    static constexpr const char* const analog = "analog";
    static constexpr const char* const counter = "counter";

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace dnp3

} // end namespace adapter

#endif

