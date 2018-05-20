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
    bus.subscribe(std::make_shared<BusListener<resourcemodule::ResourceReadingProfile>>(logger, m_archiver));
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
