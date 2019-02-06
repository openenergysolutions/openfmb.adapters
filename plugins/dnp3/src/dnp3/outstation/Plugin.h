#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_PLUGIN_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_PLUGIN_H

#include "dnp3/PluginBase.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        class Plugin final : public PluginBase {

        public:
            Plugin() = delete;

            Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

            virtual std::string name() const override
            {
                return "dnp3-outstation";
            }

            virtual void start() override;

        private:
        };
    }
}
}

#endif
