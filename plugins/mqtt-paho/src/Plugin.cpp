

#include "Plugin.h"

#include <adapter-util/util/YAMLUtil.h>

#include "MQTTPublisher.h"

namespace adapter {
namespace mqtt {

    Plugin::Plugin(const api::Logger& logger, const YAML::Node& node, api::message_bus_t bus) :
        message_queue(
                std::make_shared<message_queue_t>(util::yaml::require_integer<uint16_t>(node, "max-queued-messages"))
        ),
        logger(logger),
        client(
                util::yaml::require_string(node, "server-address"),
                util::yaml::require_string(node, "client-id")
        )
    {
        // TODO - make certain standard options configurable
        options.set_keep_alive_interval(20);
        options.set_clean_session(true);
    }

    Plugin::~Plugin()
    {
        if(thread) {
            this->shutdown = true;
            this->thread->join();
        }
    }

    void Plugin::start()
    {
        if(this->thread) {
            throw api::Exception("plugin already started");
        }
        this->thread = std::make_unique<std::thread>([this](){ this->run(); });
    }

    void Plugin::run()
    {
        while(!this->shutdown) {

            try {
                this->client.connect(this->options);
                // TODO - apply subscriptions
                this->process_messages();

                this->client.disconnect()->wait();
            }
            catch(const ::mqtt::exception& ex) {
                this->logger.error("Error connecting to MQTT server: {}", ex.get_message());
            }

            if(!this->shutdown) {
                std::this_thread::sleep_for(std::chrono::seconds(5));
            }
        }
    }

    void Plugin::process_messages()
    {
        // all we have to do is run the publishing loop
        while(!this->shutdown) {
            const auto message = this->message_queue->pop(std::chrono::milliseconds(500));
            if(message) {
                try {
                    this->client.publish(message->subject, message->buffer.data(), message->buffer.length())->wait();
                }
                catch(const ::mqtt::exception& ex) {
                    logger.warn("Failed to publish message to topic: {} w/ error: {}", message->subject, ex.get_message());
                    return;
                }
            } else {
                // check to see if we're disconnected
                if(!this->client.is_connected()) {
                    return;
                }
            }
        }
    }
}
}
