
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_ICOMMANDCONFIG_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_ICOMMANDCONFIG_H

#include <opendnp3/app/AnalogOutput.h>
#include <opendnp3/app/ControlRelayOutputBlock.h>

#include <adapter-api/IPublisher.h>

namespace adapter {

namespace dnp3 {

    namespace outstation {

        using crob_handler_t = std::function<opendnp3::CommandStatus(api::IPublisher& publisher, const opendnp3::ControlRelayOutputBlock& crob)>;
        using ao_handler_t = std::function<opendnp3::CommandStatus(api::IPublisher& publisher, const opendnp3::AnalogOutputDouble64& value)>; // All set-point types converted to double type

        class ICommandConfig {

        public:
            virtual ~ICommandConfig() = default;

            virtual void add_handler(uint16_t index, const crob_handler_t& handler) = 0;

            virtual void add_handler(uint16_t index, const ao_handler_t& handler) = 0;
        };
    }
}
}

#endif
