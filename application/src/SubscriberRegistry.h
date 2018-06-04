
#ifndef OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H
#define OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H

#include "adapter-api/ISubscriber.h"

#include <vector>

namespace adapter
{
    template <class T>
    class SubscriberRegistry final
    {

    public:

        SubscriberRegistry() = default;

        void publish(const T& message)
        {
            for(auto& sub : this->subscribers)
            {
                sub->receive(message);
            }
        }

        void add(subscriber_t<T> subscriber)
        {
            this->subscribers.push_back(std::move(subscriber));
        }

    private:

        // all of the subscribers for a particular type
        std::vector<subscriber_t<T>> subscribers;
    };

}

#endif
