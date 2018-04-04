#ifndef OPENFMB_ADAPTER_LOGPLUGINFACTORY_H
#define OPENFMB_ADAPTER_LOGPLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{
    class LogPluginFactory : public IPluginFactory
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

        virtual void write_default_config(YAML::Emitter& emitter, const profile_vec_t& profiles) const override;

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
    };
}

#endif //OPENFMB_ADAPTER_LOGPLUGINFACTORY_H
