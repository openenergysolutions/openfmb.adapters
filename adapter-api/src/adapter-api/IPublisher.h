
#ifndef OPENFMB_ADAPTER_IPUBLISHER_H
#define OPENFMB_ADAPTER_IPUBLISHER_H

#include <memory>

namespace adapter
{

    /**
     * Interface use to publish a particular kind of message to the adapter's internal bus
     *
     * @tparam T type of message being published
     */
    template <class T>
    class IPublisher
    {
    public:
        virtual ~IPublisher() = default;

        /**
         * Publish a message to the bus. The message is immutable and must be completely
         * published, transformed, or copied before this call returns.
         *
         * @param message The message to publish to the internal bus.
         */
        virtual void publish(const T& message) = 0;
    };

    /**
     * Copyable wrapper to an abstract publisher
     */
    template <class T>
    class Publisher
    {
    public:

        Publisher(std::shared_ptr<IPublisher<T>> impl) : impl(impl)
        {}

        inline void publish(const T& message)
        {
            impl->publish(message);
        }

    private:

        const std::shared_ptr<IPublisher<T>> impl;
    };

}

#endif
