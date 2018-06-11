
#include "CommandSink.h"

namespace adapter
{
    namespace modbus
    {
        struct Prioritized
        {

        };


        void CommandSink::set_register(uint16_t index, uint32_t priority, uint16_t value)
        {
            this->set_operations.push_back(SetOp{.index = index, .value = value, .priority = priority});
        }

        void CommandSink::modify_register(uint16_t index, uint32_t priority, modify_reg_op_t operation)
        {
            this->modify_map[key_t(index, priority)].push_back(std::move(operation));
        }

        std::shared_ptr<ITransaction> CommandSink::get_transaction() const
        {
            return nullptr;
        }
    }
}
