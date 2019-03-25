
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_COMMANDHANDLER_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_COMMANDHANDLER_H

#include <opendnp3/outstation/ICommandHandler.h>

#include <adapter-api/IPublisher.h>

#include <functional>
#include <map>

namespace adapter {

namespace dnp3 {

    namespace outstation {

        class CommandHandler final : public opendnp3::ICommandHandler {

            using crob_handler_t = std::function<opendnp3::CommandStatus(api::IPublisher& publisher, const opendnp3::ControlRelayOutputBlock& crob)>;
            using ao_handler_t = std::function<opendnp3::CommandStatus(api::IPublisher& publisher, const opendnp3::AnalogOutputDouble64& value)>; // All set-point types converted to double type

            const api::publisher_t publisher;

            std::map<uint16_t, crob_handler_t> crob_map;
            std::map<uint16_t, ao_handler_t> ao_map;

        public:
            explicit CommandHandler(const api::publisher_t& publisher);

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

            /**** Helpers for configuring ****/

            void add_handler(uint16_t index, const crob_handler_t& handler);

            void add_handler(uint16_t index, const ao_handler_t& handler);

        protected:
            void Start() override {}

            void End() override {}
        };
    }
}
}

#endif
