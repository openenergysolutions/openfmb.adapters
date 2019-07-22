
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
                auto handler = map.find(pair.index);
                if (handler != map.end()) {
                    handler->second(pair.value);
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

        void SOEHandler::begin_fragment(const opendnp3::ResponseInfo& info)
        {
            for (auto& action : this->start_handlers)
                action();
        }

        void SOEHandler::end_fragment(const opendnp3::ResponseInfo& info)
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
            if (this->binary_handlers.find(index) != this->binary_handlers.end()) {
                throw api::Exception("Binary index already mapped: ", index);
            }
            this->binary_handlers[index] = handler;
        }

        void
        SOEHandler::add_measurement_handler(const IPublishConfigBuilder::meas_handler_t<opendnp3::Analog>& handler,
                                            uint16_t index)
        {
            if (this->analog_handlers.find(index) != this->analog_handlers.end()) {
                throw api::Exception("Analog index already mapped: ", index);
            }
            this->analog_handlers[index] = handler;
        }

        void
        SOEHandler::add_measurement_handler(const IPublishConfigBuilder::meas_handler_t<opendnp3::Counter>& handler,
                                            uint16_t index)
        {
            if (this->counter_handlers.find(index) != this->counter_handlers.end()) {
                throw api::Exception("Counter index already mapped: ", index);
            }
            this->counter_handlers[index] = handler;
        }

        void SOEHandler::add_end_action(const IPublishConfigBuilder::action_t& action)
        {
            this->end_handlers.push_back(action);
        }
    }
}
}