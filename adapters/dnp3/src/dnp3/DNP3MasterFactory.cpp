
#include "DNP3MasterFactory.h"

#include "DNP3MasterAdapter.h"

#include <asiodnp3/ConsoleLogger.h>

#include <thread>

namespace openfmb
{

    DNP3MasterFactory::DNP3MasterFactory() :
        manager(
            std::make_shared<asiodnp3::DNP3Manager>(
                std::thread::hardware_concurrency(),
                asiodnp3::ConsoleLogger::Create()
            )
        )
    {

    }

    std::unique_ptr<IAdapter> DNP3MasterFactory::create(const YAML::Node& node, IProtoSubscribers& subscribers) const
    {
        return std::make_unique<DNP3MasterAdapter>(this->manager, node, subscribers);
    }

}