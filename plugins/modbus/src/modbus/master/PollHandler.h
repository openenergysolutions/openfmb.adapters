// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_POLLHANDLER_H
#define OPENFMB_ADAPTER_MODBUS_POLLHANDLER_H

#include "IConfigurationBuilder.h"
#include "IPollHandler.h"
#include "IRequestBuilder.h"

#include <map>
#include <vector>

namespace adapter {
namespace modbus {
namespace master {

    class PollHandler final : public IPollHandler, public IConfigurationBuilder {

    public:
        /// ---- implement IPollHandler ----

        void begin(api::Logger& logger) override;
        void apply(const ::modbus::ReadCoilsResponse& response) override;
        void apply(const ::modbus::ReadDiscreteInputsResponse& response) override;
        void apply(const ::modbus::ReadHoldingRegistersResponse& response) override;
        void apply(const ::modbus::ReadInputRegistersResponse& response) override;
        void end(api::Logger& logger) override;

        size_t num_mapped_values() const override;
        void configure(const AutoPollConfig& config, IRequestBuilder& builder) override;

        /// ---- implement IConfigurationBuilder ----

        void add_begin_action(logger_action_t fun) override;
        void add_coil(uint16_t index, std::shared_ptr<Bit> bit) override;
        void add_discrete_input(uint16_t index, std::shared_ptr<Bit> bit) override;
        void add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg) override;
        void add_input_register(uint16_t index, std::shared_ptr<IRegister> reg) override;
        void add_end_action(logger_action_t fun) override;

    private:
        using bit_map_t = std::map<uint16_t, std::vector<std::shared_ptr<Bit>>>;
        using register_map_t = std::map<uint16_t, std::vector<std::shared_ptr<IRegister>>>;

        /// Helper templated methods
        template <typename T>
        void configure_bits(bit_map_t bits, const AutoPollConfig& config, IRequestBuilder& builder);
        template <typename T>
        void configure_registers(register_map_t registers, const AutoPollConfig& config, IRequestBuilder& builder);
        template <typename T>
        void apply_bits(bit_map_t bits, const T& response);
        template <typename T>
        void apply_registers(register_map_t registers, const T& response);

        bit_map_t coils;
        bit_map_t discrete_inputs;
        register_map_t holding_registers;
        register_map_t input_registers;
        std::vector<logger_action_t> begin_actions;
        std::vector<logger_action_t> end_actions;
    };

}
}
}

#endif
