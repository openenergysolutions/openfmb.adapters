
#ifndef OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H
#define OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H

#include "adapter-api/ISubscriber.h"

#include <vector>
#include <mutex>

namespace adapter
{
    template <class T>
    class SubscriberRegistry final
    {

    public:

        SubscriberRegistry() = default;

        void shutdown()
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            this->subscribers.clear();
        }

        void publish(const T& message)
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            for(auto& sub : this->subscribers)
            {
                sub->receive(message);
            }
        }

        void add(subscriber_t<T> subscriber)
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            this->subscribers.push_back(std::move(subscriber));
        }

    private:

        std::mutex mutex;

        // all of the subscribers for a particular type
        std::vector<subscriber_t<T>> subscribers;
    };

}

#endif
