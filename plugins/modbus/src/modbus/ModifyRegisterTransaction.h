

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

            ModifyRegisterTransaction(Logger logger, uint16_t address, std::vector<modify_reg_op_t> operations) :
                ModifyRegisterTransactionBase(std::move(logger), address, std::move(operations))
            {}

            std::string get_description() const override
            {
                return "modify register";
            }
        };
    }
}

#endif
