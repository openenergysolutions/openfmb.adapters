
#include "LogPluginFactory.h"

#include "LogPlugin.h"

#include "ConfigKeys.h"

#include <adapter-api/util/Exception.h>

namespace adapter
{
    void LogPluginFactory::write_default_config(YAML::Emitter& out, const profile_vec_t& profiles) const
    {
        if(!profiles.empty())
        {
            throw Exception("Log config generation does not accept a profile list");
        }

        out << YAML::Key << keys::profiles;
        out << YAML::BeginMap;

        ProfileMeta::foreach([&](Profile profile)
    {
        out << YAML::Key << ProfileMeta::to_string(profile) << YAML::Value << true;
        });

        out << YAML::EndMap;
    }

    std::unique_ptr<IPlugin> LogPluginFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        return std::make_unique<LogPlugin>(node, logger, bus);
    }

}


