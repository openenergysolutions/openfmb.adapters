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

#ifndef OPENFMB_COMMANDTYPE_H
#define OPENFMB_COMMANDTYPE_H

#include <string>
#include <array>

namespace adapter {

namespace dnp3 {

struct CommandType
{
    enum class Value
    {
        // the command is a ControlRelayOutputBlock
        crob,
        // the command is an AnalogOutout
        analog_output,
    };

    static const char crob[];
    static const char analog_output[];

    static constexpr const char* label = "command-type";

    static const std::array<Value, 2> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace dnp3

} // end namespace adapter

#endif

