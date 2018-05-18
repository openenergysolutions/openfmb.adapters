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
        std::lock_guard<std::mutex> lock{m_mutex};
        m_queue.push(value);
    }
    m_cond.notify_one();
}

void TimescaleDBArchiver::start()
{
    m_worker_thread = std::thread{ &TimescaleDBArchiver::run, this };
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
            if (m_connection->is_connected())
            {
                m_logger.info("Connected to PostgreSQL database");
            }
        }
        

        // Wait for data
        std::unique_lock<std::mutex> lock(m_mutex);
        while (m_queue.empty())
        {
            m_cond.wait(lock);
        }

        auto item = m_queue.front();
        auto query = "INSERT INTO data VALUES (\'" + item + "')";
        auto result = m_connection->exec(query.c_str());
        if (result.is_successful())
        {
            m_logger.trace("Successfully inserted {} values", 1);
            m_queue.pop();
        }
        else
        {
            m_logger.error("PostgreSQL request failed: {}", result.get_error());
        }
    }
}

}
}
