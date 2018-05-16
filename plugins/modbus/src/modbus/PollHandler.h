
#ifndef OPENFMB_ADAPTER_MODBUS_POLLHANDLER_H
#define OPENFMB_ADAPTER_MODBUS_POLLHANDLER_H

#include "IPollHandler.h"
#include "IConfigurationBuilder.h"

#include <map>
#include <vector>

namespace adapter
{
    namespace modbus
    {
        class IPollManager;

        class PollHandler final : public IPollHandler, public IConfigurationBuilder
        {
        public:

            /// ---- implement IPollHandler ----

            void begin() override;
            void apply(const ::modbus::ReadHoldingRegistersResponse& response) override;
            void end() override;

            size_t num_mapped_values() const override;

            /// ---- helpers for configuring the mapping ----

            void add_begin_action(action_t fun) override;
            void add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg) override;
            void add_end_action(action_t fun) override;

            /// Poll creation from the mapping
            void add_necessary_byte_polls(std::shared_ptr<IPollManager> poll_manager, unsigned int allowed_discontinuities = 0);
            void add_necessary_bit_polls(std::shared_ptr<IPollManager> poll_manager, unsigned int allowed_discontinuities = 0);

        private:

            std::map<uint16_t, std::shared_ptr<IRegister>> holding_registers;
            std::vector<action_t> begin_actions;
            std::vector<action_t> end_actions;
        };
    }

}

#endif
