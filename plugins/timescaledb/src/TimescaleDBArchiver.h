#ifndef OPENFMB_PLUGIN_TIMESCALEDB_TIMESCALEDB_ARCHIVER_H
#define OPENFMB_PLUGIN_TIMESCALEDB_TIMESCALEDB_ARCHIVER_H

#include "adapter-api/Logger.h"
#include "adapter-api/util/SynchronizedQueue.h"
#include "IArchiver.h"
#include "PQConnection.h"

namespace adapter
{
namespace timescaledb
{

class TimescaleDBArchiver : public IArchiver
{
public:
    TimescaleDBArchiver(const Logger& logger,
                        const std::string& database_url,
                        const std::string& table_name,
                        size_t max_queued_messages,
                        std::chrono::steady_clock::duration connection_retry);
    virtual ~TimescaleDBArchiver();

    void save(std::unique_ptr<Message> message) override;

    void start();

private:
    void run();

    Logger m_logger;
    std::string m_database_url;
    std::string m_table_name;
    std::chrono::steady_clock::duration m_connection_retry;

    util::SynchronizedQueue<Message> m_queue;
    std::thread m_worker_thread;
    std::unique_ptr<PQConnection> m_connection;
};

}
}

#endif
