// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "PollHandler.h"

#include <adapter-api/Exception.h>
#include <adapter-api/Logger.h>

#include <boost/numeric/conversion/cast.hpp>

namespace adapter {
    namespace iccp {
        namespace client {

            void PollHandler::add_begin_action(const action_t& action)
            {
                this->start_handlers.push_back(action);
            }            

            void PollHandler::add_end_action(const action_t& action)
            {
                this->end_handlers.push_back(action);
            }

            void PollHandler::begin(api::Logger& logger)
            {
                for (auto& action : this->start_handlers) {
                    action();
                }
            }            

            void PollHandler::end(api::Logger& logger)
            {
                for (auto& action : this->end_handlers) {
                    action();
                }
            }

            size_t PollHandler::num_mapped_values() const
            {
                return 0;
            }

            void PollHandler::configure() {

            }

            void PollHandler::add_bool_handler(const std::string& name, const meas_fn_t<bool>& handler)
            {
                m_all_handlers.insert(name);
                m_bool_handlers.insert({ name, handler });
            }

            void PollHandler::add_int32_handler(const std::string& name, const meas_fn_t<int32_t>& handler)
            {
                m_all_handlers.insert(name);
                m_int32_handlers.insert({ name, handler });
            }

            void PollHandler::add_int64_handler(const std::string& name, const meas_fn_t<int64_t>& handler)
            {
                m_all_handlers.insert(name);
                m_int64_handlers.insert({ name, handler });
            }
            void PollHandler::add_float_handler(const std::string& name, const meas_fn_t<float>& handler)
            {
                m_all_handlers.insert(name);
                m_float_handlers.insert({ name, handler });
            }
            void PollHandler::add_double_handler(const std::string& name, const meas_fn_t<double>& handler) 
            {
                m_all_handlers.insert(name);
                m_double_handlers.insert({ name, handler });
            }
            void PollHandler::add_string_handler(const std::string& name, const meas_fn_t<std::string>& handler)
            {
                m_all_handlers.insert(name);
                m_string_handlers.insert({ name, handler });
            }
            void PollHandler::add_bitstring_handler(const std::string& name, const meas_fn_t<BitString>& handler)
            {
                m_all_handlers.insert(name);
                m_bitstring_handlers.insert({ name, handler });
            }
            void PollHandler::add_timestamp_handler(const std::string& name, const meas_fn_t<std::chrono::system_clock::time_point>& handler)
            {
                m_all_handlers.insert(name);
                m_timestamp_handlers.insert({ name, handler });
            }
        }
    }
}

