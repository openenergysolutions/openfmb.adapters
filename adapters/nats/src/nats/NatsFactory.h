
#ifndef OPENFMB_ADAPTER_NATSFACTORY_H
#define OPENFMB_ADAPTER_NATSFACTORY_H

#include "adapter-api/IAdapterFactory.h"

namespace openfmb
{

    class NatsFactory final : public IAdapterFactory
    {

    public:

        NatsFactory() = default;

        virtual std::string name() const override
        {
            return "nats";
        }

        virtual void write_default_config(YAML::Emitter& emitter) const override
        {
            // TODO
        }

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) override;
    };

}

#endif //OPENFMB_ADAPTER_NATSFACTORY_H
