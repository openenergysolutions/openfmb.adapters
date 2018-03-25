
#ifndef OPENFMB_ADAPTER_MODBUS_POLLMANAGER_H
#define OPENFMB_ADAPTER_MODBUS_POLLMANAGER_H

#include "IPollSink.h"

#include "modbus/session/ISession.h"

#include "adapter-api/Logger.h"

#include <chrono>

namespace adapter
{

    namespace modbus
    {

        class PollManager
        {

        public:

            PollManager(const Logger& logger,
                        std::unique_ptr<IPollSink> sink,
                        const std::chrono::steady_clock::duration& period,
                        const std::shared_ptr<::modbus::ISession>& session);

            void start();

        private:

            Logger logger;
            const std::unique_ptr<IPollSink> sink;
            const std::chrono::steady_clock::duration period;
            const std::shared_ptr<::modbus::ISession> session;

            loopser::Timer timer;
        };

    }
}

#endif
