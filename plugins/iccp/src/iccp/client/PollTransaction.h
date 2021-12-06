// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 3/15/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_POLLTRANSACTION_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_POLLTRANSACTION_H

#include "IPollHandler.h"
#include "ITransaction.h"

namespace adapter {
namespace iccp {
namespace client {

class PollTransaction final : public ITransaction, public std::enable_shared_from_this<PollTransaction> {
public:
    PollTransaction(api::Logger logger,
                    std::chrono::steady_clock::duration period,
                    std::shared_ptr<IPollHandler> handler);

    // ITransaction
    std::string get_description() const override
    {
        return "poll sequence";
    }

    void start(client_t session, const callback_t& callback) override;

    bool is_periodic() const override
    {
        return true;
    }

    std::chrono::steady_clock::duration get_period() const override
    {
        return this->period;
    }

private:
    void start_next_request(size_t index, client_t session, const callback_t& callback);

    using poll_end_action_t = std::function<void(bool)>;
    using poll_start_action_t = std::function<void(client_t, api::Logger logger, std::shared_ptr<IPollHandler>, const poll_end_action_t&)>;

    api::Logger logger;
    const std::chrono::steady_clock::duration period;
    const std::shared_ptr<IPollHandler> handler;
    std::vector<std::shared_ptr<ITransaction>> requests;
};

}
}
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENT_POLLTRANSACTION_H
