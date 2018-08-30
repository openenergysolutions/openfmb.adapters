#include "pub/PublishingPlugin.h"

#include "ConfigStrings.h"
#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/YAMLTemplate.h"
#include "adapter-api/util/YAMLUtil.h"
#include "goose-cpp/NetworkInterface.h"
#include "pub/ControlBlockListener.h"
#include "pub/PublishingProfileReader.h"
#include <string>

namespace adapter {
namespace goose {

    PublishingPlugin::PublishingPlugin(const YAML::Node& node, const Logger& logger, message_bus_t bus)
        : m_logger{ logger }
    {
        yaml::load_template_configs(
            yaml::require(node, keys::goCb),
            m_logger,
            [&](const YAML::Node& config) {
                this->add_control_block(config, bus, logger);
            });
    }

    PublishingPlugin::~PublishingPlugin()
    {
    }

    std::string PublishingPlugin::name() const
    {
        return "goose-pub";
    }

    void PublishingPlugin::start()
    {
        for (auto it : m_adapters) {
            it.second.network_interface->start();
        }
    }

    void PublishingPlugin::add_control_block(const YAML::Node& node, message_bus_t bus, Logger logger)
    {
        auto adapter = get_adapter(yaml::require_string(node, keys::networkAdapter));
        auto app_id = yaml::require(node, keys::appId).as<uint16_t>();
        auto go_cb_ref = yaml::require_string(node, keys::goCbRef);
        auto goose_struct = yaml::require(node, keys::goose_struct);

        PubGooseStructureConfigReader goose_struct_reader{};
        const auto profiles = yaml::require(node, ::adapter::keys::profiles);
        yaml::foreach (
            profiles,
            [&](const YAML::Node& node) {
                auto mapping = yaml::require(node, keys::mapping);
                ProfileRegistry::handle_by_name<PublishingProfileReader>(
                    yaml::require_string(node, ::adapter::keys::name),
                    mapping,
                    bus,
                    goose_struct_reader);
            });

        auto cb_listener = std::make_shared<ControlBlockListener>(go_cb_ref, goose_struct_reader.get_meas_handler(goose_struct), logger);
        adapter.sink->add_control_block(app_id, go_cb_ref, cb_listener);
    }

    NetworkAdapter PublishingPlugin::get_adapter(const std::string& network_adapter)
    {
        // Check if the network adapter is already there
        auto it = m_adapters.find(network_adapter);
        if (it != m_adapters.end()) {
            return it->second;
        }

        // Otherwise, find the adapter
        auto interfaces = goose_cpp::NetworkInterface::get_all_interfaces();
        for (auto& interface : interfaces) {
            if (interface.get_name() == network_adapter) {
                auto sink = goose_cpp::ISpecificControlBlockSink::create();
                auto network_interface = std::shared_ptr<goose_cpp::INetworkListener>(std::move(goose_cpp::INetworkListener::create(interface, sink)));
                NetworkAdapter adapter{ network_interface, sink };
                m_adapters.insert({ network_adapter, adapter });
                return adapter;
            }
        }

        throw Exception{ "Cannot find network adapter " + network_adapter };
    }

} // namespace goose
} // namespace adapter
