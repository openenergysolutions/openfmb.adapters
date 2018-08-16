#ifndef OPENFMB_ADAPTER_GOOSE_PUB_PLUGIN_H
#define OPENFMB_ADAPTER_GOOSE_PUB_PLUGIN_H

#include "NetworkAdapter.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/IPlugin.h"
#include "adapter-api/Logger.h"
#include "yaml-cpp/yaml.h"
#include <unordered_map>

namespace adapter {
namespace goose {

    class PublishingPlugin final : public IPlugin {
    public:
        PublishingPlugin(const YAML::Node& node, const Logger& logger, message_bus_t bus);
        virtual ~PublishingPlugin();

        std::string name() const override;
        void start() override;

    private:
        void add_control_block(const YAML::Node& node, message_bus_t bus, Logger logger);
        NetworkAdapter get_adapter(const std::string& network_adapter);

        Logger m_logger;
        std::unordered_map<std::string, NetworkAdapter> m_adapters;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PUB_PLUGIN_H
