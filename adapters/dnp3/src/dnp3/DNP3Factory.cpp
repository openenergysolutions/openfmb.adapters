
#include "DNP3Factory.h"

#include "DNP3Adapter.h"

namespace openfmb {

std::unique_ptr<IAdapter> DNP3Factory::create(YAML::Node& node, IProtoSubscribers& subscribers) const
{
    return std::make_unique<DNP3Adapter>();
}

}