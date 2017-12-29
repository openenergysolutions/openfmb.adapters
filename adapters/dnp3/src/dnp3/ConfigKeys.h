#ifndef OPENFMB_ADAPTER_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_CONFIGSTRINGS_H

namespace openfmb
{
    namespace keys
    {
        static const char* const masters = "masters";

        // top level
        static const char* const name = "name";
        static const char* const thread_pool_size = "thread-pool-size";

        // channel
        static const char* const adapter = "adapter";
        static const char* const channel = "channel";
        static const char* const outstation_ip = "outstation-ip";
        static const char* const port = "port";

        static const char* const protocol = "protocol";
        static const char* const integrity_poll_ms = "integrity-poll-ms";

        // link layer
        static const char* const master_address = "master_address";
        static const char* const outstation_address = "outstation_address";

        // mapping
        static const char* const index = "index";
        static const char* const scale = "scale";
    }
}

#endif //OPENFMB_ADAPTER_CONFIGSTRINGS_H
