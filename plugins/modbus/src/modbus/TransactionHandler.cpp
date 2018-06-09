
#include "TransactionHandler.h"

#include "adapter-api/util/Exception.h"

namespace adapter
{
    namespace modbus
    {

        TransactionHandler::TransactionHandler(Logger logger) : logger(std::move(logger))
        {}

        void TransactionHandler::add(std::shared_ptr<ITransaction> transaction)
        {
            std::lock_guard<std::mutex> lock(mutex);
            if(!this->is_shutdown)
            {
                this->transactions.push(std::move(transaction));
                this->check_for_start();
            }
        }

        void TransactionHandler::start(session_t session)
        {
            std::lock_guard<std::mutex> lock(mutex);
            if(this->session) throw Exception("TransactionHandler already started");
            this->session = std::move(session);
            this->check_for_start();
        }

        void TransactionHandler::shutdown()
        {
            std::lock_guard<std::mutex> lock(mutex);
            this->is_shutdown = true;
            while(!transactions.empty()) transactions.pop();
        }

        void TransactionHandler::on_complete(const std::shared_ptr<ITransaction>& transaction)
        {
            std::lock_guard<std::mutex> lock(mutex);
            this->transactions.pop();
            this->is_running = false;

            if(!is_shutdown && transaction->is_periodic())
            {
                this->session->start(transaction->get_period(), [self = shared_from_this(), transaction]()
                {
                    self->add(transaction);
                });
            }

            this->check_for_start();
        }

        void TransactionHandler::check_for_start()
        {
            if(session && !is_running && !transactions.empty())
            {
                this->is_running = true;
                this->logger.info("Starting transaction: {}", this->transactions.front()->get_description());

                this->transactions.front()->start(
                    session,
                    [self = shared_from_this(), transaction = this->transactions.front()]()
                {
                    self->on_complete(transaction);
                }
                );
            }
        }

    }
}


