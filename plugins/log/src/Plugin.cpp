
#include "Plugin.h"

#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/Profile.h>
#include <adapter-api/ProfileHelpers.h>

#include "ConfigKeys.h"
#include "LogArchiveVisitor.h"
#include "TagFilter.h"
#include "DebugStringLogSubscriber.h"
#include "FilteredValueLogSubscriber.h"

#include <set>

namespace adapter
{
    namespace log
    {
        template <class T>
        struct DebugSubscriberHandler
        {
            static void handle(const Logger& logger, IMessageBus& bus)
            {
                bus.subscribe(
                    std::make_shared<DebugStringLogSubscriber<T>>(logger)
                );
            }
        };

        template <class T>
        struct FilteredSubscriberHandler
        {
            static void handle(const YAML::Node& config, const Logger& logger, IMessageBus& bus)
            {
                bus.subscribe(
                    std::make_shared<FilteredValueLogSubscriber<T>>(logger, config)
                );
            }
        };


        Plugin::Plugin(const YAML::Node& node, const Logger& logger, message_bus_t bus)
        {
            if(yaml::require(node, keys::log_debug_string).as<bool>())
            {
                profiles::handle_all<DebugSubscriberHandler>(logger, *bus);
            }

            const auto add_filter = [&](const YAML::Node & config)
            {
                profiles::handle_one<FilteredSubscriberHandler>(
                    yaml::require_string(config, ::adapter::keys::profile),
                    config,
                    logger,
                    *bus
                );
            };

            yaml::foreach(yaml::require(node, keys::filters), add_filter);
        }


    }

}


