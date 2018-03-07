#ifndef OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H
#define OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H

#include "adapter-api/IAdapterFactory.h"

namespace adapter
{
    class LogAdapterFactory : public IAdapterFactory
    {
    public:

        virtual std::string name() const override
        {
            return "log";
        }

        virtual std::string description() const override
        {
            return "pretty prints profiles to the log";
        };

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        virtual std::unique_ptr<IAdapter> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
    };
}

#endif //OPENFMB_ADAPTER_CONSOLEADAPTERFACTORY_H
