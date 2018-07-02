
#ifndef OPENFMB_ADAPTER_NATS_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_NATS_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter {
namespace nats {

    class PluginFactory final : public IPluginFactory {

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

        virtual void write_default_config(YAML::Emitter& emitter) const override;

        void write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const override;

        virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, message_bus_t bus) override;
    };
}
}

#endif
