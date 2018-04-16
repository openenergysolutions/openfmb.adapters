
#include "log/PluginFactory.h"

#include "Plugin.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{
    namespace log
    {
        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(node, logger, bus);
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            throw Exception("Log adapter does not support writing session configuration");
        }
    }

}


