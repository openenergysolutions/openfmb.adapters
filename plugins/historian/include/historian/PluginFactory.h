#ifndef OPENFMB_PLUGIN_HISTORIAN_PLUGINFACTORY_H
#define OPENFMB_PLUGIN_HISTORIAN_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{
namespace historian
{

class PluginFactory final : public IPluginFactory
{
public:

    std::string name() const override;
    std::string description() const override;

    void write_default_config(YAML::Emitter& emitter) const override;
    void write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const override;

    std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
};

}
}

#endif
