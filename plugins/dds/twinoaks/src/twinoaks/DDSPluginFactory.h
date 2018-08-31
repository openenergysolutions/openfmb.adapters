#ifndef OPENFMB_ADAPTER_DDSPLUGINFACTORY_H
#define OPENFMB_ADAPTER_DDSPLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{

    class DDSPluginFactory final : public IPluginFactory
    {

    public:

        std::string name() const override
        {
            return "dds-twinoaks";
        }

        std::string description() const override
        {
            return "publish/subscribe to DDS using TwinOaks bindings (requires run-time license)";
        };

        void write_default_config(YAML::Emitter& emitter) const override;

        void write_session_config(YAML::Emitter &out, const profile_vec_t &profiles) const override;

        std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, message_bus_t bus) override;

    };

}



#endif //OPENFMB_ADAPTER_DDSPLUGINFACTORY_H
