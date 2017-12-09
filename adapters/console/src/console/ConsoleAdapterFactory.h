#ifndef OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H
#define OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H

#include "adapter-api/IAdapter.h"

namespace openfmb
{
    class ConsoleAdapterFactory : public IAdapterFactory
    {
    public:

        virtual const char* name() const override
        {
            return "console";
        }

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, IProtoSubscribers& subscribers) const override;
    };
}

#endif //OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H
