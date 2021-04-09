// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "sub/SubscribingPlugin.h"

#include "ConfigStrings.h"
#include "adapter-util/ConfigStrings.h"
#include "adapter-util/util/YAMLTemplate.h"
#include "adapter-util/util/YAMLUtil.h"
#include "goose-cpp/NetworkInterface.h"
#include "sub/SubscribingProfileReader.h"
#include <string>

namespace adapter {
namespace goose {

    SubscribingPlugin::SubscribingPlugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus)
        : m_logger{ logger }
    {
        util::yaml::load_template_configs(
            util::yaml::require(node, keys::goCb),
            m_logger,
            [&](const YAML::Node& config) {
                this->add_control_block(config, bus, logger);
            });
    }

    std::string SubscribingPlugin::name() const
    {
        return "goose-sub";
    }

    void SubscribingPlugin::start()
    {
        // The control blocks already subscribed to the message bus. Nothing to do here.
    }

    void SubscribingPlugin::add_control_block(const YAML::Node& node, api::message_bus_t bus, api::Logger logger)
    {
        auto network_publisher = get_network_publisher(util::yaml::require_string(node, keys::networkAdapter));
        auto src_mac = util::yaml::require_string(node, keys::src_mac);
        auto dest_mac = util::yaml::require_string(node, keys::dest_mac);
        auto app_id = util::yaml::require(node, keys::appId).as<uint16_t>();
        auto go_cb_ref = util::yaml::require_string(node, keys::goCbRef);
        auto dat_set = util::yaml::require_string(node, keys::datSet);
        auto go_id = util::yaml::require_string(node, keys::goID);
        auto conf_rev = util::yaml::require(node, keys::confRev).as<uint16_t>();
        auto ttl = util::yaml::require(node, keys::ttl).as<uint16_t>();

        const auto profile_node = node[util::keys::profiles][0];
        auto profile = util::yaml::require_string(profile_node, util::keys::name);

        auto control_block_publisher = network_publisher->make_control_block_publisher(
            goose_cpp::MacAddress::from_string(src_mac),
            goose_cpp::MacAddress::from_string(dest_mac),
            app_id,
            go_cb_ref,
            dat_set,
            go_id,
            conf_rev,
            ttl);

        api::ProfileRegistry::handle_by_name<SubscribingProfileReader>(
            profile,
            profile_node,
            m_logger,
            bus,
            std::shared_ptr<goose_cpp::IControlBlockPublisher>{ std::move(control_block_publisher) });
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
                m_network_publishers.insert({ network_adapter_name, network_publisher });
                return network_publisher;
            }
        }

        throw api::Exception{ "Cannot find network adapter " + network_adapter_name };
    }

} // namespace goose
} // namespace adapter
