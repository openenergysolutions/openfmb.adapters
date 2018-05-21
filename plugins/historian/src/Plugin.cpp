#include "Plugin.h"

#include "BusListener.h"

namespace adapter
{
namespace historian
{

Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    : m_logger{logger},
      m_archiver{std::make_shared<TimescaleDBArchiver>(logger)}
{
    bus.subscribe(std::make_shared<BusListener<resourcemodule::ResourceReadingProfile>>(m_archiver));
    bus.subscribe(std::make_shared<BusListener<switchmodule::SwitchReadingProfile>>(m_archiver));
    bus.subscribe(std::make_shared<BusListener<switchmodule::SwitchStatusProfile>>(m_archiver));
}

std::string Plugin::name() const
{
    return "historian";
}

void Plugin::start()
{
    m_archiver->start();
}

}
}
