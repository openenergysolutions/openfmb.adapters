
#include "Plugin.h"

#include <adapter-api/util/YAMLUtil.h>

#include "ConfigKeys.h"
#include "DebugStringLogSubscriber.h"
#include "FilteredValueLogSubscriber.h"

#include <set>

namespace adapter {
namespace log {
    template <class T>
    struct DebugSubscriberHandler {
        static void handle(const Logger& logger, IMessageBus& bus)
        {
            bus.subscribe(
                std::make_shared<DebugStringLogSubscriptionHandler<T>>(logger));
        }
    };

    template <class T>
    struct FilteredSubscriberHandler {
        static void handle(const YAML::Node& config, const Logger& logger, IMessageBus& bus)
        {
            bus.subscribe(
                std::make_shared<FilteredValueLogSubscriptionHandler<T>>(logger, config));
        }
    };

    Plugin::Plugin(const YAML::Node& node, const Logger& logger, message_bus_t bus)
    {
        if (yaml::require(node, keys::log_debug_string).as<bool>()) {
            ProfileRegistry::handle_all<DebugSubscriberHandler>(logger, *bus);
        }

        const auto add_filter = [&](const YAML::Node& config) {
            ProfileRegistry::handle_by_name<FilteredSubscriberHandler>(
                yaml::require_string(config, ::adapter::keys::profile),
                config,
                logger,
                *bus);
        };

        yaml::foreach (yaml::require(node, keys::filters), add_filter);
    }
}
}
