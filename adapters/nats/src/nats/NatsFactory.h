
#ifndef OPENFMB_ADAPTER_NATSFACTORY_H
#define OPENFMB_ADAPTER_NATSFACTORY_H

#include "adapter-api/IAdapter.h"

namespace openfmb
{

    class NatsFactory final : public IAdapterFactory
    {

    public:

        NatsFactory() = default;

        virtual const char* name() const override
        {
            return "nats";
        }

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) override;
    };

}

#endif //OPENFMB_ADAPTER_NATSFACTORY_H
