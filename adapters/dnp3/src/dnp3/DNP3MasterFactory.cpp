
#include "DNP3MasterFactory.h"

#include "DNP3MasterAdapter.h"

#include "LogAdapter.h"

namespace openfmb
{

    DNP3MasterFactory::DNP3MasterFactory()
    {

    }

    std::unique_ptr<IAdapter> DNP3MasterFactory::create(const YAML::Node& node, const logger_t& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<DNP3MasterAdapter>(this->get_manager(logger), node, subscribers);
    }

    std::shared_ptr<asiodnp3::DNP3Manager> DNP3MasterFactory::get_manager(const logger_t& logger)
    {
        if(!manager)
        {
            manager = std::make_shared<asiodnp3::DNP3Manager>(
                          std::thread::hardware_concurrency(),
                          std::make_shared<LogAdapter>(logger)
                      );
        }

        return manager;
    }

}