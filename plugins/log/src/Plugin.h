#ifndef OPENFMB_ADAPTER_LOG_PLUGIN_H
#define OPENFMB_ADAPTER_LOG_PLUGIN_H

#include <adapter-api/IPluginFactory.h>
#include <adapter-api/IProfileReader.h>


namespace adapter
{
    namespace log
    {
        class Plugin final : public IPlugin, private IProfileReader
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

            virtual void read_resource_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

            virtual void read_switch_reading(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

            virtual void read_switch_status(const YAML::Node& node, const Logger& logger, IMessageBus& bus) override;

            Plugin() = delete;
        };
    }
}


#endif
