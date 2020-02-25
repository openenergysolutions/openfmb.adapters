#ifndef OPENFMB_ADAPTER_DDS_RTI_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_DDS_RTI_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter {
namespace dds {
namespace rti {

class PluginFactory final : public api::IPluginFactory {

public:
    std::string name() const override
    {
        return "dds-rti";
    }

    std::string description() const override
    {
        return "publish/subscribe to DDS using RTI bindings (requires run-time license)";
    };

    void write_default_config(YAML::Emitter& emitter) const override;

    schema::Object get_plugin_schema() const override;

    void write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const override;

    std::unique_ptr<api::IPlugin> create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
};

}
}
}

#endif //OPENFMB_ADAPTER_DDS_RTI_PLUGINFACTORY_H
