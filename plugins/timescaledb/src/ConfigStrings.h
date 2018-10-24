#ifndef OPENFMB_PLUGIN_TIMESCALEDB_CONFIGSTRINGS_H
#define OPENFMB_PLUGIN_TIMESCALEDB_CONFIGSTRINGS_H

namespace adapter {
namespace timescaledb {
    namespace keys {

        constexpr const char* const database_url = "database-url";
        constexpr const char* const table_name = "table-name";
        constexpr const char* const store_raw_message = "store-raw-message";
        constexpr const char* const raw_table_name = "raw-table-name";
        constexpr const char* const max_queued_messages = "max-queued-messages";
        constexpr const char* const connect_retry_seconds = "connect-retry-seconds";
    }
}
}

#endif
