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

#include <array>
#include <string>

namespace adapter {

namespace modbus {

    struct SourceType {
        enum class Value {
            // field is not mapped
            none,
            // field is mapped out of a holding register
            holding_register,
        };

        static const char none[];
        static const char holding_register[];

        static constexpr const char* label = "source-type";

        static const std::array<Value, 2> values;

        static std::string to_string(Value value);
        static Value from_string(const std::string& name);
    };

} // end namespace modbus

} // end namespace adapter

#endif
