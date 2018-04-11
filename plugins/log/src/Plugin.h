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

            Plugin() = delete;
        };
    }
}


#endif
