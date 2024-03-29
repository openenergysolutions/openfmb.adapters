// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ISUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_ISUBSCRIPTIONHANDLER_H

namespace adapter {
namespace api {

    /**
     * Callback interface invoked to notify a subscriber of a new message
     *
     * @tparam T type of message the subscriber processes
     */
    template <class T>
    class ISubscriptionHandler {
    public:
        virtual ~ISubscriptionHandler() = default;

        void receive(const T& message)
        {
            if (this->matches(message)) {
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
    using subscription_handler_t = std::shared_ptr<ISubscriptionHandler<T>>;
}
}

#endif
