#ifndef OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H

namespace adapter
{
    namespace dnp3
    {
        namespace keys
        {
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
            constexpr const char* const master_address = "master_address";
            constexpr const char* const outstation_address = "outstation_address";

            // mapping
            constexpr const char* const profile = "profile";
            constexpr const char* const index = "index";
            constexpr const char* const mag = "mag";
            constexpr const char* const ang = "ang";
            constexpr const char* const scale = "scale";
            constexpr const char* const mapped_from = "mapped_from";
            constexpr const char* const default_uuid = "00000000-0000-0000-0000-000000000000";

            // enum values for "mapped_from"
            constexpr const char* const analog = "analog";
            constexpr const char* const counter = "counter";
        }
    }
}

#endif //OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H
