
#ifndef OPENFMB_ADAPTER_IPUBLISHER_H
#define OPENFMB_ADAPTER_IPUBLISHER_H

#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>
#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/solarmodule/solarmodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

#include "ProfileRegistry.h"
#include <memory>

namespace adapter {
template <class... Ts>
class IPublishOne;

template <class T>
class IPublishOne<T> {
public:
    virtual ~IPublishOne() = default;

    virtual void publish(const T& message) = 0;
};

template <class T, class... Ts>
class IPublishOne<T, Ts...> : public IPublishOne<Ts...> {
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
template <template <class...> class R, class... Ts>
class IPublishOne<R<Ts...>> : public IPublishOne<Ts...> {
public:
    virtual ~IPublishOne() = default;
};

/**
     * Interface used to publish profiles to the bus
     */
class IPublisher : public IPublishOne<ProfileRegistry> {
public:
    virtual ~IPublisher() = default;
};

using publisher_t = std::shared_ptr<IPublisher>;
}

#endif
