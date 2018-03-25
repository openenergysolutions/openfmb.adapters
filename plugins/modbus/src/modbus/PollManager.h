
#ifndef OPENFMB_ADAPTER_MODBUS_POLLBUILDER_H
#define OPENFMB_ADAPTER_MODBUS_POLLBUILDER_H


#include "adapter-api/Logger.h"

#include "IPollSink.h"

#include "modbus/session/ISession.h"
#include "modbus/exceptions/IException.h"

namespace adapter
{
    namespace modbus
    {
        class PollManager : public std::enable_shared_from_this<PollManager>
        {
            using session_t = std::shared_ptr<::modbus::ISession>;
            using poll_action_t = std::function<void (const std::shared_ptr<PollManager>&)>;

        public:

            PollManager(const Logger& logger,
                        std::unique_ptr<IPollSink> sink,
                        const std::chrono::steady_clock::duration& period,
                        const session_t& session);

            void add(const ::modbus::ReadHoldingRegistersRequest& request);

            void start();

        private:

            void on_poll_success();

            void on_poll_failure();

            template <class R, class T>
            void add_poll(const T& request);

            Logger logger;
            const std::unique_ptr<IPollSink> sink;
            const std::chrono::steady_clock::duration period;
            const session_t session;
            loopser::Timer timer;
            std::chrono::steady_clock::time_point poll_sequence_start;
            std::vector<poll_action_t> polls;
            std::vector<poll_action_t> poll_sequence;
        };

    }
}

#endif
