
#include "DNP3Factory.h"

#include "DNP3Adapter.h"

namespace openfmb
{
    std::unique_ptr<IAdapter> DNP3Factory::create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<DNP3Adapter>(
                   logger,
                   node,
                   subscribers
               );
    }

}