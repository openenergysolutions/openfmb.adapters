#ifndef OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H

namespace adapter
{
    namespace dnp3
    {
        namespace keys
        {
            const char* const masters = "masters";

            // top level
            const char* const name = "name";
            const char* const thread_pool_size = "thread-pool-size";

            // channel
            const char* const adapter = "adapter";
            const char* const channel = "channel";
            const char* const outstation_ip = "outstation-ip";
            const char* const port = "port";

            const char* const protocol = "protocol";
            const char* const integrity_poll_ms = "integrity-poll-ms";

            // link layer
            const char* const master_address = "master_address";
            const char* const outstation_address = "outstation_address";

            // mapping
            const char* const profile = "profile";
            const char* const index = "index";
            const char* const mag = "mag";
            const char* const ang = "ang";
            const char* const scale = "scale";
            const char* const mapped_from = "mapped_from";
            const char* const application_name = "applicationName";
            const char* const identified_object = "identifiedObject";
            const char* const description = "description";
            const char* const mRID = "mRID";
            const char* const default_uuid = "00000000-0000-0000-0000-000000000000";
            const char* const set_val = "setVal";

            const char* const unit_symbol_kind = "unit_symbol_kind";

            // enum values for "mapped_from"
            const char* const analog = "analog";
            const char* const counter = "counter";
        }
    }
}

#endif //OPENFMB_ADAPTER_DNP3_CONFIGSTRINGS_H
