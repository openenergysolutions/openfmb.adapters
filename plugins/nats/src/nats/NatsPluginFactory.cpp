
#include "NatsPluginFactory.h"

#include "NatsPlugin.h"

#include "ConfigKeys.h"

namespace adapter
{
    void NatsPluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::max_queued_messages << 100;
        out << YAML::Comment("how many messages to buffer before discarding the oldest");
        out << YAML::Key << keys::connect_url << "nats://localhost:4222";
        out << YAML::Key << keys::connect_retry_seconds << 5;
        out << YAML::Key << keys::publish;
        out << YAML::BeginMap;
        out << YAML::Key << resourcemodule::ResourceReadingProfile::descriptor()->name() << true;
        out << YAML::EndMap;

    }

    std::unique_ptr<IPlugin> NatsPluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        return std::make_unique<NatsPlugin>(
                   logger,
                   node,
                   bus
               );
    }

}
