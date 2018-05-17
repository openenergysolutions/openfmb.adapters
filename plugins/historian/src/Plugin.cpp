#include "Plugin.h"

#include "BusListener.h"
#include "PQConnection.h"

namespace adapter
{
namespace historian
{

Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    : m_logger{logger},
      m_archiver{std::make_shared<TimescaleDBArchiver>(logger)}
{
    this->read_all_profiles(node, logger, bus);
}

std::string Plugin::name() const
{
    return "historian";
}

void Plugin::start()
{
    m_archiver->start();
}

void Plugin::read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{
    bus.subscribe(std::make_shared<BusListener<resourcemodule::ResourceReadingProfile>>(logger, m_archiver));
}

void Plugin::read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{
    
}

void Plugin::read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
{

}

}
}
