#ifndef OPENFMB_ADAPTER_MQTT_SUBSCRIPTIONREGISTRY_H
#define OPENFMB_ADAPTER_MQTT_SUBSCRIPTIONREGISTRY_H

#include "TopicHandler.h"
#include "TopicNameSuffix.h"
#include "TopicName.h"

#include <mqtt/async_client.h>

#include <map>
#include <sstream>

namespace adapter {
namespace mqtt {

    class SubscriptionRegistry {

        api::Logger logger;
        api::publisher_t publisher;
        std::vector<std::string> topics;
        std::map<std::string, std::unique_ptr<ITopicHandler>> handlers;

    public:

        SubscriptionRegistry(api::Logger logger, api::publisher_t publisher) :
                logger(std::move(logger)), publisher(std::move(publisher))
        {}

        void subscribe(::mqtt::async_client& client);

        bool handle(::mqtt::const_message_ptr msg);

        template <class T>
        void add_handler(const TopicNameSuffix& suffix);
    };

    template <class T>
    void SubscriptionRegistry::add_handler(const TopicNameSuffix& suffix)
    {
        this->topics.emplace_back(get_subscribe_topic_name<T>(suffix));
        this->handlers[get_base_topic_name<T>()] = std::make_unique<TopicHandler<T>>(
                this->logger,
                this->publisher
        );
    }
}
}

#endif
