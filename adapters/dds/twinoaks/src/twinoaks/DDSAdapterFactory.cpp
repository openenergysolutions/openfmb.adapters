#include "DDSAdapterFactory.h"

#include "DDSAdapter.h"
#include "ConfigKeys.h"

namespace adapter
{

    void DDSAdapterFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::domain_id << 0;
        out << YAML::Key << keys::publish;
        out << YAML::BeginMap;
        out << YAML::Key << resourcemodule::ResourceReadingProfile::descriptor()->name() << false;
        out << YAML::EndMap;
    }

    std::unique_ptr<IAdapter> DDSAdapterFactory::create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers)
    {
        return std::make_unique<DDSAdapter>(node, subscribers);
    }

}




