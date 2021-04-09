// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ORDEREDTRANSACTION_H
#define OPENFMB_ADAPTER_ORDEREDTRANSACTION_H

#include "ITransaction.h"

#include "adapter-api/Logger.h"

#include <queue>

namespace adapter {
namespace modbus {
namespace master {

    class OrderedTransaction : public ITransaction, public std::enable_shared_from_this<OrderedTransaction> {

        std::vector<std::shared_ptr<ITransaction>> transactions;

        const std::string description;
        api::Logger logger;

    public:
        OrderedTransaction(std::string description, api::Logger logger)
            : description(std::move(description))
            , logger(std::move(logger))
        {
        }

        void add(std::shared_ptr<ITransaction> transaction)
        {
            this->transactions.push_back(std::move(transaction));
        }

        std::string get_description() const override
        {
            return this->description;
        }

        void start(session_t session, const callback_t& callback) override;

    private:
        void start_next(size_t index, session_t session, const callback_t& callback);
    };

}
}
}

#endif
