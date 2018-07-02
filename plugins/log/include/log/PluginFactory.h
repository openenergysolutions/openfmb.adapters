#ifndef OPENFMB_ADAPTER_LOG_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_LOG_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter {
namespace log {
    class PluginFactory final : public IPluginFactory {
    public:
        std::string name() const override
        {
            return "log";
        }

        std::string description() const override
        {
            return "pretty prints profiles to the log";
        };

        void write_default_config(YAML::Emitter& out) const override;

        void write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const override;

        std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, message_bus_t bus) override;
    };
}
}

#endif
