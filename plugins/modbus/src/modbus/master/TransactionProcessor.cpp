// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "TransactionProcessor.h"

#include "adapter-api/Exception.h"

namespace adapter {
namespace modbus {
namespace master {

    TransactionProcessor::TransactionProcessor(api::Logger logger)
        : logger(std::move(logger))
    {
    }

    void TransactionProcessor::add(std::shared_ptr<ITransaction> transaction)
    {
        std::lock_guard<std::mutex> lock(mutex);
        this->transactions.push(std::move(transaction));
        this->check_for_start();
    }

    void TransactionProcessor::start(session_t session)
    {
        std::lock_guard<std::mutex> lock(mutex);
        if (this->session)
            throw api::Exception("TransactionProcessor already started");
        this->session = std::move(session);
        this->check_for_start();
    }

    void TransactionProcessor::on_complete(const std::shared_ptr<ITransaction>& transaction, bool success)
    {
        std::lock_guard<std::mutex> lock(mutex);
        this->is_running = false;

        if (success) {
            logger.info("Finished transaction: {}", transaction->get_description());
        } else {
            logger.warn("Failed transaction: {}", transaction->get_description());
        }

        if (transaction->is_periodic()) {
            this->session->start(transaction->get_period(), [self = shared_from_this(), transaction]() {
                self->add(transaction);
            });
        }

        this->check_for_start();
    }

    void TransactionProcessor::check_for_start()
    {
        if (session && !is_running && !transactions.empty()) {
            this->is_running = true;
            this->logger.info("Starting transaction: {}", this->transactions.front()->get_description());

            const auto callback = [self = shared_from_this(), transaction = this->transactions.front()](bool success) {
                self->on_complete(transaction, success);
            };

            this->transactions.front()->start(
                session,
                callback);

            this->transactions.pop();
        }
    }

}
}
}
