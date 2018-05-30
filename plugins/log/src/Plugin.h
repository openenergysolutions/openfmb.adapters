#ifndef OPENFMB_ADAPTER_LOG_PLUGIN_H
#define OPENFMB_ADAPTER_LOG_PLUGIN_H

#include <adapter-api/IPluginFactory.h>

namespace adapter
{
    namespace log
    {
        class Plugin final : public IPlugin
        {


        public:

            Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

            virtual std::string name() const override
            {
                return "log";
            }

            // start the execution of the adapter
            virtual void start() override {}

        private:

/*
            void add_filter(Profile profile, const YAML::Node& config);

            virtual void read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

            virtual void read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

            virtual void read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;
*/

            Plugin() = delete;
        };
    }
}


#endif
