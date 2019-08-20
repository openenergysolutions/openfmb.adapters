
#ifndef OPENFMB_ADAPTER_DNP3_MASTER_CONTROL_H
#define OPENFMB_ADAPTER_DNP3_MASTER_CONTROL_H

#include <opendnp3/app/ControlRelayOutputBlock.h>
#include <yaml-cpp/yaml.h>

namespace adapter {
namespace dnp3 {
    namespace master {

        /**
             * Control is a index + CROB w/ static helper methods for YAML (de)serialization
             */
        struct Control {
            uint16_t index;
            opendnp3::ControlRelayOutputBlock crob;

            Control(uint16_t index, const opendnp3::ControlRelayOutputBlock& crob);

            static Control read(const YAML::Node& node);

            static void write(const Control& control, YAML::Emitter& out);
        };
    }
}
}

#endif
