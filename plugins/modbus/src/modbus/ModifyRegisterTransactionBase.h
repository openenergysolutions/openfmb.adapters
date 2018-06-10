

#ifndef OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H
#define OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H

#include "ITransaction.h"

#include <adapter-api/Logger.h>

#include <functional>

namespace adapter
{
    namespace modbus
    {
        using modify_reg_op_t = std::function<uint16_t (uint16_t)>;

        class ModifyRegisterTransactionBase : public ITransaction, public std::enable_shared_from_this<ModifyRegisterTransactionBase>
        {
            Logger logger;
            const uint16_t address;
            const std::vector<modify_reg_op_t> operations;

        public:

            ModifyRegisterTransactionBase(Logger logger, uint16_t address, std::vector<modify_reg_op_t> operations);

            virtual ~ModifyRegisterTransactionBase() = default;

            void start(std::shared_ptr<::modbus::ISession> session, const std::function<void()>& callback) final;

        };
    }
}

#endif
