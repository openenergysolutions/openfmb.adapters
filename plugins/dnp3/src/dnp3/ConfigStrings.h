#ifndef OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H

namespace adapter {
namespace dnp3 {
    namespace keys {
        constexpr const char* const masters = "masters";

        // top level
        constexpr const char* const thread_pool_size = "thread-pool-size";

        // channel
        constexpr const char* const adapter = "adapter";
        constexpr const char* const channel = "channel";
        constexpr const char* const outstation_ip = "outstation-ip";
        constexpr const char* const port = "port";

        constexpr const char* const protocol = "protocol";
        constexpr const char* const integrity_poll_ms = "integrity-poll-ms";

        // link layer
        constexpr const char* const master_address = "master-address";
        constexpr const char* const outstation_address = "outstation-address";

        // mapping
        constexpr const char* const when_true = "when-true";
        constexpr const char* const when_false = "when-false";
        constexpr const char* const command_order = "command-order";
    }
}
}

#endif
