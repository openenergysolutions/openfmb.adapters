

#include "Plugin.h"

#include "NATSPublisher.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/YAMLUtil.h>

#include "ConfigStrings.h"
#include "NATSSubscriber.h"
#include "SubjectName.h"
#include "SubjectNameSuffix.h"

namespace adapter {
namespace nats {

    template <class F>
    void try_nats(const F& fun, const char* message)
    {
        const auto err = fun();
        if (err) {
            throw api::Exception(message, nats_GetLastError(nullptr));
        }
    }

    template <class T>
    struct SubscribeProfileReader {

        static void handle(const SubjectNameSuffix& suffix, api::Logger& logger, api::publisher_t publisher, subscription_vec_t& subscriptions)
        {
            const auto subject_name = get_subject_name(T::descriptor()->full_name(), suffix.get_value());

            logger.info("creating NATs subscriber for subject: {}", subject_name);

            subscriptions.push_back(
                std::make_unique<NATSSubscriber<T>>(
                    logger,
                    subject_name,
                    std::move(publisher)));
        }
    };

    template <class T>
    struct PublishProfileReader {

        static void handle(const SubjectNameSuffix& suffix, api::Logger& logger, api::IMessageBus& bus, const message_queue_t& message_queue)
        {
            const auto subject_name = get_subject_name(T::descriptor()->full_name(), suffix.get_value());

            logger.info("creating NATs publisher for subject: {}", subject_name);

            bus.subscribe(
                std::make_shared<NATSPublisher<T>>(
                    logger,
                    suffix,
                    message_queue));
        }
    };

    Plugin::Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus)
        : config(node)
        , logger(logger)
        , messages(
              std::make_shared<util::SynchronizedQueue<Message>>(config.max_queued_messages))
    {
        // configure the options used for the connection
        this->read_nats_options(node);

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
        natsConnection* connection;

        while (!shutdown) {
            auto err = natsConnection_Connect(&connection, this->options.impl);

            if (err) {
                logger.warn("Unable to connect to NATS server: {}", nats_GetLastError(nullptr));
                std::this_thread::sleep_for(this->config.connect_retry_seconds);
            } else {
                // set up any subscriptions
                for (auto& sub : this->subscriptions) {
                    sub->start(connection);
                }

                this->run(*connection);

                natsConnection_Close(connection);
            }
        }
    }

    void Plugin::run(natsConnection& conn)
    {
        while (!shutdown) {
            auto msg = this->messages->pop(std::chrono::milliseconds(100));
            if (msg) {

                auto err = natsConnection_Publish(&conn, msg->subject.c_str(), msg->buffer.data(), static_cast<int>(msg->buffer.length()));

                if (err) {
                    this->logger.warn("publish to subject {} failed: {}", msg->subject, nats_GetLastError(nullptr));
                } else {
                    this->logger.debug("published {} bytes to subject: {}", msg->buffer.length(), msg->subject);
                }
            }
        }
    }

    void Plugin::read_nats_options(const YAML::Node& node)
    {
        // we always need the connect url
        try_nats(
            [&]() -> natsStatus {
                return natsOptions_SetURL(
                    this->options.impl,
                    util::yaml::require_string(node, keys::connect_url).c_str());
            },
            "Unable to set url: ");
    }

    void Plugin::read_pub_sub_config(const YAML::Node& node, api::message_bus_t bus)
    {
        util::yaml::foreach (
            util::yaml::require(node, keys::subscribe),
            [&](const YAML::Node& entry) {
                api::ProfileRegistry::handle_by_name<SubscribeProfileReader>(
                    util::yaml::require_string(entry, util::keys::profile),
                    SubjectNameSuffix(util::yaml::require_string(entry, keys::subject)),
                    this->logger,
                    bus,
                    this->subscriptions);
            });

        util::yaml::foreach (
            util::yaml::require(node, keys::publish),
            [&](const YAML::Node& entry) {
                api::ProfileRegistry::handle_by_name<PublishProfileReader>(
                    util::yaml::require_string(entry, util::keys::profile),
                    SubjectNameSuffix(util::yaml::require_string(entry, keys::subject)),
                    this->logger,
                    *bus,
                    this->messages);
            });
    }
}
}
