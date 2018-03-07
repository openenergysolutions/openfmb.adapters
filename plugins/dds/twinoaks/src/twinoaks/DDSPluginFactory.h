#ifndef OPENFMB_ADAPTER_DDSPLUGINFACTORY_H
#define OPENFMB_ADAPTER_DDSPLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{

    class DDSPluginFactory final : public IPluginFactory
    {

    public:

        virtual std::string name() const override
        {
            return "dds-twinoaks";
        }

        virtual std::string description() const override
        {
            return "publish/subscribe to DDS using TwinOaks bindings (requires run-time license)";
        };

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

    };

}



#endif //OPENFMB_ADAPTER_DDSPLUGINFACTORY_H
