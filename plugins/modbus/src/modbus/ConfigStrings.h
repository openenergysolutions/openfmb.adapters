#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGSTRINGS_H

namespace adapter
{
    namespace modbus
    {

        namespace keys
        {
            // top level
            constexpr const char* const name = "name";
            constexpr const char* const thread_pool_size = "thread-pool-size";

            // channel & session
            constexpr const char* const sessions = "sessions";
            constexpr const char* const remote_ip = "remote-ip";
            constexpr const char* const port = "port";
            constexpr const char* const unit_identifier = "unit-identifier";

            // heartbeat
            constexpr const char* const heartbeats = "heartbeats";
            constexpr const char* const period_ms = "period_ms";

            // poll level
            constexpr const char* const profile = "profile";
            constexpr const char* const poll_period_ms = "poll_period_ms";
            constexpr const char* const response_timeout_ms = "response_timeout_ms";
            constexpr const char* const auto_polling = "auto_polling";
            constexpr const char* const max_register_gaps = "max_register_gaps";

            // mapping level
            constexpr const char* const type = "type";
            constexpr const char* const index = "index";
            constexpr const char* const source = "source";
            constexpr const char* const upper_index = "upper_index";
            constexpr const char* const lower_index = "lower_index";
            constexpr const char* const scale = "scale";
            constexpr const char* const modulus = "modulus";
            constexpr const char* const mask = "mask";
            constexpr const char* const mapping = "mapping";
            constexpr const char* const value = "value";

            // controls
            constexpr const char* const action = "action";
            constexpr const char* const priority = "priority";
            constexpr const char* const when_true = "when-true";
            constexpr const char* const when_false = "when_false";
        }
    }

}

#endif
