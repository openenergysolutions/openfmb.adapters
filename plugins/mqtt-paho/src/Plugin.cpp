

#include "Plugin.h"

#include <adapter-util/ConfigStrings.h>
#include <adapter-util/util/YAMLUtil.h>

#include "ConfigStrings.h"
#include "MQTTPublisher.h"
#include "TopicName.h"
#include "TopicNameSuffix.h"
#include "generated/SecurityType.h"

namespace adapter {
namespace mqtt {

    template <class T>
    struct PublishProfileReader {

        static void handle(const TopicNameSuffix& suffix, api::Logger logger, api::subscriber_one_t<T> bus, message_queue_ptr_t message_queue, SubscriptionRegistry& /*registry*/)
        {
            bus->subscribe(
                std::make_shared<MQTTPublisher<T>>(
                    suffix,
                    logger,
                    message_queue));
        }
    };

    template <class T>
    struct SubscribeProfileReader {

        static void handle(const TopicNameSuffix& suffix, api::Logger /*logger*/, api::subscriber_one_t<T> /*bus*/, message_queue_ptr_t /*message_queue*/, SubscriptionRegistry& registry)
        {
            registry.add_handler<T>(suffix);
        }
    };

    Plugin::Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus)
        : connect_retry_delay(
              std::chrono::milliseconds(util::yaml::require_integer<uint32_t>(node, keys::connect_retry_delay_ms)))
        , message_queue(
              std::make_shared<message_queue_t>(util::yaml::require_integer<uint16_t>(node, keys::max_queued_messages)))
        , logger(logger)
        , client(
              util::yaml::require_string(node, keys::server_address),
              util::yaml::require_string(node, keys::client_id))
        , registry(logger, bus)
    {
        client.set_callback(*this);

        // TODO - make certain standard options configurable
        options.set_keep_alive_interval(20);
        options.set_clean_session(false);

        this->configure_tls_options(util::yaml::require(node, util::keys::security));

        this->configure_pub_sub(node, std::move(bus));
    }

    Plugin::~Plugin()
    {
        if (thread) {
            this->shutdown = true;
            this->thread->join();
        }
    }

    void Plugin::start()
    {
        if (this->thread) {
            throw api::Exception("plugin already started");
        }
        this->thread = std::make_unique<std::thread>([this]() { this->run(); });
    }

    void Plugin::message_arrived(::mqtt::const_message_ptr msg)
    {
        this->registry.handle(std::move(msg));
    }

    void Plugin::run()
    {
        while (!this->shutdown) {

            try {
                this->client.connect(this->options)->wait();

                this->logger.info("connected to MQTT server");

                this->registry.subscribe(client);

                this->process_messages();

                this->client.disconnect()->wait();
            } catch (const ::mqtt::exception& ex) {
                this->logger.error("Error connecting to MQTT server: {}", ex.what());
            }

            if (!this->shutdown) {
                std::this_thread::sleep_for(this->connect_retry_delay);
            }
        }
    }

    void Plugin::process_messages()
    {
        // all we have to do is run the publishing loop
        while (!this->shutdown) {
            const auto message = this->message_queue->pop(std::chrono::milliseconds(500));
            if (message) {
                try {
                    this->client.publish(message->subject, message->buffer.data(), message->buffer.length())->wait();
                    logger.debug("published message to topic: {} w/ length {}", message->subject, message->buffer.length());
                } catch (const ::mqtt::exception& ex) {
                    logger.warn("Failed to publish message to topic: {} w/ error: {}", message->subject, ex.get_message());
                    return;
                }
            } else {
                // check to see if we're disconnected
                if (!this->client.is_connected()) {
                    return;
                }
            }
        }
    }

    void Plugin::configure_tls_options(const YAML::Node& node)
    {
        const auto sec_type = util::yaml::require_enum<SecurityType>(node);
        switch (sec_type) {
            case (SecurityType::Value::none):
                break; // we're done, nothing to configure
            case (SecurityType::Value::tls_mutual_auth):
                this->read_tls_config(node, true);
                break;
            case (SecurityType::Value::tls_server_auth):
                this->read_tls_config(node, false);
                break;
            default:
                throw api::Exception("Unsupported security type: ", SecurityType::to_string(sec_type));
        }
    }

    void Plugin::read_tls_config(const YAML::Node& node, bool mutual_auth)
    {
        this->ssl_options.set_enable_server_cert_auth(true); // always verify the server

        // always load the CA files for verifying the server
        this->ssl_options.set_trust_store(
                util::yaml::require_string(node, util::keys::ca_trusted_cert_file)
        );

        // Load username/password if provided
        if(node[keys::username]) {
            this->options.set_user_name(util::yaml::require_string(node, keys::username));
            this->options.set_password(util::yaml::require_string(node, keys::password));
        }

        if(mutual_auth) {
            // client certificate chain
            this->ssl_options.set_key_store(util::yaml::require_string(node, util::keys::client_cert_chain_file));
            // client private key
            this->ssl_options.set_private_key(util::yaml::require_string(node, util::keys::client_private_key_file));
        }

        this->options.set_ssl(this->ssl_options);
    }

    void Plugin::configure_pub_sub(const YAML::Node& node, api::message_bus_t bus)
    {
        // configure publishers
        util::yaml::foreach (
                util::yaml::require(node, util::keys::publish),
                [&](const YAML::Node& entry) {
                    api::ProfileRegistry::handle_by_name<PublishProfileReader>(
                            util::yaml::require_string(entry, util::keys::profile),
                            TopicNameSuffix(util::yaml::require_string(entry, keys::topic_suffix)),
                            this->logger,
                            bus,
                            this->message_queue,
                            this->registry);
                });

        // configure subscribers
        util::yaml::foreach (
                util::yaml::require(node, util::keys::subscribe),
                [&](const YAML::Node& entry) {
                    api::ProfileRegistry::handle_by_name<SubscribeProfileReader>(
                            util::yaml::require_string(entry, util::keys::profile),
                            TopicNameSuffix(util::yaml::require_string(entry, keys::topic_suffix)),
                            this->logger,
                            bus,
                            this->message_queue,
                            this->registry);
                });
    }
}
}
