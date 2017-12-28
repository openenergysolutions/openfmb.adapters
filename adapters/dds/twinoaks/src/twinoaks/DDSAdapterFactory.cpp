#include "DDSAdapterFactory.h"

#include "DDSAdapter.h"

namespace openfmb
{

    void DDSAdapterFactory::write_default_config(YAML::Emitter& emitter) const
    {
        // TODO
    }

    std::unique_ptr<IAdapter> DDSAdapterFactory::create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<DDSAdapter>(node, subscribers);
    }

}




