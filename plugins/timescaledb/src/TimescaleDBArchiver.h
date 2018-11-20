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
                            const std::string& table_name,
                            size_t max_queued_messages,
                            std::chrono::steady_clock::duration connection_retry);
        ~TimescaleDBArchiver() override = default;

        void save(std::unique_ptr<Message> message) override;

        void start();
        void shutdown();

    private:
        void run();

        api::Logger m_logger;
        std::string m_database_url;
        std::string m_table_name;
        std::chrono::steady_clock::duration m_connection_retry;
        bool m_shutdown;

        util::SynchronizedQueue<Message> m_queue;
        std::thread m_worker_thread;
        std::unique_ptr<PQConnection> m_connection;
    };
}
}

#endif
