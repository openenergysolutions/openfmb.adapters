
#ifndef OPENFMB_ADAPTER_COMMANDCONFIGURATION_H
#define OPENFMB_ADAPTER_COMMANDCONFIGURATION_H

#include "ModifyRegisterOp.h"

namespace adapter
{
    namespace modbus
    {
        class ICommandSink
        {
        public:
            virtual void set_register(uint16_t index, uint32_t priority, uint16_t value) = 0;
            virtual void modify_register(uint16_t index, uint32_t priority, modify_reg_op_t operation) = 0;
        };
    }
}

#endif
