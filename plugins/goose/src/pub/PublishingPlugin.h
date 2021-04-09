// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPLUGIN_H
#define OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPLUGIN_H

#include <adapter-api/IMessageBus.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>

#include "pub/NetworkAdapter.h"
#include "yaml-cpp/yaml.h"

#include <unordered_map>

namespace adapter {
namespace goose {

    class PublishingPlugin final : public api::IPlugin {
    public:
        PublishingPlugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus);
        virtual ~PublishingPlugin();

        std::string name() const override;
        void start() override;

    private:
        void add_control_block(const YAML::Node& node, api::message_bus_t bus, api::Logger logger);
        NetworkAdapter get_adapter(const std::string& network_adapter);

        api::Logger m_logger;
        std::unordered_map<std::string, NetworkAdapter> m_adapters;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_PUBLISHINGPLUGIN_H
