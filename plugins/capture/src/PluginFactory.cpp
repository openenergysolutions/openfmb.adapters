
#include "capture/PluginFactory.h"

namespace adapter
{
    namespace capture
    {
        void PluginFactory::write_default_config(YAML::Emitter& emitter, const profile_vec_t& profiles) const
        {

        }

        std::unique_ptr<IPlugin> PluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        {
            return nullptr;
        }
    }
}


