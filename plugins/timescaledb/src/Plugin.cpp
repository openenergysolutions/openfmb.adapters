#include "Plugin.h"

#include "adapter-api/util/YAMLUtil.h"
#include "BusListener.h"
#include "ConfigStrings.h"

namespace adapter
{
namespace timescaledb
{

Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    : m_logger{logger},
      m_archiver{std::make_shared<TimescaleDBArchiver>(logger,
                                                       yaml::require_string(node, keys::database_url),
                                                       yaml::require_string(node, keys::table_name))}
{
    bus.subscribe(std::make_shared<BusListener<resourcemodule::ResourceReadingProfile>>(m_archiver));
    bus.subscribe(std::make_shared<BusListener<switchmodule::SwitchReadingProfile>>(m_archiver));
    bus.subscribe(std::make_shared<BusListener<switchmodule::SwitchStatusProfile>>(m_archiver));
}

std::string Plugin::name() const
{
    return "timescaledb";
}

void Plugin::start()
{
    m_archiver->start();
}

}
}
