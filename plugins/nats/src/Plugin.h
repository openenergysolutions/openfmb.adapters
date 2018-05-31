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

            Plugin(const Logger& logger, const YAML::Node& node, IMessageBus& bus);

            virtual std::string name() const override
            {
                return "nats";
            }

            virtual void start() override;

        private:


            std::vector<std::unique_ptr<INATSSubscription>> subscriptions;

            const Config config;

            Logger logger;
            std::unique_ptr<std::thread> background_thread;
            bool shutdown = false;

            const std::shared_ptr<util::SynchronizedQueue<Message>> messages;

            void run();
            void run(natsConnection& connection);
        };
    }


}

#endif
