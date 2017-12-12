

#ifndef OPENFMB_ADAPTER_SHUTDOWN_H
#define OPENFMB_ADAPTER_SHUTDOWN_H

#include <csignal>
#include <mutex>
#include <condition_variable>

class Shutdown
{

public:

    static void await(int signum)
    {
        auto is_shutdown = []() -> bool { return shutdown; };

        signal(signum, Shutdown::handle);
        std::unique_lock<std::mutex> lock(mutex);
        condition.wait(lock, is_shutdown);
    }

    static void handle(int signum)
    {
        {
            std::unique_lock<std::mutex> lock(mutex);
            shutdown = true;
        }

        condition.notify_one();
    }

private:

    Shutdown() = delete;

    static std::mutex mutex;
    static std::condition_variable condition;
    static bool shutdown;
};

std::mutex Shutdown::mutex;
std::condition_variable Shutdown::condition;
bool Shutdown::shutdown(false);

#endif //OPENFMB_ADAPTER_SHUTDOWN_H
