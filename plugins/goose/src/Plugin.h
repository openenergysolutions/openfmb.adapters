#ifndef OPENFMB_ADAPTER_GOOSE_PLUGIN_H
#define OPENFMB_ADAPTER_GOOSE_PLUGIN_H

#include "adapter-api/Logger.h"
#include "adapter-api/IMessageBus.h"
#include "adapter-api/IPlugin.h"
#include "yaml-cpp/yaml.h"

namespace adapter
{
namespace goose
{

class Plugin final : public IPlugin
{
public:
    Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);
    virtual ~Plugin();

    std::string name() const override;
    void start() override;

private:
    Logger m_logger;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_PLUGIN_H
