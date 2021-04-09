// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "Plugin.h"

#include "NATSPublisher.h"

#include <adapter-api/Exception.h>
#include <adapter-util/ConfigStrings.h>
#include <adapter-util/config/SubjectNameSuffix.h>
#include <adapter-util/util/YAMLUtil.h>

#include "ConfigStrings.h"
#include "NATSSubscriber.h"
#include "SubjectName.h"
#include "generated/SecurityType.h"

namespace adapter {
namespace nats {

    template <class F>
    void try_nats(const F& fun, const char* message)
    {
        const auto err = fun();
        if (err) {
            throw api::Exception(message, ": ", nats_GetLastError(nullptr));
        }
    }

    template <class T>
    struct SubscribeProfileReader {

        static void handle(const util::SubjectNameSuffix& suffix, api::Logger& logger, api::publisher_t publisher, subscription_vec_t& subscriptions)
        {
            const auto subject_name = get_subject_name(T::descriptor()->full_name(), suffix.get_value());

            subscriptions.push_back(
                std::make_unique<NATSSubscriber<T>>(
                    logger,
                    subject_name,
                    std::move(publisher)));

            logger.info("configured NATs subscriber for subject: {}", subject_name);
        }
    };

    template <class T>
    struct PublishProfileReader {

        static void handle(const util::SubjectNameSuffix& suffix, api::Logger& logger, api::ISubscribeOne<T>& bus, const message_queue_t& message_queue)
        {
            const auto subject_name = get_subject_name(T::descriptor()->full_name(), suffix.get_value());

            bus.subscribe(
                std::make_shared<NATSPublisher<T>>(
                    logger,
                    suffix,
                    message_queue));

            logger.info("configured NATs publisher for subject: {}", subject_name);
        }
    };

    Plugin::Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus)
        : config(node)
        , logger(logger)
        , messages(
              std::make_shared<util::SynchronizedQueue<util::Message>>(config.max_queued_messages))
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

                logger.info("Established connection to NATS broker");

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
            "Unable to set url");

        // figure out what type of security we're using

        const auto sec_node = util::yaml::require(node, util::keys::security);
        const auto sec_type = util::yaml::require_enum<SecurityType>(sec_node);
        switch (sec_type) {
        case (SecurityType::Value::none):
            break; // we're done, nothing to configure
        case (SecurityType::Value::tls_mutual_auth):
            this->read_tls_config(sec_node, true);
            break;
        case (SecurityType::Value::tls_server_auth):
            this->read_tls_config(sec_node, false);
            break;
        default:
            throw api::Exception("Unsupported security type: ", SecurityType::to_string(sec_type));
        }

        // Setup JWT security
        const auto jwt_node = sec_node[keys::jwt_creds_file];
        if(jwt_node)
        {
            read_jwt_config(sec_node);
        }
    }

    void Plugin::read_tls_config(const YAML::Node& node, bool mutual_auth)
    {
        // use TLS
        try_nats(
            [&]() -> natsStatus {
                return natsOptions_SetSecure(this->options.impl, true);
            },
            "Unable to enable Nats security");

        // always load the CA files for verifying the server
        try_nats(
            [&]() -> natsStatus {
                return natsOptions_LoadCATrustedCertificates(this->options.impl, util::yaml::require_string(node, util::keys::ca_trusted_cert_file).c_str());
            },
            "Unable to read CA file");

        if (mutual_auth) {
            try_nats(
                [&]() -> natsStatus {
                    return natsOptions_LoadCertificatesChain(
                        this->options.impl,
                        util::yaml::require_string(node, util::keys::client_cert_chain_file).c_str(),
                        util::yaml::require_string(node, util::keys::client_private_key_file).c_str());
                },
                "Unable load client cert chain or private key");
        }
    }

    void Plugin::read_jwt_config(const YAML::Node& node)
    {
        try_nats(
            [&]() -> natsStatus {
                return natsOptions_SetUserCredentialsFromFiles(
                    this->options.impl,
                    util::yaml::require_string(node, keys::jwt_creds_file).c_str(),
                    nullptr);
            },
            "Unable to set JWT user credentials");
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
