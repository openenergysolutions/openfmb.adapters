
#ifndef OPENFMB_ADAPTER_IMESSAGEBUS_H
#define OPENFMB_ADAPTER_IMESSAGEBUS_H

#include "proto/resourcemodule/resourcemodule.pb.h"

#include "IPublisher.h"
#include "ISubscriber.h"

namespace adapter
{

    /**
     * Interface used to publish and subscribe to messages
     */
    class IMessageBus
    {

    public:

        virtual ~IMessageBus() = default;

        /// --- methods for subscribing to the profiles ---
        virtual void subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber) = 0;

        // specializations of this helper all the protected methods below
        template <class T>
        publisher_t<T> get_publisher();

    protected:

        /// --- getters for various publishers ---
        virtual publisher_t<resourcemodule::ResourceReadingProfile> get_resource_reading_publisher() = 0;

    };

}

#endif
