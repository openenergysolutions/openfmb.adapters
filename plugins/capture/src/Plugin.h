
#ifndef OPENFMB_ADAPTER_CAPTURE_PLUGIN_H
#define OPENFMB_ADAPTER_CAPTURE_PLUGIN_H

#include <yaml-cpp/node/node.h>

#include <adapter-api/Logger.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/IMessageBus.h>
#include <adapter-api/Profile.h>

#include <ios>
#include <fstream>
#include <google/protobuf/message_lite.h>

namespace adapter
{
    namespace capture
    {
        class SharedLog;

        class Plugin final : public IPlugin
        {

        public:

            Plugin(const YAML::Node& node, const Logger& logger, message_bus_t bus);

            ~Plugin() override;

            std::string name() const override
            {
                return "capture";
            }

            void start() override {}

        private:

            const std::shared_ptr<SharedLog> shared_log;
        };
    }
}

#endif
