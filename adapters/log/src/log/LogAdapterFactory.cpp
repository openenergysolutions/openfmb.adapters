#include "LogAdapterFactory.h"

#include "LogAdapter.h"

#include "ConfigKeys.h"

namespace adapter
{
    void LogAdapterFactory::write_default_config(YAML::Emitter& out) const
    {
        out << YAML::Key << keys::profiles;
        out << YAML::BeginMap;
        out << YAML::Key << resourcemodule::ResourceReadingProfile::descriptor()->name() << true;
        out << YAML::EndMap;
    }

    std::unique_ptr<IAdapter> LogAdapterFactory::create(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    {
        return std::make_unique<LogAdapter>(node, logger, bus);
    }

}


