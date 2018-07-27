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

namespace modbus {

struct CommandType
{
    enum class Value
    {
        // write a single holding register value
        write_single_register,
        // write multiple holding register values starting a particular index
        write_multiple_register,
    };

    static const char write_single_register[];
    static const char write_multiple_register[];

    static constexpr const char* label = "command-type";

    static const std::array<Value, 2> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace modbus

} // end namespace adapter

#endif

