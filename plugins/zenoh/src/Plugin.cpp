// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "Plugin.h"


#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/SubjectNameSuffix.h>
#include <adapter-util/util/YAMLUtil.h>

#include "ConfigStrings.h"
#include "ZenohPublisher.h"
#include "ZenohSubscriber.h"
#include "SubjectName.h"

namespace adapter {
namespace zenoh {

   
    template <class T>
    struct SubscribeProfileReader {

        static void handle(const util::SubjectNameSuffix& suffix, api::Logger& logger, api::publisher_t publisher, subscription_vec_t& subscriptions)
        {
            const auto subject_name = get_subject_name(T::descriptor()->full_name(), suffix.get_value());

            subscriptions.push_back(
                std::make_unique<ZenohSubscriber<T>>(
                    logger,
                    subject_name,
                    std::move(publisher)));

            logger.info("configured Zenoh subscriber for subject: {}", subject_name);
        }
    };

    template <class T>
    struct PublishProfileReader {

        static void handle(const util::SubjectNameSuffix& suffix, api::Logger& logger, api::ISubscribeOne<T>& bus, const message_queue_t& message_queue)
        {
            const auto subject_name = get_subject_name(T::descriptor()->full_name(), suffix.get_value());

            bus.subscribe(
                std::make_shared<ZenohPublisher<T>>(
                    logger,
                    suffix,
                    message_queue));

            logger.info("configured Zenoh publisher for subject: {}", subject_name);
        }
    };

    Plugin::Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus)
        : config(node)
        , logger(logger)
        , messages(
              std::make_shared<util::SynchronizedQueue<util::Message>>(config.max_queued_messages))
    {
        // configure the options used for the connection

        // read the pub/sub config
        // this information isn't used until we have a connection in run()
        this->read_pub_sub_config(node, std::move(bus));
    }

    Plugin::Config::Config(const YAML::Node& node)
        : max_queued_messages(util::yaml::require(node, keys::max_queued_messages).as<size_t>())
        , connect_retry_seconds(std::chrono::seconds(util::yaml::require(node, keys::connect_retry_seconds).as<uint32_t>()))
    {
    }

    Plugin::Config::~Config()
    {
    }

    Plugin::~Plugin()
    {
        this->shutdown = true;
        this->background_thread->join();
    }

    void Plugin::start()
    {
        if (this->background_thread)
            return;

        this->background_thread = std::make_unique<std::thread>([this]() {
            this->run();
        });
    }

    void Plugin::run()
    {
        zn_session_t* session = nullptr;

        while (!shutdown) {
            session = zn_open(zn_config_default());

            if (session == nullptr) {
                logger.warn("Unable to open Zenoh session");
                std::this_thread::sleep_for(this->config.connect_retry_seconds);
            } else {
                logger.info("Established Zenoh session");

                // set up any subscriptions
                for (auto& sub : this->subscriptions) {
                    sub->start(session);
                }

                this->run(session);

                zn_close(session);
            }
        }
    }

    void Plugin::run(zn_session_t *session)
    {
        while (!shutdown) {
            auto msg = this->messages->pop(std::chrono::milliseconds(100));
            if (msg) {

                auto err = zn_write(session, zn_rname(msg->subject.c_str()), (const uint8_t*)msg->buffer.data(), static_cast<int>(msg->buffer.length()));

                if (err) {
                    this->logger.warn("publish to subject {} failed", msg->subject);
                } else {
                    this->logger.debug("published {} bytes to subject: {}", msg->buffer.length(), msg->subject);
                }
            }
        }
    }

    void Plugin::read_pub_sub_config(const YAML::Node& node, api::message_bus_t bus)
    {
        util::yaml::foreach (
            util::yaml::require(node, util::keys::subscribe),
            [&](const YAML::Node& entry) {
                api::ProfileRegistry::handle_by_name<SubscribeProfileReader>(
                    util::yaml::require_string(entry, util::keys::profile),
                    util::SubjectNameSuffix(util::yaml::require_string(entry, keys::subject)),
                    this->logger,
                    bus,
                    this->subscriptions);
            });

        util::yaml::foreach (
            util::yaml::require(node, util::keys::publish),
            [&](const YAML::Node& entry) {
                api::ProfileRegistry::handle_by_name<PublishProfileReader>(
                    util::yaml::require_string(entry, util::keys::profile),
                    util::SubjectNameSuffix(util::yaml::require_string(entry, keys::subject)),
                    this->logger,
                    *bus,
                    this->messages);
            });
    }
}
}
