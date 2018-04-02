
#include "dnp3/PluginFactory.h"

#include "adapter-api/helpers/generated/MessageVisitors.h"

#include "ConfigWriteVisitor.h"
#include "Plugin.h"


namespace adapter
{
    namespace dnp3
    {
        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
            out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");
            out << YAML::Key << keys::masters;
            out << YAML::BeginSeq;

            out << YAML::BeginMap;
            out << YAML::Key << ::adapter::keys::name << YAML::Value << "device1";
            out << YAML::Comment("This name is pre-pended to each log message");

            out << YAML::Key << keys::channel;
            out << YAML::BeginMap;
            out << YAML::Key << keys::adapter << YAML::Value << "0.0.0.0";
            out << YAML::Comment("Override to use a specific adapter");
            out << YAML::Key << keys::outstation_ip << YAML::Value << "127.0.0.1";
            out << YAML::Key << keys::port << YAML::Value << 20000;
            out << YAML::EndMap;

            out << YAML::Key << "protocol";
            out << YAML::BeginMap;
            out << YAML::Key << keys::master_address << YAML::Value << 1;
            out << YAML::Key << keys::outstation_address << YAML::Value << 10;
            out << YAML::Key << keys::integrity_poll_ms << YAML::Value << 5000;
            out << YAML::EndMap;

            out << YAML::Key << "profile";
            out << YAML::BeginMap;
            out << YAML::Key << "name" << resourcemodule::ResourceReadingProfile::descriptor()->name();
            {
                ConfigWriteVisitor<resourcemodule::ResourceReadingProfile> visitor(out);
                visit(visitor);
            }
            out << YAML::EndMap;

            out << YAML::EndMap;

            out << YAML::EndSeq;
        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(
                       logger,
                       node,
                       bus
                   );
        }
    }
}
