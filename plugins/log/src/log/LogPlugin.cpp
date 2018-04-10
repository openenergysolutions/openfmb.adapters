
#include "LogPlugin.h"

#include "adapter-api/util/YAMLUtil.h"
#include "adapter-api/Profile.h"

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

    LogPlugin::LogPlugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        auto read = [&](Profile profile)
        {
            switch(profile)
            {
            case(Profile::resource_reading):
                bus.subscribe(
                    std::make_shared<LogPrinter<resourcemodule::ResourceReadingProfile>>(logger)
                );
                break;
            case(Profile::switch_reading):
                bus.subscribe(
                    std::make_shared<LogPrinter<switchmodule::SwitchReadingProfile>>(logger)
                );
                break;
            case(Profile::switch_status):
                bus.subscribe(
                    std::make_shared<LogPrinter<switchmodule::SwitchStatusProfile>>(logger)
                );
                break;
            default:
                throw Exception("Unsupported log profile: ", ProfileMeta::to_string(profile));
            }
        };


        ProfileMeta::foreach(read);
    }

}


