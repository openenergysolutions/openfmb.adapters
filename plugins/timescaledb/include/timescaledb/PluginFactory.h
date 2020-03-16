#ifndef OPENFMB_PLUGIN_TIMESCALEDB_PLUGINFACTORY_H
#define OPENFMB_PLUGIN_TIMESCALEDB_PLUGINFACTORY_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {
namespace timescaledb {

    class PluginFactory final : public api::IPluginFactory {
    public:
        std::string name() const override;
        std::string description() const override;

        schema::Object get_plugin_schema() const override;

        std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
    };
}
}

#endif
