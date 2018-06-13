
#ifndef OPENFMB_ADAPTER_MODBUS_REGISTEROPERATIONTYPE_H
#define OPENFMB_ADAPTER_MODBUS_REGISTEROPERATIONTYPE_H

#include <string>

namespace adapter
{
    namespace modbus
    {

        enum class RegisterOperationType
        {
            /// element is not mapped
            none,
            /// read the register, clear masked bits, and write it back
            clear_masked_bits,
            /// read the register, set masked bits, and write it back
            set_masked_bits
        };

        struct RegisterOperationTypeMeta
        {
            RegisterOperationTypeMeta() = delete;

            constexpr static const char* const none = "none";
            constexpr static const char* const clear_masked_bits = "clear_masked_bits";
            constexpr static const char* const set_masked_bits = "set_masked_bits";

            static RegisterOperationType from_string(const std::string& value);
        };

    }
}

#endif
