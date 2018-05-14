
#include "PollHandler.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{
    namespace modbus
    {

        void PollHandler::add_begin_action(action_t fun)
        {
            this->begin_actions.push_back(fun);
        }

        void PollHandler::add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg)
        {
            if(holding_registers.find(index) != holding_registers.end())
            {
                throw Exception("Index already mapped: ", index);
            }
            this->holding_registers[index] = reg;
        }

        void PollHandler::add_end_action(action_t fun)
        {
            this->end_actions.push_back(fun);
        }

        void PollHandler::begin()
        {
            for(auto& action : this->begin_actions)
            {
                action();
            }
        }

        void PollHandler::apply(const ::modbus::ReadHoldingRegistersResponse& response)
        {
            for(auto& value : response.values)
            {
                auto iter = this->holding_registers.find(value.address);
                if(iter != this->holding_registers.end())
                {
                    iter->second->set(value.value);
                }
            }
        }

        void PollHandler::end()
        {
            for(auto& action : this->end_actions)
            {
                action();
            }
        }

        size_t PollHandler::num_mapped_values() const
        {
            return this->holding_registers.size();
        }
    }

}


