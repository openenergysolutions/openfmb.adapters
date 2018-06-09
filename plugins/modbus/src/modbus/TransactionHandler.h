
#ifndef OPENFMB_ADAPTER_MODBUS_TRANSACTIONHANDLER_H
#define OPENFMB_ADAPTER_MODBUS_TRANSACTIONHANDLER_H

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
        class TransactionHandler : public std::enable_shared_from_this<TransactionHandler>
        {
            Logger logger;
            session_t session;

            std::mutex mutex;
            bool is_running = false;
            bool is_shutdown = false;
            std::queue<std::shared_ptr<ITransaction>> transactions;

        public:

            TransactionHandler(Logger logger);

            void add(std::shared_ptr<ITransaction> transaction);

            void start(session_t session);

            void shutdown();

        private:

            void on_complete(const std::shared_ptr<ITransaction>& transaction);

            void check_for_start();

        };

    }
}

#endif
