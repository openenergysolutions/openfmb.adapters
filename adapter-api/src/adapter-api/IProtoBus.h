
#ifndef OPENFMB_ADAPTER_IPROTOBUS_H
#define OPENFMB_ADAPTER_IPROTOBUS_H

#include "proto/ResourceReadingProfile.pb.h"

#include <memory>

namespace openfmb {

    /**
     * @tparam T type of message the subscriber processes
     */
    template <class T>
    class Subscriber {
    public:
        virtual ~Subscriber() {}

        /**
         * Callback method invoked when a message of this type is published
         *
         * @param message The message received from the internal bus
         */
        virtual void receive(const T& message) = 0;
    };

    /**
     * Interface used to publish and subscribe to messages internally to the adapter application
     */
    class IProtoBus {

    public:

        /**
         * Publish a ResourceReadingProfile message
         *
         * @param profile object to publish
         */
        virtual void publish(const ResourceReadingProfile& profile) = 0;

        /**
         * Register a subscriber to receive ResourceReadingProfile messages
         *
         * @param subscriber interface to invoke when messages are published
         */
        virtual void subscribe(const std::shared_ptr<Subscriber<ResourceReadingProfile>>& subscriber) = 0;

    };
}

#endif
