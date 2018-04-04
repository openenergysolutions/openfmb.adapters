
#ifndef OPENFMB_ADAPTER_NATS_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_NATS_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{
    namespace nats
    {

        class PluginFactory final : public IPluginFactory
        {

        public:

            PluginFactory() = default;

            virtual std::string name() const override
            {
                return "nats";
            }

            virtual std::string description() const override
            {
                return "publish/subscribe to a NATS server";
            };

            virtual void write_default_config(YAML::Emitter& emitter, const profile_vec_t& profiles) const override;

            virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
        };
    }

}

#endif //OPENFMB_ADAPTER_NATSFACTORY_H
