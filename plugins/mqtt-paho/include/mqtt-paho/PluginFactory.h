
#ifndef OPENFMB_ADAPTER_MQTT_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_MQTT_PLUGINFACTORY_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {
namespace mqtt {

    class PluginFactory final : public api::IPluginFactory {

    public:
        PluginFactory() = default;

        std::string name() const override
        {
            return "mqtt";
        }

        std::string description() const override
        {
            return "publish/subscribe to a MQTT broker";
        };

        void write_default_config(YAML::Emitter& emitter) const override;

        void write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const override;

        std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
    };
}
}

#endif
