#ifndef OPENFMB_ADAPTER_GOOSE_PLUGIN_H
#define OPENFMB_ADAPTER_GOOSE_PLUGIN_H

#include <unordered_map>
#include "adapter-api/Logger.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/IPlugin.h"
#include "yaml-cpp/yaml.h"
#include "NetworkAdapter.h"

namespace adapter
{
namespace goose
{

class Plugin final : public IPlugin
{
public:
    Plugin(const YAML::Node& node, const Logger& logger, message_bus_t bus);
    virtual ~Plugin();

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

#endif //OPENFMB_ADAPTER_GOOSE_PLUGIN_H
