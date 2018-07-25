#include "Plugin.h"

namespace adapter
{
namespace goose
{

Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
        : m_logger{ logger }
{

}

Plugin::~Plugin()
{

}

std::string Plugin::name() const
{
    return "goose";
}

void Plugin::start()
{

}

} // namespace goose
} // namespace adapter
