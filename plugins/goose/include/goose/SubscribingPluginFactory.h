#ifndef OPENFMB_ADAPTER_GOOSE_SUBSCRIBINGPLUGINFACTORY_H
#define OPENFMB_ADAPTER_GOOSE_SUBSCRIBINGPLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter {

namespace goose {

class SubscribingPluginFactory final : public IPluginFactory {
public:
    SubscribingPluginFactory() = default;

    std::string name() const final;
    std::string description() const final;

    std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, message_bus_t bus) final;
    void write_default_config(YAML::Emitter& out) const final;
    void write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const final;
};

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUBSCRIBINGPLUGINFACTORY_H
