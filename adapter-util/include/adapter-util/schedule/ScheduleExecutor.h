#ifndef OPENFMB_ADAPTER_SCHEDULEEXECUTOR_H
#define OPENFMB_ADAPTER_SCHEDULEEXECUTOR_H

#include <exe4cpp/IExecutor.h>
#include <boost/uuid/random_generator.hpp>
#include <adapter-api/ISubscriptionHandler.h>

#include "adapter-util/schedule/ScheduleSplit.h"

namespace adapter
{
namespace util
{

template <typename T>
class ScheduleExecutor
{
public:
    explicit ScheduleExecutor(std::shared_ptr<exe4cpp::IExecutor> executor, api::subscription_handler_t<T> handler)
        : m_executor{std::move(executor)},
          m_handler{std::move(handler)}
    {
    }

    void receive(const T& message)
    {
        auto result = split(message, m_rg);
        m_executor->post([handler = m_handler, msg = std::shared_ptr<T>(std::move(result.now))]() {
            handler->receive(*msg);
        });

        const auto now_system = std::chrono::system_clock::now();
        const auto now_steady = m_executor->get_time();
        for(auto it = result.later.begin(); it != result.later.end(); ++it)
        {
            auto steady_time = now_steady + (it->first - now_system);
            m_executor->start(steady_time, [handler = m_handler, msg = std::shared_ptr<T>(std::move(it->second))] {
                handler->receive(*msg);
            });
        }
    }

private:
    std::shared_ptr<exe4cpp::IExecutor> m_executor;
    api::subscription_handler_t<T> m_handler;
    boost::uuids::random_generator m_rg;
};

}
}

#endif //OPENFMB_ADAPTER_SCHEDULEEXECUTOR_H