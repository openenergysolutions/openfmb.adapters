
#include "PollHandler.h"

#include <boost/numeric/conversion/cast.hpp>
#include <adapter-api/util/Exception.h>
#include "IPollManager.h"

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

        void PollHandler::add_necessary_byte_polls(std::shared_ptr<IPollManager> poll_manager, unsigned int allowed_discontinuities)
        {
            // Add ReadRegistersRequest
            if (!this->holding_registers.empty())
            {
                uint16_t begin = boost::numeric_cast<uint16_t>(this->holding_registers.begin()->first);
                uint16_t end = begin;
                for (auto& reg : this->holding_registers)
                {
                    if (reg.first > end + allowed_discontinuities + 1 || // There is a discontinuity
                        reg.first - begin + 1 > ::modbus::ReadHoldingRegistersRequest::max_registers) // 
                    {
                        // Add the request
                        poll_manager->add(::modbus::ReadHoldingRegistersRequest{ begin, boost::numeric_cast<uint16_t>(end - begin + 1) });
                        begin = boost::numeric_cast<uint16_t>(reg.first);
                        end = boost::numeric_cast<uint16_t>(reg.first);
                    }
                    else
                    {
                        // No discontinuity, keep adding
                        end = reg.first;
                    }
                }

                // Add last poll
                poll_manager->add(::modbus::ReadHoldingRegistersRequest{ begin, boost::numeric_cast<uint16_t>(end - begin + 1) });
            }
        }

        void PollHandler::add_necessary_bit_polls(std::shared_ptr<IPollManager> poll_manager, unsigned int allowed_discontinuities)
        {
            // TODO: Implement this for coils and discrete inputs
        }
    }

}


