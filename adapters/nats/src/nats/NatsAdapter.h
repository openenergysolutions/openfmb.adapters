#ifndef OPENFMB_ADAPTER_NATSADAPTER_H
#define OPENFMB_ADAPTER_NATSADAPTER_H

#include "adapter-api/IAdapter.h"

#include "SynchronizedQueue.h"
#include "Message.h"


namespace openfmb
{

    class NatsAdapter final : public IAdapter
    {

    public:

        NatsAdapter() = delete;

        NatsAdapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers);

        virtual void start(const std::shared_ptr<IProtoPublishers>& publishers) override;

    private:

        SynchronizedQueue<std::unique_ptr<Message>> messages;
    };

}

#endif
