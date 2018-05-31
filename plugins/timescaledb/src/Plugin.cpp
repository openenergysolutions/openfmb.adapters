#include "Plugin.h"

#include "adapter-api/util/YAMLUtil.h"
#include "adapter-api/ProfileHelpers.h"

#include "BusListener.h"
#include "ConfigStrings.h"

namespace adapter
{
namespace timescaledb
{

template <class T>
struct ProfileSubscriber
{
    static void handle(const Logger& logger, const std::shared_ptr<TimescaleDBArchiver>& archiver, IMessageBus& bus)
    {
        bus.subscribe(std::make_shared<BusListener<T>>(logger, archiver));
    }
};

Plugin::Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus)
    : m_logger{logger},
      m_archiver{std::make_shared<TimescaleDBArchiver>(logger,
                                                       yaml::require_string(node, keys::database_url),
                                                       yaml::require_string(node, keys::table_name),
                                                       yaml::require(node, keys::max_queued_messages).as<size_t>(),
                                                       std::chrono::seconds(yaml::require(node, keys::connect_retry_seconds).as<uint32_t>()))}
{
    profiles::handle_all<ProfileSubscriber>(logger, this->m_archiver, bus);
}

Plugin::~Plugin()
{
    m_archiver->shutdown();
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
