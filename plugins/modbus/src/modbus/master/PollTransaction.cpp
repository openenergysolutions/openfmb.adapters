// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "PollTransaction.h"
#include <modbus/exceptions/IException.h>

namespace adapter {
namespace modbus {
namespace master {

    PollTransaction::PollTransaction(
        api::Logger logger,
        const AutoPollConfig& config,
        std::chrono::steady_clock::duration period,
        std::shared_ptr<IPollHandler> handler)
        : logger(std::move(logger))
        , period(period)
        , handler(std::move(handler))
    {
        this->handler->configure(config, *this);
    }

    void PollTransaction::start(session_t session, const ITransaction::callback_t& callback)
    {
        if (requests.empty()) {
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
        const auto read_handler = [self = shared_from_this(), index, session, callback](bool success) {
            if (success) {
                const auto next = index + 1;
                if (next < self->requests.size()) {
                    // start the next poll
                    self->start_next_request(next, session, callback);
                } else {
                    // we're done
                    self->handler->end(self->logger);
                    callback(true);
                }
            } else {
                callback(false);
            }
        };

        this->requests[index]->start(session, read_handler);
    }

}
}
}
