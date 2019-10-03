
#ifndef OPENFMB_ADAPTER_IPUBLISHER_H
#define OPENFMB_ADAPTER_IPUBLISHER_H

#include "ProfileRegistry.h"

#include <memory>

namespace adapter {
namespace api {
    template <class... Ts>
    class IPublishOne;

    template <class T>
    class IPublishOne<T> {
    public:
        virtual ~IPublishOne() = default;

        virtual void publish(const T& message) = 0;
    };

    template <class T, class... Ts>
    class IPublishOne<T, Ts...> : public IPublishOne<T>, public IPublishOne<Ts...>
    {
    public:
        virtual ~IPublishOne() = default;
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

    template <typename T>
    using publisher_one_t = std::shared_ptr<IPublishOne<T>>;
}
}

#endif
