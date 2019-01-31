
#ifndef OPENFMB_ADAPTER_DNP3_MASTER_SOEHANDLER_H
#define OPENFMB_ADAPTER_DNP3_MASTER_SOEHANDLER_H

#include <opendnp3/master/ISOEHandler.h>

#include "adapter-api/IMessageBus.h"

#include "IPublishConfigBuilder.h"

#include <map>

namespace adapter {
namespace dnp3 {
    namespace master {
        class SOEHandler final : public opendnp3::ISOEHandler, public IPublishConfigBuilder {

        public:
            template <class T>
            using handler_map = std::map<uint16_t, std::function<void(const T&)>>;

            SOEHandler() = default;

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Binary>>& values) override;

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::DoubleBitBinary>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Analog>>& values) override;

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values) override;

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::FrozenCounter>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryOutputStatus>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogOutputStatus>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::OctetString>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::TimeAndInterval>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryCommandEvent>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogCommandEvent>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::Indexed<opendnp3::SecurityStat>>& values) override {}

            void Process(const opendnp3::HeaderInfo& info,
                         const opendnp3::ICollection<opendnp3::DNPTime>& values) override {}

            /// ---- implement IPublishConfigBuilder -----

            void add_start_action(const action_t& action) override;

            void add_measurement_handler(const meas_handler_t<opendnp3::Binary>& handler, uint16_t index) override;

            void add_measurement_handler(const meas_handler_t<opendnp3::Analog>& handler, uint16_t index) override;

            void
            add_measurement_handler(const meas_handler_t<opendnp3::Counter>& handler, uint16_t index) override;

            void add_end_action(const action_t& action) override;

            inline size_t num_binary() const
            {
                return this->binary_handlers.size();
            }

            inline size_t num_analog() const
            {
                return this->analog_handlers.size();
            }

            inline size_t num_counter() const
            {
                return this->counter_handlers.size();
            }

            inline bool empty() const
            {
                return this->binary_handlers.empty() && this->analog_handlers.empty() && this->counter_handlers.empty();
            }

        private:
            void Start() override;

            void End() override;

            std::vector<std::function<void()>> start_handlers;

            handler_map<opendnp3::Binary> binary_handlers;
            handler_map<opendnp3::Analog> analog_handlers;
            handler_map<opendnp3::Counter> counter_handlers;

            std::vector<std::function<void()>> end_handlers;
        };
    }
}
}

#endif
