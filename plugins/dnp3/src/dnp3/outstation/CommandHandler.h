
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_COMMANDHANDLER_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_COMMANDHANDLER_H

#include <opendnp3/outstation/ICommandHandler.h>

#include <functional>
#include <map>

#include "ICommandConfig.h"

namespace adapter {

namespace dnp3 {

    namespace outstation {

        class CommandHandler final : public opendnp3::ICommandHandler, public ICommandConfig {

            const api::publisher_t publisher;
            api::Logger logger;

            std::map<uint16_t, crob_handler_t> crob_map;
            std::map<uint16_t, ao_handler_t> ao_map;

        public:
            explicit CommandHandler(const api::publisher_t& publisher, api::Logger logger);

            /**** Implement ICommandHandler ****/

            opendnp3::CommandStatus Select(const opendnp3::ControlRelayOutputBlock& command, uint16_t index) override;

            opendnp3::CommandStatus Operate(const opendnp3::ControlRelayOutputBlock& command, uint16_t index,
                                            opendnp3::OperateType opType) override;

            opendnp3::CommandStatus Select(const opendnp3::AnalogOutputInt16& command, uint16_t index) override;

            opendnp3::CommandStatus
            Operate(const opendnp3::AnalogOutputInt16& command, uint16_t index, opendnp3::OperateType opType) override;

            opendnp3::CommandStatus Select(const opendnp3::AnalogOutputInt32& command, uint16_t index) override;

            opendnp3::CommandStatus
            Operate(const opendnp3::AnalogOutputInt32& command, uint16_t index, opendnp3::OperateType opType) override;

            opendnp3::CommandStatus Select(const opendnp3::AnalogOutputFloat32& command, uint16_t index) override;

            opendnp3::CommandStatus Operate(const opendnp3::AnalogOutputFloat32& command, uint16_t index,
                                            opendnp3::OperateType opType) override;

            opendnp3::CommandStatus Select(const opendnp3::AnalogOutputDouble64& command, uint16_t index) override;

            opendnp3::CommandStatus Operate(const opendnp3::AnalogOutputDouble64& command, uint16_t index,
                                            opendnp3::OperateType opType) override;

            /**** Implement ICommandConfig ****/

            void add_handler(uint16_t index, const crob_handler_t& handler) override;

            void add_handler(uint16_t index, const ao_handler_t& handler) override;

        protected:
            void begin() override {}

            void end() override {}
        };
    }
}
}

#endif
