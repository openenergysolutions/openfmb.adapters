
#ifndef OPENFMB_ADAPTER_NATSFACTORY_H
#define OPENFMB_ADAPTER_NATSFACTORY_H

#include "adapter-api/IAdapterFactory.h"

namespace adapter
{

    class NatsFactory final : public IAdapterFactory
    {

    public:

        NatsFactory() = default;

        virtual std::string name() const override
        {
            return "nats";
        }

        virtual std::string description() const override
        {
            return "publish/subscribe to a NATS server";
        };

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) override;
    };

}

#endif //OPENFMB_ADAPTER_NATSFACTORY_H
