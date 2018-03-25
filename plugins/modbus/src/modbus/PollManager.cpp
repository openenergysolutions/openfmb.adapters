
#include "PollManager.h"

namespace adapter
{

    namespace modbus
    {

        PollManager::PollManager(const Logger& logger,
                                 std::unique_ptr<IPollSink> sink,
                                 const std::chrono::steady_clock::duration& period,
                                 const std::shared_ptr<::modbus::ISession>& session) :
            logger(logger),
            sink(std::move(sink)),
            period(period),
            session(session),
            timer(nullptr) // TODO - Is this correct?
        {}

        void PollManager::start()
        {

        }
    }
}


