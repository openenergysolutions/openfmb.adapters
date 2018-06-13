
#ifndef OPENFMB_ADAPTER_IMESSAGEBUS_H
#define OPENFMB_ADAPTER_IMESSAGEBUS_H

#include "IPublisher.h"
#include "ISubscriber.h"

namespace adapter
{

    /**
     * Interface used to publish and subscribe to messages
     */
    class IMessageBus : public IPublisher
    {

    public:

        virtual ~IMessageBus() = default;

        /**
         * methods for subscribing to the profiles
         *
         * These can only be called during initialization, and will throw an exception afterwards
         */

        virtual void subscribe(subscriber_t<resourcemodule::ResourceReadingProfile> subscriber) = 0;

        virtual void subscribe(subscriber_t<switchmodule::SwitchControlProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<switchmodule::SwitchReadingProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<switchmodule::SwitchStatusProfile> subscriber) = 0;

        virtual void subscribe(subscriber_t<essmodule::ESSReadingProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<essmodule::ESSStatusProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<essmodule::ESSControlProfile> subscriber) = 0;

        virtual void subscribe(subscriber_t<solarmodule::SolarReadingProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<solarmodule::SolarStatusProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<solarmodule::SolarControlProfile> subscriber) = 0;

        virtual void subscribe(subscriber_t<loadmodule::LoadReadingProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<loadmodule::LoadStatusProfile> subscriber) = 0;
        virtual void subscribe(subscriber_t<loadmodule::LoadControlProfile> subscriber) = 0;
    };

    using message_bus_t = std::shared_ptr<IMessageBus>;

}

#endif
