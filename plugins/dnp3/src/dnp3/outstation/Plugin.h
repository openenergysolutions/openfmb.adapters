#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_PLUGIN_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_PLUGIN_H

#include "dnp3/PluginBase.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        class Plugin final : public PluginBase {

            using channel_t = std::shared_ptr<asiodnp3::IChannel>;
            using outstation_t = std::shared_ptr<asiodnp3::IOutstation>;

        public:
            Plugin() = delete;

            Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

            virtual std::string name() const override
            {
                return "dnp3-outstation";
            }

            virtual void start() override;

        private:
            void add_outstation(const YAML::Node& node, api::message_bus_t bus);

            std::vector<outstation_t> outstations;

            // --- helper methods for creating resources ---

            channel_t create_channel(const YAML::Node& node);
        };
    }
}
}

#endif
