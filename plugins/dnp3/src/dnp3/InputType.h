
#ifndef OPENFMB_ADAPTER_DNP3_INPUTTYPE_H
#define OPENFMB_ADAPTER_DNP3_INPUTTYPE_H

#include <string>

namespace adapter {

namespace dnp3 {

    enum class InputType {
        binary,
        analog,
        counter,
        disabled
    };

    struct InputTypeMeta {
        static constexpr const char* const binary = "binary";
        static constexpr const char* const analog = "analog";
        static constexpr const char* const counter = "counter";
        static constexpr const char* const disabled = "disabled";

        InputTypeMeta() = delete;

        static std::string to_string(InputType profile);

        static InputType from_string(const std::string& name);
    };
}
}

#endif
