#include "TimescaleDBArchiver.h"

#include <thread>

namespace adapter
{
namespace historian
{

TimescaleDBArchiver::TimescaleDBArchiver(const Logger& logger)
    : m_logger(logger)
{
    
}

TimescaleDBArchiver::~TimescaleDBArchiver()
{

}

void TimescaleDBArchiver::save(const char* value)
{
    {
        std::unique_lock<std::mutex> lock{m_mutex};
        m_queue.push(value);
    }
    m_cond.notify_one();
}

void TimescaleDBArchiver::start()
{
    //std::thread thread{ &TimescaleDBArchiver::run, this };
    run();
}

void TimescaleDBArchiver::run()
{
    while(true)
    {
        // Establish a connection
        while(!m_connection || !m_connection->is_connected())
        {
            m_logger.info("Trying to connect to PostgreSQL...");
            m_connection = std::make_unique<PQConnection>("postgresql://postgres:asdf@localhost:5432/openfmb");
        }
        m_logger.info("Connected to PostgreSQL database");

        // Wait for data
        std::unique_lock<std::mutex> lock(m_mutex);
        while (m_queue.empty())
        {
            m_cond.wait(lock);
        }

        auto item = m_queue.front();
        auto query = "INSERT INTO data (value) VALUES " + item;
        auto result = m_connection->exec(query.c_str());
        if (result.is_successful())
        {
            m_queue.pop();
        }
    }
}

}
}
