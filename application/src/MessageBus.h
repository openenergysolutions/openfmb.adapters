
#ifndef OPENFMB_ADAPTER_MESSAGEBUS_H
#define OPENFMB_ADAPTER_MESSAGEBUS_H

#include "adapter-api/IMessageBus.h"
#include "adapter-api/ProfileRegistry.h"

#include "SubscriberRegistry.h"


namespace adapter
{
    template <class... Ps>
    class SingleMessageBus;

    template <class P>
    class SingleMessageBus<P> : public IMessageBus
    {
        public:

        void publish(const P& message) override
        {
            this->registry->publish(message);
        }

        void subscribe(subscriber_t<P> subscriber) override
        {
            this->registry->add(std::move(subscriber));
        }

        void finalize()
        {
            this->registry->finalize();
        }

        void shutdown()
        {
            this->registry->shutdown();
        }

        private:

        const std::shared_ptr<SubscriberRegistry<P>> registry = std::make_shared<SubscriberRegistry<P>>();
    };

    template <class P, class... Ps>
    class SingleMessageBus<P, Ps...> : public SingleMessageBus<Ps...>
    {
    public:

        void publish(const P& message) override
        {
            this->registry->publish(message);
        }

        void subscribe(subscriber_t<P> subscriber) override
        {
            this->registry->add(std::move(subscriber));
        }

        void finalize()
        {
            this->registry->finalize();
            SingleMessageBus<Ps...>::finalize();
        }

        void shutdown()
        {
            this->registry->shutdown();
            SingleMessageBus<Ps...>::shutdown();
        }

    private:

        const std::shared_ptr<SubscriberRegistry<P>> registry = std::make_shared<SubscriberRegistry<P>>();
    };

    template <template <class...> class R, class...Ps>
    class SingleMessageBus<R<Ps...>> : public SingleMessageBus<Ps...>
    {};

    class MessageBus : public SingleMessageBus<ProfileRegistry> {};


}

#endif
