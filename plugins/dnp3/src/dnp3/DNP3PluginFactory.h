
#ifndef OPENFMB_ADAPTER_DNP3PLUGINFACTORY_H
#define OPENFMB_ADAPTER_DNP3PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{

    class DNP3PluginFactory final : public IPluginFactory
    {

    public:

        DNP3PluginFactory() = default;

        virtual std::string name() const override
        {
            return "dnp3";
        }

        virtual std::string description() const override
        {
            return "maps openFMB to the DNP3 protocol";
        };

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

    };

}

#endif //OPENFMB_ADAPTER_DNP3PLUGINFACTORY_H
