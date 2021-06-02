// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MQTT_PLUGIN_H
#define OPENFMB_ADAPTER_NATS_PLUGIN_H

#include <thread>

#include <adapter-api/IPlugin.h>
#include <adapter-api/Logger.h>
#include <adapter-api/IMessageBus.h>

#include <adapter-util/util/SynchronizedQueue.h>

#include <yaml-cpp/yaml.h>

#include <mqtt/async_client.h>

#include <chrono>

#include "QueueTypes.h"
#include "SubscriptionRegistry.h"

namespace adapter {
namespace mqtt {

class Plugin final : public api::IPlugin, private ::mqtt::callback {

public:
    Plugin() = delete;

    ~Plugin() override;

    Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus);

    std::string name() const override
    {
        return "mqtt";
    }

    void start() override;

    void message_arrived(::mqtt::const_message_ptr msg) override;

private:

    void run();

    void process_messages();

    void configure_tls_options(const YAML::Node& node);
    void read_tls_config(const YAML::Node& node, bool mutual_auth);

    void configure_pub_sub(const YAML::Node& node, api::message_bus_t bus);

    const std::chrono::steady_clock::duration connect_retry_delay;
    const message_queue_ptr_t message_queue;

    api::Logger logger;
    ::mqtt::ssl_options ssl_options;
    ::mqtt::connect_options options;
    ::mqtt::async_client client;

    bool shutdown = false;
    std::unique_ptr<std::thread> thread;
    SubscriptionRegistry registry;
};

}
}

#endif
