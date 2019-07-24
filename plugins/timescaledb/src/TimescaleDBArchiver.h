#ifndef OPENFMB_PLUGIN_TIMESCALEDB_TIMESCALEDB_ARCHIVER_H
#define OPENFMB_PLUGIN_TIMESCALEDB_TIMESCALEDB_ARCHIVER_H

#include "IArchiver.h"
#include "PQConnection.h"
#include "adapter-util/util/SynchronizedQueue.h"
#include <adapter-api/Logger.h>

namespace adapter {
namespace timescaledb {

    class TimescaleDBArchiver : public IArchiver {
    public:
        TimescaleDBArchiver(const api::Logger& logger,
                            const std::string& database_url,
                            bool store_measurement,
                            const std::string& table_name,
                            bool store_raw_messages,
                            const std::string& raw_table_name,
                            int raw_data_format,
                            size_t max_queued_messages,
                            std::chrono::steady_clock::duration connection_retry);
        ~TimescaleDBArchiver() override = default;

        void save(std::unique_ptr<Message> message) override;

        void start();
        void shutdown();

        bool store_raw_message_enabled() { return m_store_raw_messages; }
        int raw_message_format() { return m_raw_data_format; }

    private:
        void run();
        void run_store_raw_messages();

        bool get_column_value(const MessageItem *item, std::string& value, std::string& column_name);

        api::Logger m_logger;
        std::string m_database_url;

        std::chrono::steady_clock::duration m_connection_retry;
        bool m_shutdown;

        // Measurement values
        bool m_store_measurement;
        std::string m_table_name;
        util::SynchronizedQueue<Message> m_queue;
        std::thread m_worker_thread;
        std::unique_ptr<PQConnection> m_connection;

        // Raw messages
        bool m_store_raw_messages;
        std::string m_raw_table_name;
        int m_raw_data_format;
        util::SynchronizedQueue<Message> m_queue_for_raw_messages;
        std::thread m_worker_thread_raw_messages;
        std::unique_ptr<PQConnection> m_connection_raw_messages;
    };
}
}

#endif
