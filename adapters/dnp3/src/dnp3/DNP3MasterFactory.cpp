
#include "DNP3MasterFactory.h"

#include "DNP3MasterAdapter.h"

namespace openfmb
{
    std::unique_ptr<IAdapter> DNP3MasterFactory::create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<DNP3MasterAdapter>(
                   logger,
                   node,
                   subscribers
               );
    }

}