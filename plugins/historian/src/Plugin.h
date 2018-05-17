#ifndef OPENFMB_PLUGIN_HISTORIAN_PLUGIN_H
#define OPENFMB_PLUGIN_HISTORIAN_PLUGIN_H

#include "adapter-api/IPlugin.h"
#include "adapter-api/IProfileReader.h"

namespace adapter
{
namespace historian
{

class Plugin final : public IPlugin, private IProfileReader
{
public:
    Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

    std::string name() const override;
    void start() override;

private:
    void read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
    void read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
    void read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
};

}
}

#endif
