#ifndef OPENFMB_ADAPTER_SCHEDULEEXECUTOR_H
#define OPENFMB_ADAPTER_SCHEDULEEXECUTOR_H

#include <exe4cpp/IExecutor.h>
#include <boost/uuid/random_generator.hpp>
#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>

#include "adapter-util/schedule/ScheduleSplit.h"

namespace adapter
{
namespace util
{

template <typename T>
class ScheduleExecutor : public api::ISubscriptionHandler<T>
{
public:
    explicit ScheduleExecutor(const api::Logger& logger, std::shared_ptr<exe4cpp::IExecutor> executor, std::chrono::system_clock::duration tolerance, api::subscription_handler_t<T> handler)
        : m_logger{logger},
          m_executor{std::move(executor)},
          m_handler{std::move(handler)},
          m_splitter{boost::uuids::random_generator(), tolerance}
    {
    }

    void process(const T& message) override
    {
        try
        {
            auto result = m_splitter.split(message);
            m_executor->post([handler = m_handler, msg = std::shared_ptr<T>(std::move(result.now))]() {
                handler->receive(*msg);
            });

            for(auto it = result.later.begin(); it != result.later.end(); ++it)
            {
                m_executor->start(it->first, [handler = m_handler, msg = std::shared_ptr<T>(std::move(it->second))] {
                    handler->receive(*msg);
                });
            }
        }
        catch(api::Exception& ex)
        {
            m_logger.warn("Schedule error: {}", ex.what());
        }
    }

private:
    api::Logger m_logger;
    std::shared_ptr<exe4cpp::IExecutor> m_executor;
    api::subscription_handler_t<T> m_handler;
    ScheduleSplit<T> m_splitter;
};

}
}

#endif //OPENFMB_ADAPTER_SCHEDULEEXECUTOR_H
