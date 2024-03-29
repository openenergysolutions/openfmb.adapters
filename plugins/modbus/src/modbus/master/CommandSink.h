// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_COMMANDSINK_H
#define OPENFMB_ADAPTER_COMMANDSINK_H

#include "ICommandConfigBuilder.h"
#include "ITransaction.h"

#include <map>

namespace adapter {
namespace modbus {
namespace master {

    class CommandSink final : public ICommandSink {

        using key_t = std::pair<uint16_t, size_t>;

        using transaction_generator_t = std::function<std::shared_ptr<ITransaction>(api::Logger)>;
        using transaction_priority_t = std::pair<transaction_generator_t, int>;

        std::map<key_t, std::vector<modify_reg_op_t>> modify_map;
        std::vector<transaction_priority_t> transactions;

    public:
        void write_single_coil(uint16_t index, size_t priority, bool value) override;
        void flip_single_coil(uint16_t index, size_t priority) override;

        void write_single_register(uint16_t index, size_t priority, uint16_t value) override;
        void write_multiple_registers(uint16_t start_index, size_t priority, std::vector<uint16_t> values) override;
        void modify_single_register(uint16_t index, size_t priority, modify_reg_op_t operation) override;

        std::shared_ptr<ITransaction> try_get_transaction(std::string name, api::Logger logger) const;
    };

}
}
}

#endif
