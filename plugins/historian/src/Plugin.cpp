#include "Plugin.h"

#include "adapter-api/Profile.h"
#include "adapter-api/util/YAMLUtil.h"

namespace adapter
{
namespace historian
{

Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{
    this->read_all_profiles(node, logger, bus);
}

std::string Plugin::name() const
{
    return "historian";
}

void Plugin::start()
{

}

void Plugin::read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{

}

void Plugin::read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{

}

void Plugin::read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{

}

}
}
