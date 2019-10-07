
#include "PluginBase.h"

#include <adapter-util/util/YAMLUtil.h>

#include "ConfigKeys.h"
#include "DebugStringLogSubscriber.h"
#include "FilteredValueLogSubscriber.h"

#include <set>

namespace adapter {
namespace log {
    template <class T>
    struct DebugSubscriberHandler {
        static void handle(const api::Logger& logger, api::ISubscribeOne<T>& bus)
        {
            bus.subscribe(
                std::make_shared<DebugStringLogSubscriptionHandler<T>>(logger));
        }
    };

    template <class T>
    struct FilteredSubscriberHandler {
        static void handle(const YAML::Node& config, const api::Logger& logger, api::ISubscribeOne<T>& bus)
        {
            bus.subscribe(
                std::make_shared<FilteredValueLogSubscriptionHandler<T>>(logger, config));
        }
    };

    Plugin::Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
    {
        if (util::yaml::require(node, keys::log_debug_string).as<bool>()) {
            api::ProfileRegistry::handle_all<DebugSubscriberHandler>(logger, *bus);
        }

        const auto add_filter = [&](const YAML::Node& config) {
            api::ProfileRegistry::handle_by_name<FilteredSubscriberHandler>(
                util::yaml::require_string(config, util::keys::profile),
                config,
                logger,
                *bus);
        };

        util::yaml::foreach (util::yaml::require(node, keys::filters), add_filter);
    }
}
}
