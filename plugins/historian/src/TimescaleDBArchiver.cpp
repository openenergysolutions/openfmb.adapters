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

void TimescaleDBArchiver::save(const std::string& message_uuid,
                               uint64_t seconds,
                               const std::string& device_uuid,
                               const std::string& tagname,
                               float value)
{
    {
        std::lock_guard<std::mutex> lock{m_mutex};

        auto item = Item{
            message_uuid,
            seconds,
            device_uuid,
            tagname,
            std::to_string(value)
        };
        m_queue.push(item);
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
        auto query = "INSERT INTO data "
                         "(message_uuid, timestamp, device_uuid, tagname, value) "
                     "VALUES ("
                         "'" + item.message_uuid + "',"
                         "to_timestamp(" + std::to_string(item.seconds) + "),"
                         "'" + item.device_uuid + "',"
                         "'" + item.tagname + "',"
                         "" + item.value + ""
                     ")";
        auto result = m_connection->exec(query.c_str());
        if (result.is_successful())
        {
            m_logger.trace("Successfully inserted {} values", 1);
        }
        else
        {
            m_logger.error("PostgreSQL request failed: {}", result.get_error());
        }
        m_queue.pop();
    }
}

}
}
