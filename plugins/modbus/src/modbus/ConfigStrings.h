#ifndef OPENFMB_ADAPTER_MODBUS_CONFIGSTRINGS_H
#define OPENFMB_ADAPTER_MODBUS_CONFIGSTRINGS_H

namespace adapter
{
    namespace modbus
    {

        namespace keys
        {
            // top level
            static const char* const name = "name";
            static const char* const thread_pool_size = "thread-pool-size";

            // channel & session
            static const char* const sessions = "sessions";
            static const char* const remote_ip = "remote-ip";
            static const char* const port = "port";
            static const char* const unit_identifier = "unit-identifier";

            // poll level
            static const char* const profile = "profile";
            static const char* const polls = "polls";
            static const char* const period_ms = "period_ms";
            static const char* const type = "type";
            static const char* const start = "start";
            static const char* const count = "count";

            // mapping level
            static const char* const mapping = "mapping";
            static const char* const description = "description";
            static const char* const identified_object = "identified-object";
            static const char* const application_name = "application-name";
            static const char* const mRID = "mRID";
            static const char* const index = "index";
            static const char* const upper_index = "upper_index";
            static const char* const lower_index = "lower_index";
            static const char* const scale = "scale";
            static const char* const mag = "mag";
            static const char* const ang = "ang";
            static const char* const cVal = "cVal";

        }

        namespace comments
        {
            static const char* const ignored_if_blank = "ignored if blank";
        }
    }

}

#endif
