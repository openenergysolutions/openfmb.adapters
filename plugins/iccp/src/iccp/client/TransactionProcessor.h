// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 3/12/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_TRANSACTIONPROCESSOR_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_TRANSACTIONPROCESSOR_H

#include <adapter-api/Logger.h>
#include "ITransaction.h"
#include "ITransactionProcessor.h"
#include <queue>

namespace adapter {
namespace iccp {
namespace client {

class TransactionProcessor final : public ITransactionProcessor, public std::enable_shared_from_this<TransactionProcessor> {
    api::Logger logger;
    client_t client;

    std::mutex mutex;
    bool is_running = false;
    std::queue<std::shared_ptr<ITransaction>> transactions;

public:
    explicit TransactionProcessor(api::Logger logger);

    void add(std::shared_ptr<ITransaction> transaction);

    void start(client_t client);

private:
    void on_complete(const std::shared_ptr<ITransaction>& transaction, bool success);

    void check_for_start();
};

}
}
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENT_TRANSACTIONPROCESSOR_H
