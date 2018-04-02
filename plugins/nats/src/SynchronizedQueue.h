#ifndef OPENFMB_ADAPTER_NATS_SYNCHRONIZEDQUEUE_H
#define OPENFMB_ADAPTER_NATS_SYNCHRONIZEDQUEUE_H

#include <deque>
#include <mutex>
#include <condition_variable>
#include <chrono>

namespace adapter
{
    namespace nats
    {
        template <class T>
        class SynchronizedQueue
        {

        public:

            SynchronizedQueue(size_t max_queue_size) : max_queue_size(max_queue_size)
            {}

            /**
             * Push a value into the queue
             *
             * @param item to be moved into the queue
             * @return true if the value was added without popping another item to make space
             */
            bool push(std::unique_ptr<T> item);

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
                if (this->items.size() > this->max_queue_size)
                {
                    this->items.pop_front();
                    return true;
                }
                else
                {
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
        std::unique_ptr<T> SynchronizedQueue<T>::pop(const std::chrono::steady_clock::duration& duration)
        {
            const auto has_item = [this]() -> bool { return !this->items.empty(); };

            std::unique_lock<std::mutex> lock(this->mutex);

            if(this->condition.wait_for(lock, duration, has_item))
            {
                auto ret = std::move(this->items.front());
                this->items.pop_front();
                return std::move(ret);
            }
            else
            {
                return nullptr;
            }
        }
    }
}

#endif
