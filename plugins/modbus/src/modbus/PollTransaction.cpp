
#include "PollTransaction.h"
#include <modbus/exceptions/IException.h>

namespace adapter {
namespace modbus {

    PollTransaction::PollTransaction(
        api::Logger logger,
        const AutoPollConfig& config,
        std::chrono::steady_clock::duration period,
        std::shared_ptr<IPollHandler> handler)
        : logger(std::move(logger))
        , period(period)
        , handler(std::move(handler))
    {
        this->handler->configure(config, this->polls);
    }

    void PollTransaction::start(session_t session, const ITransaction::callback_t& callback)
    {
        if (polls.requests.empty()) {
            session->start(std::chrono::seconds(0), [callback]() {
                callback(true);
            });
        } else {
            this->handler->begin(this->logger);
            this->start_next_request(0, std::move(session), callback);
        }
    }

    void PollTransaction::start_next_request(size_t index, session_t session, const ITransaction::callback_t& callback)
    {
        const auto read_handler = [self = shared_from_this(), index, session, callback](const ::modbus::Expected<::modbus::ReadHoldingRegistersResponse>& response) {
            if (response.is_valid()) {
                self->handler->apply(response.get());
                const auto next = index + 1;
                if (next < self->polls.requests.size()) {
                    // start the next poll
                    self->start_next_request(next, session, callback);
                } else {
                    // we're done
                    self->handler->end(self->logger);
                    callback(true);
                }
            } else {
                self->logger.warn("Poll failed: {}", response.get_exception<::modbus::IException>().get_message());
                callback(false);
            }
        };

        session->send_request(this->polls.requests[index], read_handler);
    }
}
}
