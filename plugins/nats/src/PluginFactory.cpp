
#include "nats/PluginFactory.h"

#include "Plugin.h"

#include "ConfigStrings.h"

#include "adapter-api/ProfileMode.h"

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
            out << YAML::Key << resourcemodule::ResourceReadingProfile::descriptor()->name() << ::adapter::keys::none;
            out << YAML::EndMap;

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
