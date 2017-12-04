
#include "DNP3MasterFactory.h"

#include "DNP3MasterAdapter.h"

namespace openfmb {

std::unique_ptr<IAdapter> DNP3MasterFactory::create(YAML::Node& node, IProtoSubscribers& subscribers) const
{
    return std::make_unique<DNP3MasterAdapter>(node, subscribers);
}

}