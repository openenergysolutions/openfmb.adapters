
#ifndef OPENFMB_ADAPTER_DNP3_ICONFIGURATIONBUILDER_H
#define OPENFMB_ADAPTER_DNP3_ICONFIGURATIONBUILDER_H

#include <functional>

#include <opendnp3/app/MeasurementTypes.h>

namespace adapter
{
    namespace dnp3
    {
        class IConfigurationBuilder
        {
        public:

            template <class T>
            using meas_handler_t = std::function<void (const T&)>;

            using action_t = std::function<void ()>;

            virtual ~IConfigurationBuilder() = default;

            virtual void add_start_action(const action_t& action) = 0;

            virtual void add_measurement_handler(const meas_handler_t<opendnp3::Binary>& handler, uint16_t index) = 0;

            virtual void add_measurement_handler(const meas_handler_t<opendnp3::Analog>& handler, uint16_t index) = 0;

            virtual void add_measurement_handler(const meas_handler_t<opendnp3::Counter>& handler, uint16_t index) = 0;

            virtual void add_end_action(const action_t& action) = 0;

        };
    }
}

#endif
