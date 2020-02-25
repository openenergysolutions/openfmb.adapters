
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_PLUGINFACTORY_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_PLUGINFACTORY_H

#include "adapter-api/IPluginFactory.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        class PluginFactory final : public api::IPluginFactory {

        public:
            PluginFactory() = default;

            virtual std::string name() const override
            {
                return "dnp3-outstation";
            }

            virtual std::string description() const override
            {
                return "maps openFMB to the outstation side of the DNP3 protocol";
            };

            virtual void write_default_config(YAML::Emitter& emitter) const override;

            schema::Object get_plugin_schema() const override;

            void write_session_config(YAML::Emitter& out, const api::profile_vec_t& profiles) const override;

            virtual std::unique_ptr<api::IPlugin>
            create(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus) override;
        };
    }
}
}

#endif
