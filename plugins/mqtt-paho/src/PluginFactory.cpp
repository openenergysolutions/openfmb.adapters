
#include "mqtt-paho/PluginFactory.h"

#include "Plugin.h"

namespace adapter {
namespace mqtt {

    void PluginFactory::write_default_config(YAML::Emitter& out) const
    {
        throw api::Exception("not implemented");
    }

    std::unique_ptr<api::IPlugin> PluginFactory::create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        return std::make_unique<Plugin>(logger, node, std::move(bus));
    }

    void PluginFactory::write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const
    {
        throw api::Exception("MQTT does not support writing session configuration");
    }
}
}
