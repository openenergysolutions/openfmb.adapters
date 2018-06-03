
#ifndef OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H
#define OPENFMB_ADAPTER_SUBSCRIBER_REGISTRY_H

#include "adapter-api/util/Exception.h"
#include "adapter-api/ISubscriber.h"

#include <vector>

namespace adapter
{
    template <class T>
    class SubscriberRegistry final
    {

    public:

        SubscriberRegistry() = default;

        virtual void publish(const T& message)
        {
            if(!is_finalized)
            {
                throw Exception("Message published before subscriber finalization");
            }

            for(auto& sub : subscribers)
            {
                sub->receive(message);
            }
        }

        void add(subscriber_t<T> subscriber)
        {
            if(is_finalized)
            {
                throw Exception("Subscriber added after subscriber finalization");
            }

            subscribers.push_back(subscriber);
        }

        void finalize()
        {
            is_finalized = true;
        }

    private:

        bool is_finalized = false;

        // all of the subscribers for a particular type
        std::vector<subscriber_t<T>> subscribers;
    };

}

#endif
