
#ifndef OPENFMB_ADAPTER_MODBUS_POLLTRANSACTION_H
#define OPENFMB_ADAPTER_MODBUS_POLLTRANSACTION_H

#include "ITransaction.h"
#include "IPollHandler.h"
#include "IRequestBuilder.h"

namespace adapter
{
    namespace modbus
    {
        class PollTransaction final : public ITransaction, public std::enable_shared_from_this<PollTransaction>
        {
            struct Polls : public IRequestBuilder
            {
                void add(const ::modbus::ReadHoldingRegistersRequest& request) override
                {
                    this->requests.push_back(request);
                }

                std::vector<::modbus::ReadHoldingRegistersRequest> requests;
            };

            Logger logger;
            const std::chrono::steady_clock::duration period;
            const std::shared_ptr<IPollHandler> handler;
            Polls polls;

        public:

            PollTransaction(Logger logger,
                            const AutoPollConfig& config,
                            std::chrono::steady_clock::duration period,
                            std::shared_ptr<IPollHandler> handler);

            std::string get_description() const override
            {
                return "poll sequence";
            }


            void start(session_t session, const callback_t& callback) override;

            bool is_periodic() const override
            {
                return true;
            }

            std::chrono::steady_clock::duration get_period() const override
            {
                return this->period;
            }

        private:

            void start_next_request(size_t index, session_t session, const callback_t& callback);

            using poll_end_action_t = std::function<void (bool)>;
            using poll_start_action_t = std::function<void (session_t, Logger logger, std::shared_ptr<IPollHandler>, const poll_end_action_t&)>;
        };
    }
}

#endif
