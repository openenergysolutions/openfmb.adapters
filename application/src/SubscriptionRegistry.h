// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_SUBSCRIPTIONREGISTRY_H
#define OPENFMB_ADAPTER_SUBSCRIPTIONREGISTRY_H

#include <adapter-api/Exception.h>
#include <adapter-api/ISubscriptionHandler.h>

#include <mutex>
#include <vector>

namespace adapter {
template <class T>
class SubscriptionRegistry final {

public:
    SubscriptionRegistry() = default;

    void finalize()
    {
        std::lock_guard<std::mutex> lock(this->mutex);

        if (finalized)
            throw api::Exception("Already finalized");
        this->finalized = true;
    }

    void shutdown()
    {
        std::lock_guard<std::mutex> lock(this->mutex);

        this->subscriptions.clear();
    }

    void publish(const T& message)
    {
        std::lock_guard<std::mutex> lock(this->mutex);

        if (!this->finalized)
            throw api::Exception("Publish(..) called before finalization");

        for (auto& sub : this->subscriptions) {
            sub->receive(message);
        }
    }

    void add(api::subscription_handler_t<T> handler)
    {
        std::lock_guard<std::mutex> lock(this->mutex);

        if (finalized)
            throw api::Exception("Subscribe(..) called after finalization");

        this->subscriptions.push_back(std::move(handler));
    }

private:
    std::mutex mutex;

    bool finalized = false;

    // all of the subscribers for a particular type
    std::vector<api::subscription_handler_t<T>> subscriptions;
};
}

#endif
