#ifndef OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H
#define OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H

#include "adapter-api/IAdapterFactory.h"

namespace openfmb
{
    class ConsoleAdapterFactory : public IAdapterFactory
    {
    public:

        virtual std::string name() const override
        {
            return "console-printer";
        }

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers) override;
    };
}

#endif //OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H
