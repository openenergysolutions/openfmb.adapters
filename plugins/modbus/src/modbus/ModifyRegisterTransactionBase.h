

#ifndef OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H
#define OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H

#include "ITransaction.h"
#include "ModifyRegisterOp.h"

#include <adapter-api/Logger.h>

namespace adapter {
namespace modbus {
    class ModifyRegisterTransactionBase : public ITransaction, public std::enable_shared_from_this<ModifyRegisterTransactionBase> {
        Logger logger;

    protected:
        const uint16_t address;
        const modify_reg_op_t operation;
        const bool always_write_multiple_registers;

    public:
        ModifyRegisterTransactionBase(Logger logger, uint16_t address, modify_reg_op_t operation, bool always_write_multiple_registers);

        virtual ~ModifyRegisterTransactionBase() = default;

        void start(std::shared_ptr<::modbus::ISession> session, const callback_t& callback) final;
    };
}
}

#endif
