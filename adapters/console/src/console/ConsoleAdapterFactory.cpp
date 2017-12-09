#include "ConsoleAdapterFactory.h"

#include "ConsoleAdapter.h"

namespace openfmb
{

    std::unique_ptr<IAdapter> ConsoleAdapterFactory::create(const YAML::Node& node, IProtoSubscribers& subscribers) const
    {
        return std::make_unique<ConsoleAdapter>(node, subscribers);
    }

}


