
#include "capture/PluginFactory.h"

#include "Plugin.h"
#include "ConfigStrings.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{
    namespace capture
    {
        void PluginFactory::write_default_config(YAML::Emitter& emitter, const profile_vec_t& profiles) const
        {
            if(!profiles.empty())
            {
                throw Exception("Capture plugin does not accept profile arguments");
            }

            emitter << YAML::Key << keys::file << YAML::Value << "capture.txt";
        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return std::make_unique<Plugin>(node, logger, bus);
        }
    }
}


