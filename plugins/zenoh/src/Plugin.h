// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ZENOH_PLUGIN_H
#define OPENFMB_ADAPTER_ZENOH_PLUGIN_H

#include <thread>

#include <adapter-api/IMessageBus.h>
#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>
#include <adapter-util/util/SynchronizedQueue.h>

#include <yaml-cpp/yaml.h>

#include <vector>

#include <adapter-util/util/Message.h>

extern "C" {
    #include <zenoh/net.h>
}

namespace adapter {
namespace zenoh {
    // ISubscription is something that can be started as soon
    // as a NATs connection exists
    class IZenohSubscription {
    public:
        virtual ~IZenohSubscription() = default;
        virtual void start(zn_session_t *session) = 0;
    };

    using message_queue_t = std::shared_ptr<util::SynchronizedQueue<util::Message>>;
    using subscription_vec_t = std::vector<std::unique_ptr<IZenohSubscription>>;

    class Plugin final : public api::IPlugin {

        struct Config {

            explicit Config(const YAML::Node& node);
            ~Config();

            const size_t max_queued_messages;
            const std::chrono::seconds connect_retry_seconds;
        };

    public:
        Plugin() = delete;

        ~Plugin();

        Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

        virtual std::string name() const override
        {
            return "zenoh";
        }

        virtual void start() override;

    private:
        subscription_vec_t subscriptions;

        const Config config;

        api::Logger logger;
        std::unique_ptr<std::thread> background_thread;
        bool shutdown = false;

        const message_queue_t messages;

        void run();
        void run(zn_session_t *session);

        void read_pub_sub_config(const YAML::Node& node, api::message_bus_t bus);
    };
}
}

#endif
