
#include "CommandHandler.h"

using namespace opendnp3;

namespace adapter {

namespace dnp3 {

    namespace outstation {

        CommandHandler::CommandHandler(const api::publisher_t& publisher)
            : publisher(publisher)
        {
        }

        CommandStatus CommandHandler::Select(const ControlRelayOutputBlock& command, uint16_t index)
        {
            const auto iter = this->crob_map.find(index);
            return (iter == this->crob_map.end()) ? CommandStatus::NOT_SUPPORTED : CommandStatus::SUCCESS;
        }

        CommandStatus CommandHandler::Operate(const ControlRelayOutputBlock& command, uint16_t index, OperateType /*opType*/)
        {
            const auto iter = this->crob_map.find(index);
            return (iter == this->crob_map.end()) ? CommandStatus::NOT_SUPPORTED : iter->second(*this->publisher, command);
        }

        CommandStatus CommandHandler::Select(const AnalogOutputInt16& command, uint16_t index)
        {
            return this->Select(AnalogOutputDouble64(command.value), index);
        }

        CommandStatus CommandHandler::Operate(const AnalogOutputInt16& command, uint16_t index, OperateType opType)
        {
            return this->Operate(AnalogOutputDouble64(command.value), index, opType);
        }

        CommandStatus CommandHandler::Select(const AnalogOutputInt32& command, uint16_t index)
        {
            return this->Select(AnalogOutputDouble64(command.value), index);
        }

        CommandStatus CommandHandler::Operate(const AnalogOutputInt32& command, uint16_t index, OperateType opType)
        {
            return this->Operate(AnalogOutputDouble64(command.value), index, opType);
        }

        CommandStatus CommandHandler::Select(const AnalogOutputFloat32& command, uint16_t index)
        {
            return this->Select(AnalogOutputDouble64(command.value), index);
        }

        CommandStatus CommandHandler::Operate(const AnalogOutputFloat32& command, uint16_t index, OperateType opType)
        {
            return this->Operate(AnalogOutputDouble64(command.value), index, opType);
        }

        CommandStatus CommandHandler::Select(const AnalogOutputDouble64& command, uint16_t index)
        {
            const auto iter = this->ao_map.find(index);
            return (iter == this->ao_map.end()) ? CommandStatus::NOT_SUPPORTED : CommandStatus::SUCCESS;
        }

        CommandStatus CommandHandler::Operate(const AnalogOutputDouble64& command, uint16_t index, OperateType /*opType*/)
        {
            const auto iter = this->ao_map.find(index);
            return (iter == this->ao_map.end()) ? CommandStatus::NOT_SUPPORTED : iter->second(*this->publisher, command);
        }

        void CommandHandler::add_handler(uint16_t index, const crob_handler_t& handler)
        {
            const auto iter = this->crob_map.find(index);
            if (iter != this->crob_map.end()) {
                throw api::Exception("Duplicate binary output mapping for index: ", index);
            }
            this->crob_map[index] = handler;
        }

        void CommandHandler::add_handler(uint16_t index, const ao_handler_t& handler)
        {
            const auto iter = this->ao_map.find(index);
            if (iter != this->ao_map.end()) {
                throw api::Exception("Duplicate analog output mapping for index: ", index);
            }
            this->ao_map[index] = handler;
        }
    }
}
}
