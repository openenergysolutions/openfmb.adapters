// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_POLLHANDLER_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_POLLHANDLER_H

#include <adapter-api/Logger.h>
#include "IPollHandler.h"
#include "IConfigurationBuilder.h"

#include "iccp/BuildingFunction.h"
#include "iccp/BitString.h"

#include <unordered_map>
#include <unordered_set>

namespace adapter {
    namespace iccp {
        namespace client {           

            class PollHandler : public IPollHandler, public IConfigurationBuilder {

            public:
                virtual ~PollHandler() = default;
                
                void begin(api::Logger& logger) override;

                void end(api::Logger& logger) override;

                void configure() override;    

                size_t num_mapped_values() const override;

                void add_begin_action(const action_t& action) override;
                void add_end_action(const action_t& action) override;

                void add_bool_handler(const std::string& name, const meas_fn_t<bool>& handler) override;
                void add_int32_handler(const std::string& name, const meas_fn_t<int32_t>& handler) override;
                void add_int64_handler(const std::string& name, const meas_fn_t<int64_t>& handler) override;
                void add_float_handler(const std::string& name, const meas_fn_t<float>& handler) override;
                void add_double_handler(const std::string& name, const meas_fn_t<double>& handler) override;
                void add_string_handler(const std::string& name, const meas_fn_t<std::string>& handler) override;
                void add_bitstring_handler(const std::string& name, const meas_fn_t<BitString>& handler) override;
                void add_timestamp_handler(const std::string& name, const meas_fn_t<std::chrono::system_clock::time_point>& handler) override;

            private:
                std::vector<action_t> start_handlers;
                std::vector<action_t> end_handlers;

                std::unordered_set<std::string> m_all_handlers;
                std::unordered_map<std::string, meas_fn_t<bool>> m_bool_handlers;
                std::unordered_map<std::string, meas_fn_t<int32_t>> m_int32_handlers;
                std::unordered_map<std::string, meas_fn_t<int64_t>> m_int64_handlers;
                std::unordered_map<std::string, meas_fn_t<float>> m_float_handlers;
                std::unordered_map<std::string, meas_fn_t<double>> m_double_handlers;
                std::unordered_map<std::string, meas_fn_t<std::string>> m_string_handlers;
                std::unordered_map<std::string, meas_fn_t<BitString>> m_bitstring_handlers;
                std::unordered_map<std::string, meas_fn_t<std::chrono::system_clock::time_point>> m_timestamp_handlers;
            };
        }
    }
}

#endif
