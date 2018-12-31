#ifndef OPENFMB_ADAPTER_MQTT_TOPICHANDLER_H
#define OPENFMB_ADAPTER_MQTT_TOPICHANDLER_H

#include <adapter-api/Logger.h>
#include <adapter-api/IPublisher.h>

#include "ITopicHandler.h"

namespace adapter {
namespace mqtt {

    template <class T>
    class TopicHandler : public ITopicHandler {

        api::Logger logger;
        const api::publisher_t publisher;

    public:

        TopicHandler(api::Logger, api::publisher_t publisher);

        void handle(::mqtt::const_message_ptr msg) override;

    };

    template <class T>
    TopicHandler<T>::TopicHandler(api::Logger logger, api::publisher_t publisher) :
        logger(logger),
        publisher(std::move(publisher))
    {}


    template <class T>
    void TopicHandler<T>::handle(::mqtt::const_message_ptr msg)
    {
        T profile;

        if(profile.ParseFromArray(msg->get_payload().data(), msg->get_payload().length()))
        {
            publisher->publish(profile);
        }
        else
        {
            this->logger.warn("Deserialization failed for topic {} w/ length {}", msg->get_topic(), msg->get_payload().length());
        }
    }
}
}

#endif
