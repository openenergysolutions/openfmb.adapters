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

#include "SourceType.h"

#include "adapter-api/util/Exception.h"

#include <map>

namespace adapter {

namespace modbus {

    const char SourceType::none[] = "none";
    const char SourceType::holding_register[] = "holding_register";

    const std::array<SourceType::Value, 2> SourceType::values = {
        SourceType::Value::none,
        SourceType::Value::holding_register,
    };

    std::string SourceType::to_string(SourceType::Value value)
    {
        switch (value) {
        case (Value::none):
            return none;
        default:
            return holding_register;
        }
    }

    SourceType::Value SourceType::from_string(const std::string& name)
    {
        static const std::map<std::string, Value> map = {
            { none, Value::none },
            { holding_register, Value::holding_register },
        };
        const auto elem = map.find(name);
        if (elem == map.end())
            throw Exception("Unknown value name '", name, "' for enum SourceType");
        return elem->second;
    }

} // end namespace modbus

} // end namespace adapter
