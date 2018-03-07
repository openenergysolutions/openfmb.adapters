#ifndef OPENFMB_ADAPTER_NATSPLUGIN_H
#define OPENFMB_ADAPTER_NATSPLUGIN_H

#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>
#include <adapter-api/IMessageBus.h>

#include <yaml-cpp/yaml.h>
#include <nats/nats.h>


#include "SynchronizedQueue.h"
#include "Message.h"

namespace adapter
{

    class NatsPlugin final : public IPlugin
    {
        struct Config
        {

            Config(const YAML::Node& node);

            const size_t max_queued_messages;
            const std::string connect_url;
            const std::chrono::seconds connect_retry_seconds;
        };

    public:


        NatsPlugin() = delete;

        ~NatsPlugin();

        NatsPlugin(const Logger& logger, const YAML::Node& node, IMessageBus& bus);

        virtual std::string name() const override
        {
            return "nats";
        }

        virtual void start() override;

    private:

        const Config config;

        Logger logger;
        std::unique_ptr<std::thread> background_thread;
        bool shutdown = false;

        const std::shared_ptr<SynchronizedQueue<Message>> messages;

        void run();
        void run(natsConnection& connection);

        template <class T>
        void configure_profile(const YAML::Node& node, IMessageBus& bus);

        template <class T>
        void add_publisher(const YAML::Node& node, IMessageBus& bus);
    };

}

#endif
