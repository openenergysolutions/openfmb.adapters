
#ifndef OPENFMB_ADAPTER_MODBUS_MASTER_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_MODBUS_MASTER_PLUGINFACTORY_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {
namespace modbus {
namespace master {

    class PluginFactory final : public api::IPluginFactory {

    public:
        PluginFactory() = default;

        virtual std::string name() const override
        {
            return "modbus-master";
        }

        virtual std::string description() const override
        {
            return "maps OpenFMB to the Modbus protocol";
        };

        schema::Object get_plugin_schema() const override;

        std::vector<schema::property_ptr_t> get_session_schema() const override;

        std::vector<schema::property_ptr_t> get_profile_schema(const std::string& profile) const override;

        virtual std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
    };

}
}
}

#endif
