
#ifndef OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H
#define OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H

#include "adapter-api/ISubscriptionHandler.h"
#include "adapter-api/util/Exception.h"

#include <vector>
#include <mutex>

namespace adapter
{
    template <class T>
    class SubscriberRegistry final
    {

    public:

        SubscriberRegistry() = default;

        void finalize()
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            if(finalized) throw Exception("Already finalized");
            this->finalized = true;
        }

        void shutdown()
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            this->subscribers.clear();
        }

        void publish(const T& message)
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            if(!this->finalized) throw Exception("Publish(..) called before finalization");

            for(auto& sub : this->subscribers)
            {
                sub->receive(message);
            }
        }

        void add(subscriber_t<T> subscriber)
        {
            std::lock_guard<std::mutex> lock(this->mutex);

            if(finalized) throw Exception("Subscribe(..) called after finalization");

            this->subscribers.push_back(std::move(subscriber));
        }

    private:

        std::mutex mutex;

        bool finalized = false;

        // all of the subscribers for a particular type
        std::vector<subscriber_t<T>> subscribers;
    };

}

#endif
