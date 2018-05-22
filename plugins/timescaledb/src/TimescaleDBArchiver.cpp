#include "TimescaleDBArchiver.h"

#include <sstream>
#include <thread>
#include <boost/uuid/uuid_io.hpp>

namespace adapter
{
namespace timescaledb
{

TimescaleDBArchiver::TimescaleDBArchiver(const Logger& logger,
                                         const std::string& database_url,
                                         const std::string& table_name,
                                         size_t max_queued_messages,
                                         std::chrono::steady_clock::duration connection_retry)
    : m_logger{logger},
      m_database_url{database_url},
      m_table_name{table_name},
      m_connection_retry{connection_retry},
      m_queue{max_queued_messages}
{
    
}

TimescaleDBArchiver::~TimescaleDBArchiver()
{

}

void TimescaleDBArchiver::save(std::unique_ptr<Message> message)
{
    auto successfully_pushed = m_queue.push(std::move(message));
    if(!successfully_pushed)
    {
        m_logger.warn("Buffer is full, one message was dropped.");
    }
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
            m_connection = std::make_unique<PQConnection>(m_database_url.c_str());
            if (m_connection->is_connected())
            {
                m_logger.info("Connected to PostgreSQL database");
            }
            else
            {
                m_logger.info("Unable to connect to PostgreSQL database, retry in {} seconds",
                              std::chrono::duration_cast<std::chrono::seconds>(m_connection_retry).count());
                std::this_thread::sleep_for(m_connection_retry);
            }
        }
        

        // Wait for data
        auto message = m_queue.pop(std::chrono::seconds(5));
        if(!message) continue;

        std::ostringstream oss;
        oss << "INSERT INTO " << m_table_name + " " <<
                   "(message_uuid, timestamp, device_uuid, tagname, value) " <<
               "VALUES ";

        for(auto& item : message->items)
        {
            oss << "(" <<
                       "'" << boost::uuids::to_string(message->message_uuid) << "'," <<
                       "to_timestamp(" << std::to_string(message->timestamp) << ")," <<
                       "'" << boost::uuids::to_string(message->device_uuid) << "'," <<
                       "'" << item.tagname + "'," <<
                       "" << item.value + "" <<
                    ")";

            if(&item != &message->items.back())
            {
                oss << ",";
            }
        }

        oss <<" ON CONFLICT DO NOTHING";

        auto result = m_connection->exec(oss.str().c_str());
        if (result.is_successful())
        {
            m_logger.info("Successfully inserted {} values", result.get_num_rows());
        }
        else
        {
            m_logger.error("PostgreSQL request failed: {}", result.get_error());

            // The value is put back in front for reprocessing
            auto successfully_pushed = m_queue.push_front(std::move(message));
            if(!successfully_pushed)
            {
                m_logger.warn("Buffer is full, the last message won't be reprocessed.");
            }
        }
    }
}

}
}
