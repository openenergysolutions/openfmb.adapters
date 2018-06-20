
#ifndef OPENFMB_ADAPTER_IEVENTSOURCE_H
#define OPENFMB_ADAPTER_IEVENTSOURCE_H

#include "IPublisher.h"
#include "ISubscriptionHandler.h"

namespace adapter
{

    template <class ... Ts>
    class ISubscribeOne;

    template <class T>
    class ISubscribeOne<T>
    {
    public:
        virtual ~ISubscribeOne() = default;

        virtual void publish(const T& message) = 0;
    };

    template <class T, class ... Ts>
    class IPublishOne<T, Ts...> : public IPublishOne<Ts...>
    {
    public:
        virtual ~IPublishOne() = default;

        // don't hide implementation in base class
        using IPublishOne<Ts...>::publish;

        virtual void publish(const T& message) = 0;
    };

    /**
     * Specialization so that we can use this in conjunction with the ProfileRegistry list
     *
     * @tparam R ProfileList type
     * @tparam Ts list of profiles to implement
     */
    template <template <class ...> class R, class ... Ts>
    class IPublishOne<R<Ts...>> : public IPublishOne<Ts...>
    {
    public:
        virtual ~IPublishOne() = default;
    };

    /**
     * Interface used to publish profiles to the bus
     */
    class IPublisher : public IPublishOne<ProfileRegistry>
    {
    public:
        virtual ~IPublisher() = default;
    };

    using publisher_t = std::shared_ptr<IPublisher>;

    using message_bus_t = std::shared_ptr<IEventSource>;

}

#endif
