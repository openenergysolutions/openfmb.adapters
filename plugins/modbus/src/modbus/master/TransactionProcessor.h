// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_TRANSACTIONPROCESSOR_H
#define OPENFMB_ADAPTER_MODBUS_TRANSACTIONPROCESSOR_H

#include "ITransactionProcessor.h"

#include <adapter-api/Logger.h>

#include "modbus/ITimer.h"
#include "modbus/exceptions/IException.h"

#include <queue>

namespace adapter {
namespace modbus {
namespace master {

    class TransactionProcessor final : public ITransactionProcessor, public std::enable_shared_from_this<TransactionProcessor> {
        api::Logger logger;
        session_t session;

        std::mutex mutex;
        bool is_running = false;
        std::queue<std::shared_ptr<ITransaction>> transactions;

    public:
        explicit TransactionProcessor(api::Logger logger);

        void add(std::shared_ptr<ITransaction> transaction) override;

        void start(session_t session);

    private:
        void on_complete(const std::shared_ptr<ITransaction>& transaction, bool success);

        void check_for_start();
    };

}
}
}

#endif
