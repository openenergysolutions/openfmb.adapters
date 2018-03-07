#ifndef OPENFMB_ADAPTER_LOGPLUGIN_H
#define OPENFMB_ADAPTER_LOGPLUGIN_H

#include <adapter-api/IPluginFactory.h>

namespace adapter
{

    class LogPlugin final : public IPlugin
    {
    public:

        LogPlugin(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

        virtual std::string name() const override
        {
            return "log";
        }

        // start the execution of the adapter
        virtual void start() override {}

    private:

        LogPlugin() = delete;
    };
}


#endif //OPENFMB_ADAPTER_LOGPLUGIN_H
