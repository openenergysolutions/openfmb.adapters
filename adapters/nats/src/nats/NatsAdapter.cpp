
#include "NatsAdapter.h"

namespace openfmb
{

    NatsAdapter::NatsAdapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers) :
        messages(100) // TODO - configure the size of the queue
    {

    }

    void NatsAdapter::start(const std::shared_ptr<IProtoPublishers>& publishers)
    {

    }

}

