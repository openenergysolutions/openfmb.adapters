
#ifndef OPENFMB_ADAPTER_MODBUS_TRANSACTIONPROCESSOR_H
#define OPENFMB_ADAPTER_MODBUS_TRANSACTIONPROCESSOR_H

#include "adapter-api/Logger.h"

#include "modbus/ITimer.h"
#include "modbus/exceptions/IException.h"

#include "ITransaction.h"

#include <queue>
#include <memory>

namespace adapter
{
    namespace modbus
    {
        class TransactionProcessor : public std::enable_shared_from_this<TransactionProcessor>
        {
            Logger logger;
            session_t session;

            std::mutex mutex;
            bool is_running = false;
            std::queue<std::shared_ptr<ITransaction>> transactions;

        public:

            TransactionProcessor(Logger logger);

            void add(std::shared_ptr<ITransaction> transaction);

            void start(session_t session);

        private:

            void on_complete(const std::shared_ptr<ITransaction>& transaction);

            void check_for_start();

        };

    }
}

#endif
