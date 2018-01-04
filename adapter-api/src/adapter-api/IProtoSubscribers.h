
#ifndef OPENFMB_ADAPTER_IPROTOSUBSCRIBERS_H
#define OPENFMB_ADAPTER_IPROTOSUBSCRIBERS_H

#include "proto/resourcemodule/resourcemodule.pb.h"

#include "ISubscriber.h"

#include <memory>

namespace openfmb
{

    /**
    * Interface used to subscribe to messages internally to the adapter application
    */
    class IProtoSubscribers
    {

    public:

        typedef std::shared_ptr<ISubscriber<resourcemodule::ResourceReadingProfile>> rrp_subscriber_t;

        virtual ~IProtoSubscribers() {}

        /**
         * Register a subscriber to receive ResourceReadingProfile messages
         *
         * @param subscriber interface to invoke when messages are published
         */
        virtual void subscribe(const rrp_subscriber_t& subscriber) = 0;
    };
}

#endif
