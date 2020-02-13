
#include "PollHandler.h"

#include <adapter-api/Exception.h>
#include <adapter-api/Logger.h>

#include <boost/numeric/conversion/cast.hpp>

namespace adapter {
namespace modbus {
namespace master {

    void PollHandler::add_begin_action(logger_action_t fun)
    {
        this->begin_actions.push_back(std::move(fun));
    }

    void PollHandler::add_coil(uint16_t index, std::shared_ptr<Bit> bit)
    {
        coils[index].push_back(bit);
    }

    void PollHandler::add_discrete_input(uint16_t index, std::shared_ptr<Bit> bit)
    {
        discrete_inputs[index].push_back(bit);
    }

    void PollHandler::add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg)
    {
        holding_registers[index].push_back(reg);
    }

    void PollHandler::add_input_register(uint16_t index, std::shared_ptr<IRegister> reg)
    {
        input_registers[index].push_back(reg);
    }

    void PollHandler::add_end_action(logger_action_t fun)
    {
        this->end_actions.push_back(std::move(fun));
    }

    void PollHandler::begin(api::Logger& logger)
    {
        for (auto& action : this->begin_actions) {
            action(logger);
        }
    }

    void PollHandler::apply(const ::modbus::ReadCoilsResponse& response)
    {
        apply_bits(this->coils, response);
    }

    void PollHandler::apply(const ::modbus::ReadDiscreteInputsResponse& response)
    {
        apply_bits(this->discrete_inputs, response);
    }

    void PollHandler::apply(const ::modbus::ReadHoldingRegistersResponse& response)
    {
        apply_registers(this->holding_registers, response);
    }

    void PollHandler::apply(const ::modbus::ReadInputRegistersResponse& response)
    {
        apply_registers(this->input_registers, response);
    }

    void PollHandler::end(api::Logger& logger)
    {
        for (auto& action : this->end_actions) {
            action(logger);
        }
    }

    size_t PollHandler::num_mapped_values() const
    {
        return this->holding_registers.size() + this->input_registers.size();
    }

    void PollHandler::configure(const AutoPollConfig& config, IRequestBuilder& builder)
    {
        configure_bits<::modbus::ReadCoilsRequest>(this->coils, config, builder);
        configure_bits<::modbus::ReadDiscreteInputsRequest>(this->discrete_inputs, config, builder);
        configure_registers<::modbus::ReadHoldingRegistersRequest>(this->holding_registers, config, builder);
        configure_registers<::modbus::ReadInputRegistersRequest>(this->input_registers, config, builder);
    }

    template <typename T>
    void PollHandler::configure_bits(bit_map_t bits, const AutoPollConfig& config, IRequestBuilder& builder)
    {
        // nothing to configure
        if (bits.empty())
            return;

        auto begin = bits.begin()->first;
        auto end = begin;
        for (auto& bit : bits) {
            if (bit.first > end + config.max_bit_gaps + 1 || // There is a discontinuity
                bit.first - begin + 1 > T::max_bits)
            {
                // Add the request
                builder.add(T{ begin, boost::numeric_cast<uint16_t>(end - begin + 1) });
                begin = bit.first;
                end = bit.first;
            } else {
                // No discontinuity, keep adding
                end = bit.first;
            }
        }

        // Add last poll
        builder.add(T{ begin, boost::numeric_cast<uint16_t>(end - begin + 1) });
    }

    template <typename T>
    void PollHandler::configure_registers(register_map_t registers, const AutoPollConfig& config, IRequestBuilder& builder)
    {
        // nothing to configure
        if (registers.empty())
            return;

        auto begin = registers.begin()->first;
        auto end = begin;
        for (auto& reg : registers) {
            if (reg.first > end + config.max_register_gaps + 1 ||  // There is a discontinuity
                reg.first - begin + 1 > T::max_registers)
            {
                // Add the request
                builder.add(T{ begin, boost::numeric_cast<uint16_t>(end - begin + 1) });
                begin = reg.first;
                end = reg.first;
            } else {
                // No discontinuity, keep adding
                end = reg.first;
            }
        }

        // Add last poll
        builder.add(T{ begin, boost::numeric_cast<uint16_t>(end - begin + 1) });
    }

    template <typename T>
    void PollHandler::apply_bits(bit_map_t bits, const T& response)
    {
        for (auto& reg : response.values) {
            const auto entry = bits.find(reg.address);
            if (entry != bits.end()) {
                for (const auto& handler : entry->second) {
                    handler->set(reg.value);
                }
            }
        }
    }

    template <typename T>
    void PollHandler::apply_registers(register_map_t registers, const T& response)
    {
        for (auto& reg : response.values) {
            const auto entry = registers.find(reg.address);
            if (entry != registers.end()) {
                for (const auto& handler : entry->second) {
                    handler->set(reg.value);
                }
            }
        }
    }

}
}
}
