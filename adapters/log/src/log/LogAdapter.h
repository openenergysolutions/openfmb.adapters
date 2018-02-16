#ifndef OPENFMB_ADAPTER_CONSOLEADAPTER_H
#define OPENFMB_ADAPTER_CONSOLEADAPTER_H

#include <adapter-api/IAdapterFactory.h>

namespace adapter
{

    class LogAdapter final : public IAdapter
    {
    public:

        LogAdapter(const YAML::Node& node, const Logger& logger, IMessageBus& bus);

        virtual std::string name() const override
        {
            return "log";
        }

        // start the execution of the adapter
        virtual void start() override {}

    private:

        LogAdapter() = delete;
    };
}


#endif //OPENFMB_ADAPTER_CONSOLEADAPTER_H
