
#ifndef OPENFMB_ADAPTER_MESSAGEBUS_H
#define OPENFMB_ADAPTER_MESSAGEBUS_H

#include "adapter-api/ProfileRegistry.h"
#include <adapter-api/IMessageBus.h>

#include "SubscriptionRegistry.h"

namespace adapter {
template <class... Ps>
class SingleMessageBus;

template <class P>
class SingleMessageBus<P> : public api::IMessageBus {
public:
    virtual ~SingleMessageBus() = default;

    void publish(const P& message) override
    {
        this->registry->publish(message);
    }

    void subscribe(api::subscription_handler_t<P> handler) override
    {
        this->registry->add(std::move(handler));
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
    const std::shared_ptr<SubscriptionRegistry<P>> registry = std::make_shared<SubscriptionRegistry<P>>();
};

template <class P, class... Ps>
class SingleMessageBus<P, Ps...> : public SingleMessageBus<Ps...> {
public:
    virtual ~SingleMessageBus() = default;

    void publish(const P& message) override
    {
        this->registry->publish(message);
    }

    void subscribe(api::subscription_handler_t<P> handler) override
    {
        this->registry->add(std::move(handler));
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
    const std::shared_ptr<SubscriptionRegistry<P>> registry = std::make_shared<SubscriptionRegistry<P>>();
};

/**
     * Specialization that allows us to use the ProfileRegistry
     * @tparam R ProfileRegistry type
     * @tparam Ps List of profiles to implement
     */
template <template <class...> class R, class... Ps>
class SingleMessageBus<R<Ps...>> : public SingleMessageBus<Ps...> {
public:
    virtual ~SingleMessageBus() = default;
};

/**
     * Concrete implementation based on the ProfileRegistry
     */
class MessageBus final : public SingleMessageBus<api::ProfileRegistry> {
};
}

#endif
