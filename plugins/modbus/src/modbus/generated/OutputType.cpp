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

#include "OutputType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char OutputType::none[] = "none";
const char OutputType::write_holding_register[] = "write_holding_register";

const std::array<OutputType::Value, 2> OutputType::values =
{
    OutputType::Value::none,
    OutputType::Value::write_holding_register,
};

std::string OutputType::to_string(OutputType::Value value)
{
    switch(value)
    {
        case(Value::none): return none;
        default: return write_holding_register;
    }
}

OutputType::Value OutputType::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {none, Value::none},
        {write_holding_register, Value::write_holding_register},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum OutputType");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
