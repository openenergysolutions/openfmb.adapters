#include "TimescaleDBArchiver.h"

#include <boost/uuid/uuid_io.hpp>
#include <boost/assign.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <sstream>
#include <thread>
#include <libpq-fe.h>

namespace adapter {
namespace timescaledb {

    TimescaleDBArchiver::TimescaleDBArchiver(const Logger& logger,
                                             const std::string& database_url,
                                             const std::string& table_name,
                                             bool store_raw_messages,
                                             const std::string& raw_table_name,
                                             size_t max_queued_messages,
                                             std::chrono::steady_clock::duration connection_retry)
        : m_logger{ logger }
        , m_database_url{ database_url }
        , m_table_name{ table_name }
        , m_store_raw_messages{ store_raw_messages }
        , m_raw_table_name{ raw_table_name }
        , m_connection_retry{ connection_retry }
        , m_queue{ max_queued_messages }
        , m_queue_for_raw_messages{ max_queued_messages }
        , m_shutdown{ false }
    {
    }

    TimescaleDBArchiver::~TimescaleDBArchiver()
    {
    }

    void TimescaleDBArchiver::save(std::unique_ptr<Message> message)
    {
        auto successfully_pushed = m_queue.push(std::move(message));
        if (!successfully_pushed) {
            m_logger.warn("Buffer is full, one message was dropped.");
        }
    }

    void TimescaleDBArchiver::start()
    {
        m_worker_thread = std::thread{ &TimescaleDBArchiver::run, this };
        if (m_store_raw_messages) {
            m_worker_thread_raw_messages = std::thread{&TimescaleDBArchiver::run_store_raw_messages, this};
        }
    }

    void TimescaleDBArchiver::shutdown()
    {
        m_shutdown = true;
        m_worker_thread.join();
        m_worker_thread_raw_messages.join();
    }

    void TimescaleDBArchiver::run()
    {
        while (!m_shutdown) {
            // Establish a connection
            while (!m_connection || !m_connection->is_connected()) {
                m_logger.info("Trying to connect to PostgreSQL...");
                m_connection = std::make_unique<PQConnection>(m_database_url.c_str());
                if (m_connection->is_connected()) {
                    m_logger.info("Connected to PostgreSQL database");
                } else {
                    m_logger.info("Unable to connect to PostgreSQL database, retry in {} seconds",
                                  std::chrono::duration_cast<std::chrono::seconds>(m_connection_retry).count());
                    std::this_thread::sleep_for(m_connection_retry);
                }

                if (m_shutdown)
                    return;
            }

            // Wait for data
            auto message = m_queue.pop(std::chrono::seconds(5));
            if (m_shutdown)
                return;
            if (!message)
                continue;

            std::ostringstream oss;
            oss << "INSERT INTO " << m_table_name + " "
                << "(message_uuid, timestamp, device_uuid, tagname, ";

            std::ostringstream values;
            values << "("
                << "'" << boost::uuids::to_string(message->message_uuid) << "',"
                << "to_timestamp(" << std::to_string(message->timestamp) << "),"
                << "'" << boost::uuids::to_string(message->device_uuid) << "',"
                << "'" << message->profile_name + "',";

            bool first = true;
            for (auto& item : message->items) {
                std::string value;
                std::string column;

                if (get_column_value(&item, value, column)) {

                    if (!first) {
                        oss << ", ";
                        values << ", ";
                    }

                    oss << column;
                    values << value;

                    first = false;
                }
            }

            oss << ")";
            values << ")";

            m_logger.info(values.str());

            oss << " VALUES " << values.str();

            oss << " ON CONFLICT DO NOTHING";

            auto result = m_connection->exec(oss.str().c_str());
            if (result.is_successful()) {
                m_logger.info("Successfully inserted {} values", result.get_num_rows());
            } else {
                m_logger.error("PostgreSQL request failed: {}", result.get_error());

                // The value is put back in front for reprocessing
                auto successfully_pushed = m_queue.push_front(std::move(message));
                if (!successfully_pushed) {
                    m_logger.warn("Buffer is full, the last message won't be reprocessed.");
                }
            }

            if (m_store_raw_messages) {
                auto successfully_pushed = m_queue_for_raw_messages.push_front(std::move(message));
                if (!successfully_pushed) {
                    m_logger.warn("Buffer (raw messages) is full, the last message won't be reprocessed.");
                }
            }
        }
    }

    void TimescaleDBArchiver::run_store_raw_messages() {
        while (!m_shutdown) {
            // Establish a connection
            while (!m_connection_raw_messages || !m_connection_raw_messages->is_connected()) {
                m_logger.info("Trying to connect to PostgreSQL...");
                m_connection_raw_messages = std::make_unique<PQConnection>(m_database_url.c_str());
                if (m_connection_raw_messages->is_connected()) {
                    m_logger.info("Connected to PostgreSQL database");
                } else {
                    m_logger.info("Unable to connect to PostgreSQL database, retry in {} seconds",
                                  std::chrono::duration_cast<std::chrono::seconds>(m_connection_retry).count());
                    std::this_thread::sleep_for(m_connection_retry);
                }

                if (m_shutdown)
                    return;
            }

            // Wait for data
            auto message = m_queue_for_raw_messages.pop(std::chrono::seconds(5));
            if (m_shutdown)
                return;
            if (!message)
                continue;

            auto& item = message->items.back();

            std::ostringstream query;
            query << "INSERT INTO " << m_raw_table_name + " "
                  << "(message_uuid, timestamp, device_uuid, tagname, value) "
                  << "VALUES ";
            query << "("
                  << "'" << boost::uuids::to_string(message->message_uuid) << "',"
                  << "to_timestamp(" << std::to_string(message->timestamp) << "),"
                  << "'" << boost::uuids::to_string(message->device_uuid) << "',"
                  << "'" << message->profile_name + "',"
                  << "" << "$1::bytea"
                  << ")";

            auto rs = m_connection_raw_messages->exec(query.str().c_str(), message->raw_data.get(), message->raw_data_size);
            if (rs.is_successful()) {
                m_logger.info("Successfully inserted {} values", rs.get_num_rows());
            } else {
                m_logger.error("PostgreSQL request failed: {}", rs.get_error());

                // The value is put back in front for reprocessing
                auto successfully_pushed = m_queue_for_raw_messages.push_front(std::move(message));
                if (!successfully_pushed) {
                    m_logger.warn("Buffer (raw messages) is full, the last message won't be reprocessed.");
                }
            }
        }
    }

    bool TimescaleDBArchiver::get_column_value(const MessageItem *item, std::string& value, std::string& column_name)
    {
        static const std::map<std::string,std::string> variable_lookup = boost::assign::map_list_of
                ("A.neut.cVal.mag.f.value", "A_neut_mag")
                ("A.net.cVal.mag.f.value",  "A_net_mag")
                ("A.phsA.cVal.mag.f.value", "A_phsA_mag")
                ("A.phsB.cVal.mag.f.value", "A_phsB_mag")
                ("A.phsC.cVal.mag.f.value", "A_phsC_mag")

                ("Hz.cVal.mag.f.value",     "Hz_mag")

                ("PF.neut.cVal.mag.f.value", "PF_neut_mag")
                ("PF.net.cVal.mag.f.value",  "PF_net_mag")
                ("PF.phsA.cVal.mag.f.value", "PF_phsA_mag")
                ("PF.phsB.cVal.mag.f.value", "PF_phsB_mag")
                ("PF.phsC.cVal.mag.f.value", "PF_phsC_mag")

                ("PhV.neut.cVal.mag.f.value", "PhV_neut_mag")
                ("PhV.neut.cVal.ang.f.value", "PhV_neut_ang")
                ("PhV.net.cVal.mag.f.value", "PhV_net_mag")
                ("PhV.net.cVal.ang.f.value", "PhV_net_ang")
                ("PhV.phsA.cVal.mag.f.value", "PhV_phsA_mag")
                ("PhV.phsA.cVal.ang.f.value", "PhV_phsA_ang")
                ("PhV.phsB.cVal.mag.f.value", "PhV_phsB_mag")
                ("PhV.phsB.cVal.ang.f.value", "PhV_phsB_ang")
                ("PhV.phsC.cVal.mag.f.value", "PhV_phsC_mag")
                ("PhV.phsC.cVal.ang.f.value", "PhV_phsC_ang")

                ("PPV.phsAB.cVal.mag.f.value", "PPV_phsAB_mag")
                ("PPV.phsAB.cVal.ang.f.value", "PPV_phsAB_ang")
                ("PPV.phsBC.cVal.mag.f.value", "PPV_phsBC_mag")
                ("PPV.phsBC.cVal.ang.f.value", "PPV_phsBC_ang")
                ("PPV.phsCA.cVal.mag.f.value", "PPV_phsCA_mag")
                ("PPV.phsCA.cVal.ang.f.value", "PPV_phsCA_ang")

                ("VA.neut.cVal.mag.f.value", "VA_neut_mag")
                ("VA.net.cVal.mag.f.value", "VA_net_mag")
                ("VA.phsA.cVal.mag.f.value", "VA_phsA_mag")
                ("VA.phsB.cVal.mag.f.value", "VA_phsB_mag")
                ("VA.phsC.cVal.mag.f.value", "VA_phsC_mag")

                ("VAr.neut.cVal.mag.f.value", "VAr_neut_mag")
                ("VAr.net.cVal.mag.f.value", "VAr_net_mag")
                ("VAr.phsA.cVal.mag.f.value", "VAr_phsA_mag")
                ("VAr.phsB.cVal.mag.f.value", "VAr_phsB_mag")
                ("VAr.phsC.cVal.mag.f.value", "VAr_phsC_mag")

                ("W.neut.cVal.mag.f.value", "W_neut_mag")
                ("W.net.cVal.mag.f.value", "W_net_mag")
                ("W.phsA.cVal.mag.f.value", "W_phsA_mag")
                ("W.phsB.cVal.mag.f.value", "W_phsB_mag")
                ("W.phsC.cVal.mag.f.value", "W_phsC_mag")
                ;

        for (const auto &kvp : variable_lookup) {
            if (boost::algorithm::ends_with(item->tagname, kvp.first))
            {
                column_name = kvp.second;
                value = item->value;
                return true;
            }
        }
        return false;
    }
}
}
