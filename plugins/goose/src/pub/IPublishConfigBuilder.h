// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_PUB_IPUBLISHCONFIGBUILDER_H
#define OPENFMB_ADAPTER_GOOSE_PUB_IPUBLISHCONFIGBUILDER_H

#include "BuildingFunction.h"
#include "goose-cpp/messages/BitString.h"
#include <chrono>
#include <string>

namespace adapter {
namespace goose {

    class IPublishConfigBuilder {
    public:
        virtual ~IPublishConfigBuilder() = default;

        virtual void add_start_action(const action_t& action) = 0;
        virtual void add_end_action(const action_t& action) = 0;
        virtual void add_bool_handler(const std::string& name, const meas_fn_t<bool>& handler) = 0;
        virtual void add_int32_handler(const std::string& name, const meas_fn_t<int32_t>& handler) = 0;
        virtual void add_int64_handler(const std::string& name, const meas_fn_t<int64_t>& handler) = 0;
        virtual void add_uint32_handler(const std::string& name, const meas_fn_t<uint32_t>& handler) = 0;
        virtual void add_uint64_handler(const std::string& name, const meas_fn_t<uint64_t>& handler) = 0;
        virtual void add_float_handler(const std::string& name, const meas_fn_t<float>& handler) = 0;
        virtual void add_double_handler(const std::string& name, const meas_fn_t<double>& handler) = 0;
        virtual void add_string_handler(const std::string& name, const meas_fn_t<std::string>& handler) = 0;
        virtual void add_bitstring_handler(const std::string& name, const meas_fn_t<goose_cpp::BitString>& handler) = 0;
        virtual void add_timestamp_handler(const std::string& name, const meas_fn_t<std::chrono::system_clock::time_point>& handler) = 0;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_IPUBLISHCONFIGBUILDER_H
