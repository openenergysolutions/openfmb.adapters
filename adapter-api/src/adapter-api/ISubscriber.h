
#ifndef OPENFMB_ADAPTER_ISUBSCRIBER_H
#define OPENFMB_ADAPTER_ISUBSCRIBER_H


namespace adapter
{

    /**
     * Callback interface invoked to notify a subscriber of a new message
     *
     * @tparam T type of message the subscriber processes
     */
    template <class T>
    class ISubscriber
    {
    public:
        virtual ~ISubscriber() = default;

        /**
         * Callback method invoked when a message of this type is published
         *
         * @param message The message received from the internal bus
         */
        virtual void receive(const T& message) = 0;
    };

    /**
     * Copyable wrapper to an abstract subscriber
     */
    template <class T>
    class Subscriber
    {
    public:

        Subscriber(std::shared_ptr<ISubscriber<T>> impl) : impl(impl)
        {}

        inline void receive(const T& message)
        {
            impl->receive(message);
        }

    private:

        const std::shared_ptr<ISubscriber<T>> impl;
    };
}

#endif
