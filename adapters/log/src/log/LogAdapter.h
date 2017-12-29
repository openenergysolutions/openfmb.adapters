#ifndef OPENFMB_ADAPTER_CONSOLEADAPTER_H
#define OPENFMB_ADAPTER_CONSOLEADAPTER_H

#include <adapter-api/IAdapter.h>
#include <adapter-api/IProtoSubscribers.h>
#include <adapter-api/Logger.h>
#include <yaml-cpp/yaml.h>

namespace openfmb
{

    class LogAdapter final : public IAdapter
    {
    public:

        LogAdapter(const YAML::Node& node, const Logger& logger, IProtoSubscribers& subscribers);

        // start the execution of the adapter
        virtual void start(const std::shared_ptr<IProtoPublishers>& publisher) override {}

    private:

        LogAdapter() = delete;
    };
}


#endif //OPENFMB_ADAPTER_CONSOLEADAPTER_H
