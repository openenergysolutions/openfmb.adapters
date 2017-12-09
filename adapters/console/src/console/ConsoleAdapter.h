#ifndef OPENFMB_ADAPTER_CONSOLEADAPTER_H
#define OPENFMB_ADAPTER_CONSOLEADAPTER_H

#include <adapter-api/IAdapter.h>

namespace openfmb
{

    class ConsoleAdapter final : public IAdapter
    {
    public:

        ConsoleAdapter(const YAML::Node& node, IProtoSubscribers& subscribers);

        // start the execution of the adapter
        virtual void start(const std::shared_ptr<IProtoPublishers>& publisher) override {}

    private:

        ConsoleAdapter() = delete;
    };
}


#endif //OPENFMB_ADAPTER_CONSOLEADAPTER_H
