#include "Plugin.h"

#include "adapter-util/util/YAMLUtil.h"

#include "BusListener.h"
#include "ConfigStrings.h"

namespace adapter {
namespace timescaledb {

    template <class T>
    struct ProfileSubscriber {
        static void handle(const api::Logger& logger, const std::shared_ptr<TimescaleDBArchiver>& archiver, api::IMessageBus& bus)
        {
            bus.subscribe(std::make_shared<BusListener<T>>(logger, archiver));
        }
    };

    Plugin::Plugin(const YAML::Node& node, const api::Logger& logger, api::IMessageBus& bus)
        : m_logger{ logger }
        , m_archiver{ std::make_shared<TimescaleDBArchiver>(logger,
                                                            util::yaml::require_string(node, keys::database_url),
                                                            util::yaml::require(node, keys::store_measurement).as<bool>(),
                                                            util::yaml::require_string(node, keys::table_name),
                                                            util::yaml::require(node, keys::store_raw_message).as<bool>(),
                                                            util::yaml::require_string(node, keys::raw_table_name),
                                                            util::yaml::require(node, keys::raw_data_format).as<int>(),
                                                            util::yaml::require(node, keys::max_queued_messages).as<size_t>(),
                                                            std::chrono::seconds(util::yaml::require(node, keys::connect_retry_seconds).as<uint32_t>())) }
    {
        api::ProfileRegistry::handle_all<ProfileSubscriber>(logger, this->m_archiver, bus);
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
