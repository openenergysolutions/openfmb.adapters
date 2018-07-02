
#ifndef OPENFMB_ADAPTER_MODBUS_SOURCE_H
#define OPENFMB_ADAPTER_MODBUS_SOURCE_H

#include <string>

namespace adapter {
namespace modbus {

    enum class Source {
        /// element is not mapped
        none,
        /// modbus holding register
        holding_register
    };

    struct SourceMeta {
        SourceMeta() = delete;

        constexpr static const char* const none = "none";
        constexpr static const char* const holding_register = "holding_register";

        static Source from_string(const std::string& value);
        static std::string to_string(Source value);
    };
}
}

#endif
