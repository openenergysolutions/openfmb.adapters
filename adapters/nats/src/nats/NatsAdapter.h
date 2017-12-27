#ifndef OPENFMB_ADAPTER_NATSADAPTER_H
#define OPENFMB_ADAPTER_NATSADAPTER_H

#include "adapter-api/IAdapter.h"


namespace openfmb
{

    class NatsAdapter final : public IAdapter
    {

    public:

        NatsAdapter() = delete;

        NatsAdapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers);

        virtual void start(const std::shared_ptr<IProtoPublishers>& publishers) override;

    private:


    };

}

#endif
