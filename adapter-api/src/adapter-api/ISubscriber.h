
#ifndef OPENFMB_ADAPTER_ISUBSCRIBER_H
#define OPENFMB_ADAPTER_ISUBSCRIBER_H

namespace openfmb {

    /**
     * Callback interface invoked to notify a subscriber of a new message
     *
     * @tparam T type of message the subscriber processes
     */
    template <class T>
    class ISubscriber {
    public:
        virtual ~ISubscriber() {}

        /**
         * Callback method invoked when a message of this type is published
         *
         * @param message The message received from the internal bus
         */
        virtual void receive(const T& message) = 0;
    };

}

#endif
