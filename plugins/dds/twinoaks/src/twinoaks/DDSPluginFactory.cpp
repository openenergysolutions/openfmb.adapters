#include <adapter-api/ConfigStrings.h>
#include "DDSPluginFactory.h"

#include "DDSPlugin.h"
#include "ConfigKeys.h"
#include "adapter-api/ProfileMode.h"

namespace adapter
{

    void DDSPluginFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::domain_id << 0;

        out << YAML::Newline << YAML::Comment("profiles that can be read (subscribe) or written (publish) to the DDS bus - values can 'publish', 'subscribe', or 'none'");
        out << YAML::Key << keys::profiles;
        out << YAML::BeginMap;
        out << YAML::Key << resourcemodule::ResourceReadingProfile::descriptor()->name() << YAML::Value << "none"; // TODO
        out << YAML::EndMap;
    }

    std::unique_ptr<IPlugin> DDSPluginFactory::create(const YAML::Node& node, const Logger& logger, message_bus_t bus)
    {
        return std::make_unique<DDSPlugin>(node, logger, bus);
    }

}




