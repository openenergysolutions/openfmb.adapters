// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "SOEHandler.h"

#include "adapter-api/Exception.h"

namespace adapter {
namespace dnp3 {
    namespace master {

        template <class T>
        void
        process_any(const opendnp3::ICollection<opendnp3::Indexed<T>>& values, SOEHandler::handler_map<T>& map)
        {
            auto process = [&](const opendnp3::Indexed<T>& pair) {
                auto it = map.find(pair.index);
                if (it != map.end()) {
                    for(auto& handler : it->second)
                    {
                        handler(pair.value);
                    }
                }
            };

            values.ForeachItem(process);
        }

        void SOEHandler::Process(const opendnp3::HeaderInfo& info,
                                 const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Binary>>& values)
        {
            process_any(values, this->binary_handlers);
        }

        void SOEHandler::Process(const opendnp3::HeaderInfo& info,
                                 const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Analog>>& values)
        {
            process_any(values, this->analog_handlers);
        }

        void SOEHandler::Process(const opendnp3::HeaderInfo& info,
                                 const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values)
        {
            process_any(values, this->counter_handlers);
        }

        void SOEHandler::BeginFragment(const opendnp3::ResponseInfo& info)
        {
            if(info.fir)
            {
                for (auto& action : this->start_handlers)
                    action();
            }
        }

        void SOEHandler::EndFragment(const opendnp3::ResponseInfo& info)
        {
            if(info.fin)
            {
                for (auto& action : this->end_handlers)
                    action();
            }
        }

        void SOEHandler::add_start_action(const IPublishConfigBuilder::action_t& action)
        {
            this->start_handlers.push_back(action);
        }

        void
        SOEHandler::add_measurement_handler(const IPublishConfigBuilder::meas_handler_t<opendnp3::Binary>& handler,
                                            uint16_t index)
        {
            auto it = this->binary_handlers.find(index);
            if(it != this->binary_handlers.end())
            {
                it->second.emplace_back(handler);
            }
            else
            {
                this->binary_handlers[index] = { handler };
            }
        }

        void
        SOEHandler::add_measurement_handler(const IPublishConfigBuilder::meas_handler_t<opendnp3::Analog>& handler,
                                            uint16_t index)
        {
            auto it = this->analog_handlers.find(index);
            if(it != this->analog_handlers.end())
            {
                it->second.emplace_back(handler);
            }
            else
            {
                this->analog_handlers[index] = { handler };
            }
        }

        void
        SOEHandler::add_measurement_handler(const IPublishConfigBuilder::meas_handler_t<opendnp3::Counter>& handler,
                                            uint16_t index)
        {
            auto it = this->counter_handlers.find(index);
            if(it != this->counter_handlers.end())
            {
                it->second.emplace_back(handler);
            }
            else
            {
                this->counter_handlers[index] = { handler };
            }
        }

        void SOEHandler::add_end_action(const IPublishConfigBuilder::action_t& action)
        {
            this->end_handlers.push_back(action);
        }
    }
}
}