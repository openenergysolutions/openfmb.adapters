#ifndef OPENFMB_ADAPTER_SYNCHRONIZEDQUEUE_H
#define OPENFMB_ADAPTER_SYNCHRONIZEDQUEUE_H

#include <deque>
#include <mutex>
#include <condition_variable>
#include <chrono>

namespace openfmb
{



    template <class T>
    class SynchronizedQueue
    {

    public:

        SynchronizedQueue(size_t max_queue_size) : max_queue_size(max_queue_size)
        {

        }

        bool push(std::unique_ptr<T> item)
        {
            std::unique_lock<std::mutex> lock(this->mutex);
            this->items.push_back(std::move(item));
            const auto trimmed = this->trim_old_item();

            lock.unlock();
            this->condition.notify_one();
            return !trimmed;
        }

        std::unique_ptr<T> wait(const std::chrono::steady_clock::duration& duration)
        {
            std::unique_lock<std::mutex> lock(this->mutex);
            const auto success = this->condition.wait_for(lock, duration, [this]() -> bool { return !this->items.empty(); });
            if(success)
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

}

#endif //OPENFMB_ADAPTER_PUBLISHQUEUE_H
