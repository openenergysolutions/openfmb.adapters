#ifndef OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPLUGIN_H
#define OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPLUGIN_H

#include "goose-cpp/INetworkPublisher.h"
#include "yaml-cpp/yaml.h"
#include <adapter-api/IMessageBus.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>
#include <memory>
#include <string>
#include <unordered_map>

namespace adapter {
namespace goose {

    class SubscribingPlugin final : public api::IPlugin {
    public:
        SubscribingPlugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus);
        virtual ~SubscribingPlugin();

        std::string name() const override;
        void start() override;

    private:
        void add_control_block(const YAML::Node& node, api::message_bus_t bus, api::Logger logger);
        std::shared_ptr<goose_cpp::INetworkPublisher> get_network_publisher(const std::string& network_adapter_name);

        api::Logger m_logger;
        std::unordered_map<std::string, std::shared_ptr<goose_cpp::INetworkPublisher>> m_network_publishers;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUB_SUBSCRIBINGPLUGIN_H
