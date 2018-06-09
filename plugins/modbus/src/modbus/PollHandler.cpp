
#include "PollHandler.h"

#include <boost/numeric/conversion/cast.hpp>
#include <adapter-api/util/Exception.h>
#include "IPollManager.h"

namespace adapter
{
    namespace modbus
    {
        void PollHandler::add_begin_action(logger_action_t fun)
        {
            this->begin_actions.push_back(std::move(fun));
        }

        void PollHandler::add_holding_register(uint16_t index, std::shared_ptr<IRegister> reg)
        {
            holding_registers[index].push_back(reg);
        }

        void PollHandler::add_end_action(logger_action_t fun)
        {
            this->end_actions.push_back(std::move(fun));
        }

        void PollHandler::begin(Logger& logger)
        {
            for(auto& action : this->begin_actions)
            {
                action(logger);
            }
        }

        void PollHandler::apply(const ::modbus::ReadHoldingRegistersResponse& response)
        {
            for(auto& reg : response.values)
            {
                const auto entry = this->holding_registers.find(reg.address);
                if(entry != this->holding_registers.end())
                {
                    for(const auto& handler : entry->second)
                    {
                        handler->set(reg.value);
                    }
                }
            }
        }

        void PollHandler::end(Logger& logger)
        {
            for(auto& action : this->end_actions)
            {
                action(logger);
            }
        }

        size_t PollHandler::num_mapped_values() const
        {
            return this->holding_registers.size();
        }

        void PollHandler::add_necessary_byte_polls(const std::shared_ptr<IPollManager>& poll_manager, uint16_t allowed_discontinuities)
        {
            // nothing to configure
            if (this->holding_registers.empty()) return;

            auto begin = this->holding_registers.begin()->first;
            auto end = begin;
            for (auto& reg : this->holding_registers)
            {
                if (reg.first > end + allowed_discontinuities + 1 || // There is a discontinuity
                        reg.first - begin + 1 > ::modbus::ReadHoldingRegistersRequest::max_registers) //
                {
                    // Add the request
                    poll_manager->add(::modbus::ReadHoldingRegistersRequest{ begin, boost::numeric_cast<uint16_t>(end - begin + 1) });
                    begin = reg.first;
                    end = reg.first;
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

}


