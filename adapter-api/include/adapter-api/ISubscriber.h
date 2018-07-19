
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

        void receive(const T& message)
        {
            if(this->matches(message))
            {
                this->process(message);
            }
        }

    protected:

        virtual bool matches(const T& message) const
        {
            return true;
        }

        /**
         * Callback method invoked when a message of this type is published
         *
         * @param message The message received from the internal bus
         */
        virtual void process(const T& message) = 0;
    };

    template <class T>
    using subscriber_t = std::shared_ptr<ISubscriber<T>>;
}

#endif
