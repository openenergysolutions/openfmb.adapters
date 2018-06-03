#ifndef OPENFMB_ADAPTER_NATS_PLUGIN_H
#define OPENFMB_ADAPTER_NATS_PLUGIN_H

#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>
#include <adapter-api/IMessageBus.h>
#include <adapter-api/util/SynchronizedQueue.h>

#include <yaml-cpp/yaml.h>
#include <nats/nats.h>

#include <vector>

#include "Message.h"

namespace adapter
{
    namespace nats
    {
        // ISubscription is something that can be started as soon
        // as a NATs connection exists
        class INATSSubscription
        {
        public:
            virtual ~INATSSubscription() = default;
            virtual void start(natsConnection* connection) = 0;
        };


        using message_queue_t = std::shared_ptr<util::SynchronizedQueue<Message>>;
        using subscription_vec_t = std::vector<std::unique_ptr<INATSSubscription>>;

        class Plugin final : public IPlugin
        {
            struct Config
            {

                Config(const YAML::Node& node);

                const size_t max_queued_messages;
                const std::string connect_url;
                const std::chrono::seconds connect_retry_seconds;
            };

        public:

            Plugin() = delete;

            ~Plugin();

            Plugin(const Logger& logger, const YAML::Node& node, message_bus_t bus);

            virtual std::string name() const override
            {
                return "nats";
            }

            virtual void start() override;

        private:


            subscription_vec_t subscriptions;

            const Config config;

            Logger logger;
            std::unique_ptr<std::thread> background_thread;
            bool shutdown = false;

            const message_queue_t messages;

            void run();
            void run(natsConnection& connection);
        };
    }


}

#endif
