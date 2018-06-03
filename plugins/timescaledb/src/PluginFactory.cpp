#include "timescaledb/PluginFactory.h"

#include "adapter-api/util/Exception.h"
#include "ConfigStrings.h"
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
    return "saves all the published messages to a TimescaleDB";
};

void PluginFactory::write_default_config(YAML::Emitter& emitter) const
{
    emitter << YAML::Key << keys::database_url << YAML::Value << "postgresql://user:password@localhost:5432/dbname";
    emitter << YAML::Key << keys::table_name << YAML::Value << "data";
    emitter << YAML::Key << keys::max_queued_messages << 100 << YAML::Comment("how many messages to buffer before discarding the oldest");
    emitter << YAML::Key << keys::connect_retry_seconds << 5 << YAML::Comment("time to wait between to connection attempts");;
}

void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
{
    throw Exception("timescaledb adapter does not support writing session configuration");
}

std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
{
    return std::make_unique<Plugin>(node, logger, *bus);
}

}
}
