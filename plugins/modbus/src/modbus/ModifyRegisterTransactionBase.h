

#ifndef OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H
#define OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H

#include "ITransaction.h"
#include "ModifyRegisterOp.h"

#include <adapter-api/Logger.h>

namespace adapter
{
    namespace modbus
    {
        class ModifyRegisterTransactionBase : public ITransaction, public std::enable_shared_from_this<ModifyRegisterTransactionBase>
        {
            Logger logger;
            const uint16_t address;
            modify_reg_op_t operation;

        public:

            ModifyRegisterTransactionBase(Logger logger, uint16_t address, modify_reg_op_t operation);

            virtual ~ModifyRegisterTransactionBase() = default;

            void start(std::shared_ptr<::modbus::ISession> session, const std::function<void()>& callback) final;

        };
    }
}

#endif
