
#include "CommandSink.h"

#include "OrderedTransaction.h"
#include "WriteRegisterTransaction.h"
#include "ModifyRegisterTransaction.h"

namespace adapter
{
    namespace modbus
    {
        struct Entry
        {
            Entry(std::shared_ptr<ITransaction> transaction, uint32_t priority) :
                transaction(std::move(transaction)),
                priority(priority)
            {}

            std::shared_ptr<ITransaction> transaction;
            uint32_t priority;

            bool operator<(const Entry& rhs) const
            {
                return this->priority < rhs.priority;
            }
        };

        void CommandSink::set_register(uint16_t index, uint32_t priority, uint16_t value)
        {
            this->set_operations.push_back(SetOp{.index = index, .value = value, .priority = priority});
        }

        void CommandSink::modify_register(uint16_t index, uint32_t priority, modify_reg_op_t operation)
        {
            this->modify_map[key_t(index, priority)].push_back(std::move(operation));
        }

        std::shared_ptr<ITransaction> CommandSink::get_transaction(std::string name, Logger logger) const
        {
            auto transaction = std::make_shared<OrderedTransaction>(std::move(name), logger);

            std::priority_queue<Entry> queue;

            for(const auto& op : this->set_operations)
            {
                queue.push(
                    Entry(
                        std::make_shared<WriteRegisterTransaction>(logger, op.index, op.value),
                        op.priority
                    )
                );
            }

            for(const auto& op : this->modify_map)
            {
                queue.push(
                    Entry(
                        std::make_shared<ModifyRegisterTransaction>(logger, op.first.first, operations::accumulate(op.second)),
                        op.first.second // priority
                    )
                );
            }

            while(!queue.empty())
            {
                transaction->add(queue.top().transaction);
                queue.pop();
            }

            return std::move(transaction);
        }
    }
}
