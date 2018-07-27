
#ifndef OPENFMB_ADAPTER_COMMANDSINK_H
#define OPENFMB_ADAPTER_COMMANDSINK_H

#include "ICommandConfigBuilder.h"
#include "ITransaction.h"

#include <map>

namespace adapter {
namespace modbus {
    class CommandSink final : public ICommandSink {

        using key_t = std::pair<uint16_t, int>;

        using transaction_generator_t = std::function<std::shared_ptr<ITransaction> (Logger)>;
        using transaction_priority_t = std::pair<transaction_generator_t, int>;

        std::map<key_t, std::vector<modify_reg_op_t>> modify_map;
        std::vector<transaction_priority_t> transactions;

    public:

        void write_single_register(uint16_t index, int priority, uint16_t value) override;

        void modify_single_register(uint16_t index, int priority, modify_reg_op_t operation) override;

        void write_multiple_registers(uint16_t start_index, int priority, std::vector<uint16_t> values) override;

        std::shared_ptr<ITransaction> try_get_transaction(std::string name, Logger logger) const;
    };
}
}

#endif
