
#include "DNP3Factory.h"

namespace openfmb {

std::unique_ptr<IAdapter> DNP3Factory::create(YAML::Node& node, IProtoSubscribers& subscribers) const
{
    return nullptr;
}

}