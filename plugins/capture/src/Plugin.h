
#ifndef OPENFMB_ADAPTER_CAPTURE_PLUGIN_H
#define OPENFMB_ADAPTER_CAPTURE_PLUGIN_H

#include <yaml-cpp/node/node.h>

#include <adapter-api/Logger.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/IMessageBus.h>


namespace adapter
{
    namespace capture
    {
        class Plugin : public IPlugin
        {
        public:

            Plugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

            std::string name() const override
            {
                return "capture";
            }

            void start() override {}
        };
    }
}

#endif
