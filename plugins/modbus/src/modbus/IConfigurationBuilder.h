
#ifndef OPENFMB_ADAPTER_MODBUS_ICONFIGURATIONBUILDER_H
#define OPENFMB_ADAPTER_MODBUS_ICONFIGURATIONBUILDER_H

#include <adapter-api/Logger.h>

#include "Bit.h"
#include "IRegister.h"

#include <functional>
#include <memory>

namespace adapter {
namespace modbus {
    using logger_action_t = std::function<void(api::Logger&)>;

    class IConfigurationBuilder {

    public:
        virtual ~IConfigurationBuilder() = default;

        virtual void add_begin_action(logger_action_t action) = 0;

        virtual void add_coil(uint16_t index, std::shared_ptr<Bit> bit) = 0;
        virtual void add_discrete_input(uint16_t index, std::shared_ptr<Bit> bit) = 0;

        virtual void add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg) = 0;
        virtual void add_input_register(uint16_t index, std::shared_ptr<IRegister> reg) = 0;

        virtual void add_end_action(logger_action_t action) = 0;
    };
}
}

#endif
