
#include "DNP3Factory.h"

#include "DNP3Adapter.h"

namespace openfmb
{
    void DNP3Factory::write_default_config(YAML::Emitter& emitter) const
    {
        // TODO
    }

    std::unique_ptr<IAdapter> DNP3Factory::create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<DNP3Adapter>(
                   logger,
                   node,
                   subscribers
               );
    }

}