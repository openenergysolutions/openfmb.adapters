#ifndef OPENFMB_ADAPTER_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_CONFIGSTRINGS_H

namespace adapter
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
        static const char* const profile = "profile";
        static const char* const index = "index";
        static const char* const mag = "mag";
        static const char* const ang = "ang";
        static const char* const scale = "scale";
        static const char* const mapped_from = "mapped_from";
        static const char* const application_name = "applicationName";
        static const char* const identified_object = "identifiedObject";
        static const char* const description = "description";
        static const char* const mRID = "mRID";
        static const char* const default_uuid = "00000000-0000-0000-0000-000000000000";
        static const char* const set_val = "setVal";

        static const char* const unit_symbol_kind = "unit_symbol_kind";

        // enum values for "mapped_from"
        static const char* const analog = "analog";
        static const char* const counter = "counter";
    }
}

#endif //OPENFMB_ADAPTER_CONFIGSTRINGS_H
