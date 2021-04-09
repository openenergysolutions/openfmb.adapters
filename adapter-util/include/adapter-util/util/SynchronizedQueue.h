// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_SYNCHRONIZEDQUEUE_H
#define OPENFMB_ADAPTER_SYNCHRONIZEDQUEUE_H

#include <chrono>
#include <condition_variable>
#include <deque>
#include <mutex>

namespace adapter {
namespace util {
    template <class T>
    class SynchronizedQueue {

    public:
        SynchronizedQueue(size_t max_queue_size)
            : max_queue_size(max_queue_size)
        {
        }

        /**
         * Push a value into the queue
         *
         * @param item to be moved into the queue
         * @return true if the value was added without popping another item to make space
         */
        bool push(std::unique_ptr<T> item);

        /**
         * Push a value onto the front of the queue. This will be the next value to be pop.
         *
         * @param item to be moved into the queue
         * @return true if the value was added successfully.
         */
        bool push_front(std::unique_ptr<T> item);

        /**
         * Try to pop an item from the queue within the specified timeout
         *
         * @param timeout Maximum time to wait for a value to be available
         * @return An available value or nullptr upon timeout
         */
        std::unique_ptr<T> pop(const std::chrono::steady_clock::duration& timeout);

    private:
        bool trim_old_item()
        {
            if (this->items.size() > this->max_queue_size) {
                this->items.pop_front();
                return true;
            } else {
                return false;
            }
        }

        std::mutex mutex;
        std::condition_variable condition;

        size_t max_queue_size;

        std::deque<std::unique_ptr<T>> items;
    };

    template <class T>
    bool SynchronizedQueue<T>::push(std::unique_ptr<T> item)
    {
        std::unique_lock<std::mutex> lock(this->mutex);
        this->items.push_back(std::move(item));
        const auto trimmed = this->trim_old_item();

        lock.unlock();
        this->condition.notify_one();
        return !trimmed;
    }

    template <class T>
    bool SynchronizedQueue<T>::push_front(std::unique_ptr<T> item)
    {
        std::unique_lock<std::mutex> lock(this->mutex);
        this->items.push_front(std::move(item));
        const auto trimmed = this->trim_old_item();

        lock.unlock();
        this->condition.notify_one();
        return !trimmed;
    }

    template <class T>
    std::unique_ptr<T> SynchronizedQueue<T>::pop(const std::chrono::steady_clock::duration& duration)
    {
        const auto has_item = [this]() -> bool { return !this->items.empty(); };

        std::unique_lock<std::mutex> lock(this->mutex);

        if (this->condition.wait_for(lock, duration, has_item)) {
            auto ret = std::move(this->items.front());
            this->items.pop_front();
            return std::move(ret);
        } else {
            return nullptr;
        }
    }
}
}

#endif
