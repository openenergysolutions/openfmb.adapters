#ifndef OPENFMB_PLUGIN_HISTORIAN_TIMESCALEDB_ARCHIVER_H
#define OPENFMB_PLUGIN_HISTORIAN_TIMESCALEDB_ARCHIVER_H

#include <condition_variable>
#include <memory>
#include <mutex>
#include <queue>
#include <string>
#include "adapter-api/Logger.h"
#include "IArchiver.h"
#include "PQConnection.h"

namespace adapter
{
namespace historian
{

class TimescaleDBArchiver : public IArchiver
{
public:
    TimescaleDBArchiver(const Logger& logger);
    virtual ~TimescaleDBArchiver();

    void save(const char* value) override;

    void start();

private:
    void run();

    Logger m_logger;

    std::thread m_worker_thread;
    std::mutex m_mutex;
    std::condition_variable m_cond;
    std::queue<std::string> m_queue;

    std::unique_ptr<PQConnection> m_connection;
};

}
}

#endif
