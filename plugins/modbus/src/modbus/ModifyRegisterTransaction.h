

#ifndef OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTION_H
#define OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTION_H

#include "ModifyRegisterTransactionBase.h"

namespace adapter
{
    namespace modbus
    {
        class ModifyRegisterTransaction final : public ModifyRegisterTransactionBase
        {

        public:

            ModifyRegisterTransaction(Logger logger, uint16_t address, modify_reg_op_t operation) :
                ModifyRegisterTransactionBase(std::move(logger), address, std::move(operation))
            {}

            std::string get_description() const override
            {
                return "modify register";
            }
        };
    }
}

#endif
