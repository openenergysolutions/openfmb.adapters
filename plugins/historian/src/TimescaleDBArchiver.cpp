#include "TimescaleDBArchiver.h"

#include <thread>
#include <boost/uuid/uuid_io.hpp>

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

void TimescaleDBArchiver::save(std::unique_ptr<Message> message)
{
    {
        std::lock_guard<std::mutex> lock{m_mutex};
        m_queue.emplace_back(std::move(message));
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

        auto message = std::move(m_queue.front());
        m_queue.pop_front();
        lock.unlock();

        auto query = std::string("INSERT INTO data "
                                     "(message_uuid, timestamp, device_uuid, tagname, value) "
                                 "VALUES ");

        for(auto& item : message->items)
        {
            std::string value_str;
            switch(item.type)
            {
                case MessageItem::Type::UnsignedInteger:
                    value_str = std::to_string(item.value.unsigned_int);
                    break;
                case MessageItem::Type::SignedInteger:
                    value_str = std::to_string(item.value.signed_int);
                    break;
                case MessageItem::Type::FloatingPoint:
                    value_str = std::to_string(item.value.floating_point);
                    break;
            }

            query.append("("
                             "'" + boost::uuids::to_string(message->message_uuid) + "',"
                             "to_timestamp(" + std::to_string(message->timestamp) + "),"
                             "'" + boost::uuids::to_string(message->device_uuid) + "',"
                             "'" + item.tagname + "',"
                             "" + value_str + ""
                          ")");
            if(&item != &message->items.back())
            {
                query.append(",");
            }
        }

        auto result = m_connection->exec(query.c_str());
        if (result.is_successful())
        {
            m_logger.info("Successfully inserted {} values", message->items.size());
        }
        else
        {
            m_logger.error("PostgreSQL request failed: {}", result.get_error());


            // The value is put back in front for reprocessing
            std::lock_guard<std::mutex> lock{m_mutex};
            m_queue.emplace_front(std::move(message));
        }
    }
}

}
}
