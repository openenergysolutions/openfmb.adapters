#ifndef OPENFMB_ADAPTER_NATSADAPTER_H
#define OPENFMB_ADAPTER_NATSADAPTER_H

#include <adapter-api/IAdapter.h>
#include <adapter-api/Logger.h>
#include <adapter-api/IProtoSubscribers.h>

#include <yaml-cpp/yaml.h>
#include <nats/nats.h>


#include "SynchronizedQueue.h"
#include "Message.h"

namespace openfmb
{


    class NatsAdapter final : public IAdapter
    {
        struct Config
        {

            Config(const YAML::Node& node);

            const size_t max_queued_messages;
            const std::string connect_url;
            const std::chrono::seconds connect_retry_seconds;
        };

    public:


        NatsAdapter() = delete;

        ~NatsAdapter();

        NatsAdapter(const Logger& logger, const YAML::Node& node, IProtoSubscribers& subscribers);

        virtual void start(const std::shared_ptr<IProtoPublishers>& publishers) override;

    private:

        const Config config;

        Logger logger;
        std::unique_ptr<std::thread> background_thread;
        bool shutdown = false;

        const std::shared_ptr<SynchronizedQueue<Message>> messages;

        void run();
        void run(natsConnection& connection);

        void configure_publishers(const YAML::Node& node, IProtoSubscribers& subscribers);

        template <class T>
        void add_publisher(const YAML::Node& node, IProtoSubscribers& subscribers);
    };

}

#endif
