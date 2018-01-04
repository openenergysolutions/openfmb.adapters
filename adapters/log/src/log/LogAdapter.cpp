
#include "LogAdapter.h"

#include "adapter-api/util/YAMLUtil.h"

#include <iostream>

namespace openfmb
{

    template <class Proto>
    class LogPrinter final : public ISubscriber<Proto>
    {
        Logger logger;

    public:

        LogPrinter(const Logger& logger) : logger(logger) {}


        virtual void receive(const Proto& message) override
        {
            logger.info("publishing {}\n {}", Proto::descriptor()->name(), message.DebugString());
        }

    };

    LogAdapter::LogAdapter(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        const auto profiles = yaml::require(node, "profiles");

        if(yaml::require(profiles, resourcemodule::ResourceReadingProfile::descriptor()->name()).as<bool>())
        {
            subscribers.subscribe(std::make_shared<LogPrinter<resourcemodule::ResourceReadingProfile>>(logger));
        }
    }

}


