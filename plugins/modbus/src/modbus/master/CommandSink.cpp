
#include "CommandSink.h"

#include "FlipSingleCoilTransaction.h"
#include "ModifyRegisterTransaction.h"
#include "OrderedTransaction.h"
#include "WriteMultipleRegistersTransaction.h"
#include "WriteRegisterTransaction.h"
#include "WriteSingleCoilTransaction.h"

namespace adapter {
namespace modbus {
namespace master {

    struct Entry {
        Entry(std::shared_ptr<ITransaction> transaction, uint32_t priority)
            : transaction(std::move(transaction))
            , priority(priority)
        {
        }

        std::shared_ptr<ITransaction> transaction;
        uint32_t priority;

        bool operator<(const Entry& rhs) const
        {
            return this->priority < rhs.priority;
        }
    };

    void CommandSink::write_single_coil(uint16_t index, size_t priority, bool value)
    {
        this->transactions.emplace_back(
            [index, value](api::Logger logger) -> std::shared_ptr<ITransaction> {
                return std::make_shared<WriteSingleCoilTransaction>(logger, index, value);
            },
            priority);
    }

    void CommandSink::flip_single_coil(uint16_t index, size_t priority)
    {
        this->transactions.emplace_back(
            [index](api::Logger logger) -> std::shared_ptr<ITransaction> {
                return std::make_shared<FlipSingleCoilTransaction>(logger, index);
            },
            priority);
    }

    void CommandSink::write_single_register(uint16_t index, size_t priority, uint16_t value)
    {
        this->transactions.emplace_back(
            [index, value](api::Logger logger) -> std::shared_ptr<ITransaction> {
                return std::make_shared<WriteRegisterTransaction>(logger, index, value);
            },
            priority);
    }

    void CommandSink::modify_single_register(uint16_t index, size_t priority, modify_reg_op_t operation)
    {
        this->modify_map[key_t(index, priority)].push_back(std::move(operation));
    }

    std::shared_ptr<ITransaction> CommandSink::try_get_transaction(std::string name, api::Logger logger) const
    {
        std::vector<Entry> items;

        // create transactions from transaction generators
        for (const auto& transaction : this->transactions) {
            items.emplace_back(
                transaction.first(logger),
                transaction.second);
        }

        for (const auto& op : this->modify_map) {
            items.emplace_back(
                std::make_shared<ModifyRegisterTransaction>(logger, op.first.first, Operations::accumulate(op.second)),
                op.first.second // priority
            );
        }

        if (items.empty()) {
            return nullptr;
        }

        std::sort(items.begin(), items.end());

        auto transaction = std::make_shared<OrderedTransaction>(std::move(name), logger);

        logger.info("Creating transaction");

        for (const auto& item : items) {
            logger.info("action = {}", item.transaction->get_description());
            transaction->add(item.transaction);
        }

        return std::move(transaction);
    }

}
}
}
