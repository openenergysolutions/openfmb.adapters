// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "TimescaleDBArchiver.h"

#include <boost/uuid/uuid_io.hpp>
#include <boost/assign.hpp>
#include <regex>
#include <sstream>
#include <thread>
#include <libpq-fe.h>

namespace adapter {
namespace timescaledb {

    static const std::map<std::string,std::regex> variable_lookup =
    {
        {"A_neut_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.A.neut.cVal.mag")},
        {"A_net_mag",  std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.A.net.cVal.mag")},
        {"A_phsA_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.A.phsA.cVal.mag")},
        {"A_phsB_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.A.phsB.cVal.mag")},
        {"A_phsC_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.A.phsC.cVal.mag")},

        {"Hz_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.Hz.mag")},

        {"PF_neut_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PF.neut.cVal.mag")},
        {"PF_net_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PF.net.cVal.mag")},
        {"PF_phsA_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PF.phsA.cVal.mag")},
        {"PF_phsB_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PF.phsB.cVal.mag")},
        {"PF_phsC_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PF.phsC.cVal.mag")},

        {"PhV_neut_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.neut.cVal.mag")},
        {"PhV_neut_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.neut.cVal.ang.value")},
        {"PhV_net_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.net.cVal.mag")},
        {"PhV_net_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.net.cVal.ang.value")},
        {"PhV_phsA_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.phsA.cVal.mag")},
        {"PhV_phsA_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.phsA.cVal.ang.value")},
        {"PhV_phsB_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.phsB.cVal.mag")},
        {"PhV_phsB_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.phsB.cVal.ang.value")},
        {"PhV_phsC_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.phsC.cVal.mag")},
        {"PhV_phsC_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PhV.phsC.cVal.ang.value")},

        {"PPV_phsAB_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PPV.phsAB.cVal.mag")},
        {"PPV_phsAB_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PPV.phsAB.cVal.ang.value")},
        {"PPV_phsBC_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PPV.phsBC.cVal.mag")},
        {"PPV_phsBC_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PPV.phsBC.cVal.ang.value")},
        {"PPV_phsCA_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PPV.phsCA.cVal.mag")},
        {"PPV_phsCA_ang", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.PPV.phsCA.cVal.ang.value")},

        {"VA_neut_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VA.neut.cVal.mag")},
        {"VA_net_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VA.net.cVal.mag")},
        {"VA_phsA_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VA.phsA.cVal.mag")},
        {"VA_phsB_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VA.phsB.cVal.mag")},
        {"VA_phsC_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VA.phsC.cVal.mag")},

        {"VAr_neut_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VAr.neut.cVal.mag")},
        {"VAr_net_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VAr.net.cVal.mag")},
        {"VAr_phsA_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VAr.phsA.cVal.mag")},
        {"VAr_phsB_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VAr.phsB.cVal.mag")},
        {"VAr_phsC_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.VAr.phsC.cVal.mag")},

        {"W_neut_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.W.neut.cVal.mag")},
        {"W_net_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.W.net.cVal.mag")},
        {"W_phsA_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.W.phsA.cVal.mag")},
        {"W_phsB_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.W.phsB.cVal.mag")},
        {"W_phsC_mag", std::regex("[a-zA-Z.]+[\\.0]?\\.readingMMXU.W.phsC.cVal.mag")},

        // Load side
        {"A_neut_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.A.neut.cVal.mag")},
        {"A_net_mag_1",  std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.A.net.cVal.mag")},
        {"A_phsA_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.A.phsA.cVal.mag")},
        {"A_phsB_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.A.phsB.cVal.mag")},
        {"A_phsC_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.A.phsC.cVal.mag")},

        {"Hz_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.Hz.mag")},

        {"PF_neut_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PF.neut.cVal.mag")},
        {"PF_net_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PF.net.cVal.mag")},
        {"PF_phsA_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PF.phsA.cVal.mag")},
        {"PF_phsB_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PF.phsB.cVal.mag")},
        {"PF_phsC_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PF.phsC.cVal.mag")},

        {"PhV_neut_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.neut.cVal.mag")},
        {"PhV_neut_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.neut.cVal.ang.value")},
        {"PhV_net_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.net.cVal.mag")},
        {"PhV_net_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.net.cVal.ang.value")},
        {"PhV_phsA_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.phsA.cVal.mag")},
        {"PhV_phsA_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.phsA.cVal.ang.value")},
        {"PhV_phsB_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.phsB.cVal.mag")},
        {"PhV_phsB_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.phsB.cVal.ang.value")},
        {"PhV_phsC_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.phsC.cVal.mag")},
        {"PhV_phsC_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PhV.phsC.cVal.ang.value")},

        {"PPV_phsAB_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PPV.phsAB.cVal.mag")},
        {"PPV_phsAB_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PPV.phsAB.cVal.ang.value")},
        {"PPV_phsBC_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PPV.phsBC.cVal.mag")},
        {"PPV_phsBC_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PPV.phsBC.cVal.ang.value")},
        {"PPV_phsCA_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PPV.phsCA.cVal.mag")},
        {"PPV_phsCA_ang_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.PPV.phsCA.cVal.ang.value")},

        {"VA_neut_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VA.neut.cVal.mag")},
        {"VA_net_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VA.net.cVal.mag")},
        {"VA_phsA_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VA.phsA.cVal.mag")},
        {"VA_phsB_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VA.phsB.cVal.mag")},
        {"VA_phsC_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VA.phsC.cVal.mag")},

        {"VAr_neut_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VAr.neut.cVal.mag")},
        {"VAr_net_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VAr.net.cVal.mag")},
        {"VAr_phsA_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VAr.phsA.cVal.mag")},
        {"VAr_phsB_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VAr.phsB.cVal.mag")},
        {"VAr_phsC_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.VAr.phsC.cVal.mag")},

        {"W_neut_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.W.neut.cVal.mag")},
        {"W_net_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.W.net.cVal.mag")},
        {"W_phsA_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.W.phsA.cVal.mag")},
        {"W_phsB_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.W.phsB.cVal.mag")},
        {"W_phsC_mag_1", std::regex("[a-zA-Z.]+[\\.1]?\\.readingMMXU.W.phsC.cVal.mag")}
    };

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
                    m_logger.debug("Successfully inserted {} row(s) into {}.", rs.get_num_rows(), m_raw_table_name);
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
        for (const auto &kvp : variable_lookup) {
            std::smatch m;
            if (std::regex_match(item->tagname, m, kvp.second))
            {
                column_name = kvp.first;
                value = item->value;
                return true;
            }
        }
        return false;
    }
}
}