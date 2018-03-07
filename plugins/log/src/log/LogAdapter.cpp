
#include "LogAdapter.h"

#include "adapter-api/util/YAMLUtil.h"

namespace adapter
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

    LogAdapter::LogAdapter(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        const auto profiles = yaml::require(node, "profiles");

        if(yaml::require(profiles, resourcemodule::ResourceReadingProfile::descriptor()->name()).as<bool>())
        {
            bus.subscribe(
                std::make_shared<LogPrinter<resourcemodule::ResourceReadingProfile>>(logger)
            );
        }
    }

}


