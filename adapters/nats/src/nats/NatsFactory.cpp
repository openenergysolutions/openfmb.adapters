
#include "NatsFactory.h"

#include "NatsAdapter.h"

namespace openfmb
{
    std::unique_ptr<IAdapter> NatsFactory::create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<NatsAdapter>(
                   logger,
                   node,
                   subscribers
               );
    }

}