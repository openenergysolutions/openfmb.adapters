
#include "CommandSink.h"

#include "ModifyRegisterTransaction.h"
#include "OrderedTransaction.h"
#include "WriteRegisterTransaction.h"

namespace adapter {
namespace modbus {
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

    void CommandSink::set_register(uint16_t index, int priority, uint16_t value)
    {
        this->set_operations.push_back(SetOp{ .index = index, .value = value, .priority = priority });
    }

    void CommandSink::modify_register(uint16_t index, int priority, modify_reg_op_t operation)
    {
        this->modify_map[key_t(index, priority)].push_back(std::move(operation));
    }

    std::shared_ptr<ITransaction> CommandSink::try_get_transaction(std::string name, Logger logger) const
    {
        std::vector<Entry> items;

        for (const auto& op : this->set_operations) {
            items.emplace_back(
                std::make_shared<WriteRegisterTransaction>(logger, op.index, op.value),
                op.priority);
        }

        for (const auto& op : this->modify_map) {
            items.emplace_back(
                std::make_shared<ModifyRegisterTransaction>(logger, op.first.first, operations::accumulate(op.second)),
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
