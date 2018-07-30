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

#include "LogLevel.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

const char LogLevel::Trace[] = "Trace";
const char LogLevel::Debug[] = "Debug";
const char LogLevel::Info[] = "Info";
const char LogLevel::Warn[] = "Warn";
const char LogLevel::Error[] = "Error";
const char LogLevel::Critical[] = "Critical";

const std::array<LogLevel::Value, 6> LogLevel::values =
{
    LogLevel::Value::Trace,
    LogLevel::Value::Debug,
    LogLevel::Value::Info,
    LogLevel::Value::Warn,
    LogLevel::Value::Error,
    LogLevel::Value::Critical,
};

std::string LogLevel::to_string(LogLevel::Value value)
{
    switch(value)
    {
        case(Value::Trace): return Trace;
        case(Value::Debug): return Debug;
        case(Value::Info): return Info;
        case(Value::Warn): return Warn;
        case(Value::Error): return Error;
        default: return Critical;
    }
}

LogLevel::Value LogLevel::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {Trace, Value::Trace},
        {Debug, Value::Debug},
        {Info, Value::Info},
        {Warn, Value::Warn},
        {Error, Value::Error},
        {Critical, Value::Critical},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw Exception("Unknown value name '", name, "' for enum LogLevel");
    return elem->second;
}

} // end namespace modbus

} // end namespace adapter
