#ifndef OPENFMB_PLUGIN_TIMESCALEDB_TIMESCALEDB_ARCHIVER_H
#define OPENFMB_PLUGIN_TIMESCALEDB_TIMESCALEDB_ARCHIVER_H

#include <condition_variable>
#include <deque>
#include <memory>
#include <mutex>
#include "adapter-api/Logger.h"
#include "IArchiver.h"
#include "PQConnection.h"

namespace adapter
{
namespace timescaledb
{

class TimescaleDBArchiver : public IArchiver
{
public:
    TimescaleDBArchiver(const Logger& logger);
    virtual ~TimescaleDBArchiver();

    void save(std::unique_ptr<Message> message) override;

    void start();

private:
    void run();

    Logger m_logger;

    std::thread m_worker_thread;
    std::mutex m_mutex;
    std::condition_variable m_cond;
    std::deque<std::unique_ptr<Message>> m_queue;

    std::unique_ptr<PQConnection> m_connection;
};

}
}

#endif
