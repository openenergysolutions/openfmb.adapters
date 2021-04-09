// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "TimescaleDBArchiver.h"

#include <boost/uuid/uuid_io.hpp>
#include <boost/assign.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <sstream>
#include <thread>
#include <libpq-fe.h>

namespace adapter {
namespace timescaledb {

    TimescaleDBArchiver::TimescaleDBArchiver(const api::Logger& logger,
                                             const std::string& database_url,
                                             bool store_measurement,
                                             const std::string& table_name,
                                             bool store_raw_messages,
                                             const std::string& raw_table_name,
                                             int raw_data_format,
                                             size_t max_queued_messages,
                                             std::chrono::steady_clock::duration connection_retry)
        : m_logger{ logger }
        , m_database_url{ database_url }
        , m_store_measurement { store_measurement }
        , m_table_name{ table_name }
        , m_store_raw_messages{ store_raw_messages }
        , m_raw_table_name{ raw_table_name }
        , m_raw_data_format{ raw_data_format }
        , m_connection_retry{ connection_retry }
        , m_queue{ max_queued_messages }
        , m_queue_for_raw_messages{ max_queued_messages }
        , m_shutdown{ false }
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
        m_worker_thread = std::thread{&TimescaleDBArchiver::run, this};
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

            if (m_store_measurement) {
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
                bool found_column = false;
                for (auto &item : message->items) {
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

                        found_column = true;
                    }
                }

                oss << ")";
                values << ")";

                m_logger.debug(values.str());

                oss << " VALUES " << values.str();

                oss << " ON CONFLICT DO NOTHING";

                if (found_column) {
                    auto result = m_connection->exec(oss.str().c_str());
                    if (result.is_successful()) {
                        m_logger.info("Successfully inserted {} row(s) into {}.", result.get_num_rows(), m_table_name);
                    } else {
                        m_logger.error("PostgreSQL request failed: {}", result.get_error());

                        // The value is put back in front for reprocessing
                        auto successfully_pushed = m_queue.push_front(std::move(message));
                        if (!successfully_pushed) {
                            m_logger.warn("Buffer is full, the last message won't be reprocessed.");
                        }
                    }
                }
            }

            if (m_store_raw_messages) {
                auto successfully_pushed = m_queue_for_raw_messages.push(std::move(message));
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

            if (m_raw_data_format == 0) {
                query << "("
                       << "'" << boost::uuids::to_string(message->message_uuid) << "',"
                       << "to_timestamp(" << std::to_string(message->timestamp) << "),"
                       << "'" << boost::uuids::to_string(message->device_uuid) << "',"
                       << "'" << message->profile_name + "',"
                       << "'" << message->json_data + "'"
                       << ")";

                auto rs = m_connection_raw_messages->exec(query.str().c_str());

                if (rs.is_successful()) {
                    m_logger.info("Successfully inserted {} row(s) into {}.", rs.get_num_rows(), m_raw_table_name);
                } else {
                    m_logger.error("PostgreSQL request failed: {}", rs.get_error());

                    // The value is put back in front for reprocessing
                    auto successfully_pushed = m_queue_for_raw_messages.push_front(std::move(message));
                    if (!successfully_pushed) {
                        m_logger.warn("Buffer (raw messages) is full, the last message won't be reprocessed.");
                    }
                }


            } else if (m_raw_data_format == 1) {

                query << "("
                      << "'" << boost::uuids::to_string(message->message_uuid) << "',"
                      << "to_timestamp(" << std::to_string(message->timestamp) << "),"
                      << "'" << boost::uuids::to_string(message->device_uuid) << "',"
                      << "'" << message->profile_name + "',"
                      << "" << "$1::bytea"
                      << ")";

                auto rs = m_connection_raw_messages->exec(query.str().c_str(), message->raw_data.get(), message->raw_data_size);

                if (rs.is_successful()) {
                    m_logger.info("Successfully inserted {} row(s) into {}.", rs.get_num_rows(), m_raw_table_name);
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
    }

    bool TimescaleDBArchiver::get_column_value(const MessageItem *item, std::string& value, std::string& column_name)
    {
        static const std::map<std::string,std::string> variable_lookup = boost::assign::map_list_of
                (".readingMMXU.A.neut.cVal.mag", "A_neut_mag")
                (".readingMMXU.A.net.cVal.mag",  "A_net_mag")
                (".readingMMXU.A.phsA.cVal.mag", "A_phsA_mag")
                (".readingMMXU.A.phsB.cVal.mag", "A_phsB_mag")
                (".readingMMXU.A.phsC.cVal.mag", "A_phsC_mag")

                (".readingMMXU.Hz.mag", "Hz_mag")

                (".readingMMXU.PF.neut.cVal.mag", "PF_neut_mag")
                (".readingMMXU.PF.net.cVal.mag",  "PF_net_mag")
                (".readingMMXU.PF.phsA.cVal.mag", "PF_phsA_mag")
                (".readingMMXU.PF.phsB.cVal.mag", "PF_phsB_mag")
                (".readingMMXU.PF.phsC.cVal.mag", "PF_phsC_mag")

                (".readingMMXU.PhV.neut.cVal.mag", "PhV_neut_mag")
                (".readingMMXU.PhV.neut.cVal.ang.value", "PhV_neut_ang")
                (".readingMMXU.PhV.net.cVal.mag", "PhV_net_mag")
                (".readingMMXU.PhV.net.cVal.ang.value", "PhV_net_ang")
                (".readingMMXU.PhV.phsA.cVal.mag", "PhV_phsA_mag")
                (".readingMMXU.PhV.phsA.cVal.ang.value", "PhV_phsA_ang")
                (".readingMMXU.PhV.phsB.cVal.mag", "PhV_phsB_mag")
                (".readingMMXU.PhV.phsB.cVal.ang.value", "PhV_phsB_ang")
                (".readingMMXU.PhV.phsC.cVal.mag", "PhV_phsC_mag")
                (".readingMMXU.PhV.phsC.cVal.ang.value", "PhV_phsC_ang")

                (".readingMMXU.PPV.phsAB.cVal.mag", "PPV_phsAB_mag")
                (".readingMMXU.PPV.phsAB.cVal.ang.value", "PPV_phsAB_ang")
                (".readingMMXU.PPV.phsBC.cVal.mag", "PPV_phsBC_mag")
                (".readingMMXU.PPV.phsBC.cVal.ang.value", "PPV_phsBC_ang")
                (".readingMMXU.PPV.phsCA.cVal.mag", "PPV_phsCA_mag")
                (".readingMMXU.PPV.phsCA.cVal.ang.value", "PPV_phsCA_ang")

                (".readingMMXU.VA.neut.cVal.mag", "VA_neut_mag")
                (".readingMMXU.VA.net.cVal.mag", "VA_net_mag")
                (".readingMMXU.VA.phsA.cVal.mag", "VA_phsA_mag")
                (".readingMMXU.VA.phsB.cVal.mag", "VA_phsB_mag")
                (".readingMMXU.VA.phsC.cVal.mag", "VA_phsC_mag")

                (".readingMMXU.VAr.neut.cVal.mag", "VAr_neut_mag")
                (".readingMMXU.VAr.net.cVal.mag", "VAr_net_mag")
                (".readingMMXU.VAr.phsA.cVal.mag", "VAr_phsA_mag")
                (".readingMMXU.VAr.phsB.cVal.mag", "VAr_phsB_mag")
                (".readingMMXU.VAr.phsC.cVal.mag", "VAr_phsC_mag")

                (".readingMMXU.W.neut.cVal.mag", "W_neut_mag")
                (".readingMMXU.W.net.cVal.mag", "W_net_mag")
                (".readingMMXU.W.phsA.cVal.mag", "W_phsA_mag")
                (".readingMMXU.W.phsB.cVal.mag", "W_phsB_mag")
                (".readingMMXU.W.phsC.cVal.mag", "W_phsC_mag")
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
