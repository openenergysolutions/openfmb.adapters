#include "timescaledb/PluginFactory.h"

#include "adapter-api/util/Exception.h"
#include "Plugin.h"

namespace adapter
{
namespace timescaledb
{

std::string PluginFactory::name() const
{
    return "timescaledb";
}

std::string PluginFactory::description() const
{
    return "saves all the messages published to a TimescaleDB";
};

void PluginFactory::write_default_config(YAML::Emitter& emitter) const
{

}

void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
{
    throw Exception("timescaledb adapter does not support writing session configuration");
}

std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{
    return std::make_unique<Plugin>(node, logger, bus);
}

}
}
