
#ifndef OPENFMB_ADAPTER_NATSPLUGINFACTORY_H
#define OPENFMB_ADAPTER_NATSPLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{

    class NatsPluginFactory final : public IPluginFactory
    {

    public:

        NatsPluginFactory() = default;

        virtual std::string name() const override
        {
            return "nats";
        }

        virtual std::string description() const override
        {
            return "publish/subscribe to a NATS server";
        };

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
    };

}

#endif //OPENFMB_ADAPTER_NATSFACTORY_H
