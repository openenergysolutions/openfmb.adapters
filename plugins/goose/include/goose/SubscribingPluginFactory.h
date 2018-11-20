#ifndef OPENFMB_ADAPTER_GOOSE_SUBSCRIBINGPLUGINFACTORY_H
#define OPENFMB_ADAPTER_GOOSE_SUBSCRIBINGPLUGINFACTORY_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {

namespace goose {

    class SubscribingPluginFactory final : public api::IPluginFactory {
    public:
        SubscribingPluginFactory() = default;

        std::string name() const final;
        std::string description() const final;

        std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) final;
        void write_default_config(YAML::Emitter& out) const final;
        void write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const final;

    private:
        void write_goose_structure(YAML::Emitter& out) const;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUBSCRIBINGPLUGINFACTORY_H
