
#include "NatsFactory.h"

#include "NatsAdapter.h"

#include "ConfigKeys.h"

namespace openfmb
{
    void NatsFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::max_queued_messages << 100;
        out << YAML::Comment("how many messages to buffer before discarding the oldest");
        out << YAML::Key << keys::connect_url << "nats://localhost:4222";
        out << YAML::Key << keys::connect_retry_seconds << 5;
        out << YAML::Key << keys::publish;
        out << YAML::BeginMap;
        out << YAML::Key << ResourceReadingProfile::descriptor()->name() << true;
        out << YAML::EndMap;

    }

    std::unique_ptr<IAdapter> NatsFactory::create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<NatsAdapter>(
                   logger,
                   node,
                   subscribers
               );
    }

}