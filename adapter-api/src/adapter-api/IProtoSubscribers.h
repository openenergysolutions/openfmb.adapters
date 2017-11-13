
#ifndef OPENFMB_ADAPTER_IPROTOSUBSCRIBERS_H
#define OPENFMB_ADAPTER_IPROTOSUBSCRIBERS_H

#include "proto/ResourceReadingProfile.pb.h"

#include "ISubscriber.h"

#include <memory>

namespace openfmb {

    /**
    * Interface used to subscribe to messages internally to the adapter application
    */
    class IProtoSubscribers {

    public:

        virtual ~IProtoSubscribers() {}

        /**
         * Register a subscriber to receive ResourceReadingProfile messages
         *
         * @param subscriber interface to invoke when messages are published
         */
        virtual void subscribe(const std::shared_ptr<ISubscriber<ResourceReadingProfile>>& subscriber) = 0;
    };
}

#endif
