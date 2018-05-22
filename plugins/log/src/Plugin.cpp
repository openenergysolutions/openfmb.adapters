
#include "Plugin.h"

#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/Profile.h>

#include "ConfigKeys.h"
#include "LogArchiveVisitor.h"
#include "TagFilter.h"

#include <set>

namespace adapter
{
    namespace log
    {
        template <class Proto>
        class LogSubscriber final : public ISubscriber<Proto>
        {
            Logger logger;
            const bool log_debug_string;
            const std::shared_ptr<const ITagFilter> filter;

        public:

            LogSubscriber(Logger logger, bool log_debug_string, std::shared_ptr<const ITagFilter> filter) :
                logger(std::move(logger)),
                log_debug_string(log_debug_string),
                filter(std::move(filter))
            {}

            virtual void receive(const Proto& message) override
            {
                if(log_debug_string)
                {
                    logger.info("published {}\n {}", Proto::descriptor()->name(), message.DebugString());
                }

                if(!this->filter->is_empty())
                {
                    LogArchiveVisitor::log<Proto>(message, this->logger, *(this->filter));
                }
            }

        };

        Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            this->read_all_profiles(node, logger, bus);
        }

        std::shared_ptr<const ITagFilter> build_tag_filter(const YAML::Node& node)
        {

            const auto filter_entries = yaml::require(node, keys::filters);

            auto filter = TagFilter::create();


            const auto add_entry = [&](const YAML::Node & node)
            {
                filter->add(
                    yaml::require_string(node, keys::tag),
                    yaml::require_string(node, ::adapter::keys::mRID)
                );
            };

            yaml::foreach(filter_entries, add_entry);


            return filter;
        }

        template <class T>
        void subscribe_any(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            bus.subscribe(
                std::make_shared<LogSubscriber<T>>(
                    logger,
                    yaml::require(node, keys::log_debug_string).as<bool>(),
                    build_tag_filter(node)
                )
            );
        }

        void Plugin::read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            subscribe_any<resourcemodule::ResourceReadingProfile>(node, logger, bus);
        }

        void Plugin::read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            subscribe_any<switchmodule::SwitchReadingProfile>(node, logger, bus);
        }

        void Plugin::read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            subscribe_any<switchmodule::SwitchStatusProfile>(node, logger, bus);
        }
    }

}


