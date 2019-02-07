#ifndef OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H

namespace adapter {
namespace dnp3 {
    namespace keys {

        // top level
        constexpr const char* const masters = "masters";
        constexpr const char* const outstations = "outstations";
        constexpr const char* const thread_pool_size = "thread-pool-size";

        // channel
        constexpr const char* const adapter = "adapter";
        constexpr const char* const channel = "channel";
        constexpr const char* const outstation_ip = "outstation-ip";
        constexpr const char* const port = "port";
        constexpr const char* const protocol = "protocol";
        constexpr const char* const listen_adapter = "listen-adapter";

        // link layer
        constexpr const char* const master_address = "master-address";
        constexpr const char* const outstation_address = "outstation-address";

        // master application layer
        constexpr const char* const integrity_poll_ms = "integrity-poll-ms";

        // outstation application layer
        constexpr const char* const enable_unsolicited = "enable-unsolicited";
        constexpr const char* const confirm_timeout_ms = "confirm-timeout-ms";
        constexpr const char* const default_static_variations = "default-static-variations";
        constexpr const char* const default_event_variations = "default-event-variations";
        constexpr const char* const binary_input = "binary-input";
        constexpr const char* const analog_input = "analog-input";
        constexpr const char* const counter = "counter";
    }
}
}

#endif
