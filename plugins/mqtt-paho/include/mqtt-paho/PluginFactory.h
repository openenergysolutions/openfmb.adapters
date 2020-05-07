
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

        schema::Object get_plugin_schema() const override;

        std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
    };
}
}

#endif
