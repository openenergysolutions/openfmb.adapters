
#include "ConsoleAdapter.h"

#include "adapter-api/util/YAMLUtil.h"

#include <iostream>

#include "adapter-api/ProfileNames.h"

namespace openfmb
{

    template <class Proto>
    class LogPrinter final : public ISubscriber<Proto>
    {
        const logger_t logger;

    public:

        LogPrinter(const logger_t& logger) : logger(logger) {}


        virtual void receive(const Proto& message) override
        {
            logger->info(message.DebugString());
        }

    };

    ConsoleAdapter::ConsoleAdapter(const YAML::Node& node, const logger_t& logger, IProtoSubscribers& subscribers)
    {
        const auto profiles = yaml::require(node, "profiles");

        if(yaml::require(profiles, profiles::resource_reading).as<bool>())
        {
            subscribers.subscribe(std::make_shared<LogPrinter<ResourceReadingProfile>>(logger));
        }
    }

}


