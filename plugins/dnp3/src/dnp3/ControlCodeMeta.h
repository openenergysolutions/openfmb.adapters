#ifndef OPENFMB_ADAPTER_CONTROLCODEMETA_H
#define OPENFMB_ADAPTER_CONTROLCODEMETA_H

#include <opendnp3/gen/ControlCode.h>

#include <string>

namespace adapter {
namespace dnp3 {

    /**
     * provides to/from string functions for 
     */
    struct ControlCodeMeta {
        constexpr static const char* const latch_on = "LATCH_ON";
        constexpr static const char* const latch_off = "LATCH_OFF";
        constexpr static const char* const trip_pulse_on = "TRIP_PULSE_ON";
        constexpr static const char* const close_pulse_on = "CLOSE_PULSE_ON";

        constexpr static const char* const label = "control_code";

        static std::string to_string(opendnp3::ControlCode code);
        static opendnp3::ControlCode from_string(const std::string& value);
    };
}
}

#endif
