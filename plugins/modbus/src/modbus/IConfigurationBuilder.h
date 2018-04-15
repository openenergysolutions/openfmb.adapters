
#ifndef OPENFMB_ADAPTER_MODBUS_ICONFIGURATIONBUILDER_H
#define OPENFMB_ADAPTER_MODBUS_ICONFIGURATIONBUILDER_H

#include "IRegister.h"

#include <memory>
#include <functional>

namespace adapter
{
    namespace modbus
    {
        using action_t = std::function<void ()>;

        class IConfigurationBuilder
        {

        public:

            virtual ~IConfigurationBuilder() = default;

            virtual void add_begin_action(action_t action) = 0;

            virtual void add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg) = 0;

            virtual void add_end_action(action_t action) = 0;
        };


    }
}

#endif
