
#include "Plugin.h"

#include "adapter-api/util/YAMLUtil.h"
#include "adapter-api/Profile.h"

namespace adapter
{
    namespace log
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

        Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            this->handle_all_profiles(node, logger, bus);
        }

        void Plugin::handle_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            bus.subscribe(
                std::make_shared<LogPrinter<resourcemodule::ResourceReadingProfile>>(logger)
            );
        }

        void Plugin::handle_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            bus.subscribe(
                std::make_shared<LogPrinter<switchmodule::SwitchReadingProfile>>(logger)
            );
        }

        void Plugin::handle_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            bus.subscribe(
                std::make_shared<LogPrinter<switchmodule::SwitchStatusProfile>>(logger)
            );
        }
    }

}


