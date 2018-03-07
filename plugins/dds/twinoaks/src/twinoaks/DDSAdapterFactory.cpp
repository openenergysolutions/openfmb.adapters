#include "DDSAdapterFactory.h"

#include "DDSAdapter.h"
#include "ConfigKeys.h"

namespace adapter
{

    void DDSAdapterFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::domain_id << 0;

        out << YAML::Newline << YAML::Comment("profiles that can be read (subscribe) or written (publish) to the DDS bus - values can 'publish', 'subscribe', or 'none'");
        out << YAML::Key << keys::profiles;
        out << YAML::BeginMap;
        out << YAML::Key << resourcemodule::ResourceReadingProfile::descriptor()->name() << YAML::Value << keys::none;
        out << YAML::EndMap;
    }

    std::unique_ptr<IAdapter> DDSAdapterFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        return std::make_unique<DDSAdapter>(node, logger, bus);
    }

}




