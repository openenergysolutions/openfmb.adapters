
#include "nats/PluginFactory.h"

#include "Plugin.h"

#include "ConfigStrings.h"

#include "adapter-api/ProfileMode.h"
#include "adapter-api/ConfigStrings.h"

namespace adapter
{
    namespace nats
    {
        void PluginFactory::write_default_config(YAML::Emitter& out) const
        {
            out << YAML::Key << keys::max_queued_messages << 100;
            out << YAML::Comment("how many messages to buffer before discarding the oldest");
            out << YAML::Key << keys::connect_url << "nats://localhost:4222";
            out << YAML::Key << keys::connect_retry_seconds << 5;
            out << YAML::Key << ::adapter::keys::profiles;
            out << YAML::BeginMap;

            ProfileRegistry::foreach_descriptor([&](google::protobuf::Descriptor const* descriptor)
            {
                out << YAML::Key << descriptor->name() << ::adapter::ProfileModeMeta::none;
            });

            out << YAML::EndMap;

        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
        {
            return std::make_unique<Plugin>(
                       logger,
                       node,
                       std::move(bus)
                   );
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            throw Exception("NATS does not support writing session configuration");
        }
    }
}
