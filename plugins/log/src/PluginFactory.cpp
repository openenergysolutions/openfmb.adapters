
#include "log/PluginFactory.h"

#include "Plugin.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{
    namespace log
    {
        void PluginFactory::write_default_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            if(!profiles.empty())
            {
                throw Exception("Log config generation does not accept a profile list");
            }
        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(node, logger, bus);
        }
    }

}


