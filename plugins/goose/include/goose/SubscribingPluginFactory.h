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

        schema::Object get_plugin_schema() const override;
        std::vector<schema::property_ptr_t> get_session_schema() const override;
        std::vector<schema::property_ptr_t> get_profile_schema(const std::string& profile) const override;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_GOOSE_SUBSCRIBINGPLUGINFACTORY_H
