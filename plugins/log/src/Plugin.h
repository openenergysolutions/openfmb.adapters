#ifndef OPENFMB_ADAPTER_LOG_PLUGIN_H
#define OPENFMB_ADAPTER_LOG_PLUGIN_H

#include <adapter-api/IPluginFactory.h>

namespace adapter {
namespace log {
    class Plugin final : public api::IPlugin {

    public:
        Plugin() = delete;

        Plugin(const YAML::Node& node, const api::Logger& logger, api::message_bus_t bus);

        virtual std::string name() const override
        {
            return "log";
        }

        // start the execution of the adapter
        virtual void start() override {}
    };
}
}

#endif
