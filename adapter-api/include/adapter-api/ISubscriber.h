
#ifndef OPENFMB_ADAPTER_ISUBSCRIBER_H
#define OPENFMB_ADAPTER_ISUBSCRIBER_H

#include "ISubscriptionHandler.h"
#include "ProfileRegistry.h"

namespace adapter
{

    template <class ... Ts>
    class ISubscribeOne;

    template <class T>
    class ISubscribeOne<T>
    {
    public:
        virtual ~ISubscribeOne() = default;

        virtual void subscribe(subscription_handler_t<T> handler) = 0;
    };

    template <class T, class ... Ts>
    class ISubscribeOne<T, Ts...> : public ISubscribeOne<Ts...>
    {
    public:
        virtual ~ISubscribeOne() = default;

        // don't hide implementation in base class
        using ISubscribeOne<Ts...>::subscribe;

        virtual void subscribe(subscription_handler_t<T> handler) = 0;
    };

    /**
     * Specialization so that we can use this in conjunction with the ProfileRegistry list
     *
     * @tparam R ProfileList type
     * @tparam Ts list of profiles to implement
     */
    template <template <class ...> class R, class ... Ts>
    class ISubscribeOne<R<Ts...>> : public ISubscribeOne<Ts...>
    {
    public:
        virtual ~ISubscribeOne() = default;
    };

    /**
     * Interface used to publish profiles to the bus
     */
    class ISubscriber : public ISubscribeOne<ProfileRegistry>
    {
    public:
        virtual ~ISubscriber() = default;
    };

    using subscriber_t = std::shared_ptr<ISubscriber>;

}

#endif
