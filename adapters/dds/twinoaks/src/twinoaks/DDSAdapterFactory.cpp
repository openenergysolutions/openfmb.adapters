#include "DDSAdapterFactory.h"

#include "DDSAdapter.h"

namespace openfmb
{

    std::unique_ptr<IAdapter> DDSAdapterFactory::create(const YAML::Node& node, IProtoSubscribers& subscribers) const
    {
        return std::make_unique<DDSAdapter>(node, subscribers);
    }

}




