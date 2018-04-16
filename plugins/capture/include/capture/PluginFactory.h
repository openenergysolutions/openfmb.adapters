
#ifndef OPENFMB_ADAPTER_CAPTURE_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_CAPTURE_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter
{
    namespace capture
    {

        class PluginFactory final : public IPluginFactory
        {

        public:

            PluginFactory() = default;

            virtual std::string name() const override
            {
                return "capture";
            }

            virtual std::string description() const override
            {
                return "captures published OpenFMB messages to a replayable file format";
            };

            virtual void write_default_config(YAML::Emitter& emitter) const override;

            void write_session_config(YAML::Emitter& out, const profile_vec_t& profiles) const override;

            virtual std::unique_ptr<IPlugin> create(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

        };
    }
}

#endif
