
#ifndef OPENFMB_ADAPTER_DNP3_SOEHANDLER_H
#define OPENFMB_ADAPTER_DNP3_SOEHANDLER_H

#include <opendnp3/master/ISOEHandler.h>

#include "adapter-api/IMessageBus.h"

#include "IConfigurationBuilder.h"


#include <map>

namespace adapter
{
    namespace dnp3
    {
        class SOEHandler final : public opendnp3::ISOEHandler, public IConfigurationBuilder
        {

        public:

            template <class T>
            using handler_map = std::map<uint16_t, std::function<void (const T&)>>;


            SOEHandler() = default;

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Binary>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::DoubleBitBinary>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Analog>>& values) override;

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::Counter>>& values) override;

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::FrozenCounter>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryOutputStatus>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogOutputStatus>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::OctetString>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::TimeAndInterval>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::BinaryCommandEvent>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::AnalogCommandEvent>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::Indexed<opendnp3::SecurityStat>>& values) override {}

            virtual void Process(const opendnp3::HeaderInfo& info, const opendnp3::ICollection<opendnp3::DNPTime>& values) override {}


            /// ---- implement IConfigurationBuilder -----

            void add_start_action(const action_t& action) override;

            void add_measurement_handler(const meas_handler_t <opendnp3::Analog>& handler, uint16_t index) override;

            void add_measurement_handler(const meas_handler_t <opendnp3::Counter>& handler, uint16_t index) override;

            void add_end_action(const action_t& action) override;

        private:

            virtual void Start() override;
            virtual void End() override;

            std::vector<std::function<void ()>> start_handlers;

            handler_map<opendnp3::Analog> analog_handlers;
            handler_map<opendnp3::Counter> counter_handlers;

            std::vector<std::function<void ()>> end_handlers;
        };

    }

}

#endif
