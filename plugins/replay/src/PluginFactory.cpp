
#include "replay/PluginFactory.h"

#include "Plugin.h"
#include "ConfigStrings.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{
    namespace replay
    {
        void PluginFactory::write_default_config(YAML::Emitter& emitter) const
        {
            emitter << YAML::Key << keys::file << YAML::Value << "capture.txt";
        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(node, logger, bus);
        }

        void PluginFactory::write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const
        {
            throw Exception("Capture plugin does not support writing session configuration");
        }
    }
}


