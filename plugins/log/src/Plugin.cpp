
#include "Plugin.h"

#include <adapter-api/util/YAMLUtil.h>
#include <adapter-api/Profile.h>

#include "ConfigKeys.h"
#include "LogArchiveVisitor.h"
#include "TagFilter.h"
#include "DebugLoggerProfileHandler.h"
#include "FilteredLoggerProfileHandler.h"

#include <set>

namespace adapter
{
    namespace log
    {

        Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            if(yaml::require(node, keys::log_debug_string).as<bool>())
            {
                DebugLoggerProfileHandler handler(logger, bus);
                handler.handle_all_profiles();
            }

            const auto add_filter = [&](const YAML::Node & config)
            {
                FilteredLoggerProfileHandler handler(config, logger, bus);
                handler.handle_one_profile(yaml::require_string(config, ::adapter::keys::profile));
            };

            yaml::foreach(yaml::require(node, keys::filters), add_filter);
        }


    }

}


