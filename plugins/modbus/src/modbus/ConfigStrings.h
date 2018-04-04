#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGSTRINGS_H

namespace adapter
{
    namespace modbus
    {

        namespace keys
        {
            // top level
            const char* const name = "name";
            const char* const thread_pool_size = "thread-pool-size";

            // channel & session
            const char* const sessions = "sessions";
            const char* const remote_ip = "remote-ip";
            const char* const port = "port";
            const char* const unit_identifier = "unit-identifier";

            // poll level
            const char* const profile = "profile";
            const char* const polls = "polls";
            const char* const poll_period_ms = "poll_period_ms";
            const char* const response_timeout_ms = "response_timeout_ms";
            const char* const type = "type";
            const char* const start = "start";
            const char* const count = "count";

            // mapping level
            const char* const index = "index";
            const char* const upper_index = "upper_index";
            const char* const lower_index = "lower_index";
            const char* const scale = "scale";
        }
    }

}

#endif
