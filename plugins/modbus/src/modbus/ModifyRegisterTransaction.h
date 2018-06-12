

#ifndef OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTION_H
#define OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTION_H

#include "ModifyRegisterTransactionBase.h"

#include <sstream>

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
                std::ostringstream oss;
                oss << "modify register: " << this->address;
                return oss.str();
            }
        };
    }
}

#endif
