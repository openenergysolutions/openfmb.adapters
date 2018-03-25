
#include "modbus/PluginFactory.h"

#include "Plugin.h"
#include "ConfigWriteVisitor.h"

#include "adapter-api/helpers/generated/MessageVisitors.h"

namespace adapter
{
    namespace modbus
    {
        void write_default_poll(YAML::Emitter& out, uint16_t start, uint16_t count)
        {
            out << YAML::BeginMap;
            out << YAML::Key << keys::type << YAML::Value << "read_holding_registers";
            out << YAML::Key << keys::start << YAML::Value << start;
            out << YAML::Key << keys::count << YAML::Value << count;
            out << YAML::EndMap;
        }

        void write_default_session(const std::string& name, YAML::Emitter& out)
        {
            out << YAML::BeginMap;

            out << YAML::Key << keys::name << YAML::Value << name;
            out << YAML::Comment("name for logging purposes");
            out << YAML::Key << keys::remote_ip << YAML::Value << "127.0.0.1";
            out << YAML::Key << keys::port << YAML::Value << 20000;
            out << YAML::Key << keys::unit_identifier << YAML::Value << 1 << YAML::Comment("aka 'slave address'");

            out << YAML::Key << keys::profile << YAML::Value << resourcemodule::ResourceReadingProfile::descriptor()->name();
            out << YAML::Key << keys::period_ms << YAML::Value << 1000 << YAML::Comment("perform polls once per second");

            out << YAML::Key << keys::polls;
            out << YAML::BeginSeq;
            write_default_poll(out, 0, 10);
            write_default_poll(out, 50, 5);
            out << YAML::EndSeq;

            out << YAML::Key << keys::mapping;
            out << YAML::BeginMap;
            ConfigWriteVisitor<resourcemodule::ResourceReadingProfile> visitor(out);
            visit(visitor);
            out << YAML::EndMap;

            out << YAML::EndMap;
        }

        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::thread_pool_size << YAML::Value << 1;
            out << YAML::Comment("defaults to std::thread::hardware_concurrency() if <= 0");

            out << YAML::Key << keys::sessions;
            out << YAML::BeginSeq;
            write_default_session("session1", out);
            out << YAML::EndSeq;
        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(node, logger, bus);
        }
    }
}
