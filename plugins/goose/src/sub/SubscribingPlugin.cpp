#include "sub/SubscribingPlugin.h"

#include "ConfigStrings.h"
#include "sub/SubscribingProfileReader.h"
#include "adapter-api/ConfigStrings.h"
#include "adapter-api/util/YAMLTemplate.h"
#include "adapter-api/util/YAMLUtil.h"
#include "goose-cpp/NetworkInterface.h"
#include <string>

namespace adapter {
namespace goose {

    SubscribingPlugin::SubscribingPlugin(const YAML::Node& node, const Logger& logger, message_bus_t bus)
        : m_logger{ logger }
    {
        yaml::load_template_configs(
                yaml::require(node, keys::goCb),
                m_logger,
                [&](const YAML::Node& config) {
                    this->add_control_block(config, std::move(bus), logger);
                });
    }

    SubscribingPlugin::~SubscribingPlugin()
    {
    }

    std::string SubscribingPlugin::name() const
    {
        return "goose-sub";
    }

    void SubscribingPlugin::start()
    {
        // The control blocks already subscribed to the message bus. Nothing to do here.
    }

    void SubscribingPlugin::add_control_block(const YAML::Node& node, message_bus_t bus, Logger logger)
    {
        auto network_publisher = get_network_publisher(yaml::require_string(node, keys::networkAdapter));
        auto src_mac = yaml::require_string(node, keys::src_mac);
        auto dest_mac = yaml::require_string(node, keys::dest_mac);
        auto app_id = yaml::require(node, keys::appId).as<uint16_t>();
        auto go_cb_ref = yaml::require_string(node, keys::goCbRef);
        auto dat_set = yaml::require_string(node, keys::datSet);
        auto go_id = yaml::require_string(node, keys::goID);
        auto conf_rev = yaml::require(node, keys::confRev).as<uint16_t>();
        auto ttl = yaml::require(node, keys::ttl).as<uint16_t>();
        auto profile = yaml::require_string(node, ::adapter::keys::profile);

        auto control_block_publisher = network_publisher->make_control_block_publisher(
                goose_cpp::MacAddress::from_string(src_mac),
                goose_cpp::MacAddress::from_string(dest_mac),
                app_id,
                go_cb_ref,
                dat_set,
                go_id,
                conf_rev,
                ttl
        );

        ProfileRegistry::handle_by_name<SubscribingProfileReader>(
                profile,
                node,
                m_logger,
                bus,
                std::shared_ptr<goose_cpp::IControlBlockPublisher>{std::move(control_block_publisher)}
        );
    }

    std::shared_ptr<goose_cpp::INetworkPublisher> SubscribingPlugin::get_network_publisher(const std::string& network_adapter_name)
    {
        // Check if the network publisher is already there
        auto it = m_network_publishers.find(network_adapter_name);
        if (it != m_network_publishers.end()) {
            return it->second;
        }

        // Otherwise, find the network publisher
        auto interfaces = goose_cpp::NetworkInterface::get_all_interfaces();
        for (auto& interface : interfaces) {
            if (interface.get_name() == network_adapter_name) {
                auto network_publisher = std::shared_ptr<goose_cpp::INetworkPublisher>(std::move(goose_cpp::INetworkPublisher::create(interface)));
                m_network_publishers.insert({network_adapter_name, network_publisher});
                return network_publisher;
            }
        }

        throw Exception{ "Cannot find network adapter " + network_adapter_name };
    }

} // namespace goose
} // namespace adapter
