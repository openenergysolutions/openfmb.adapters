

#ifndef OPENFMB_ADAPTER_COMMANDOPTIONS_H
#define OPENFMB_ADAPTER_COMMANDOPTIONS_H

namespace adapter
{
    namespace modbus
    {
        struct CommandOptions
        {
            const bool always_write_multiple_registers;

            explicit CommandOptions(bool always_write_multiple_registers)
                    : always_write_multiple_registers(always_write_multiple_registers)
            {}
        };
    }
}

#endif //OPENFMB_ADAPTER_COMMANDOPTIONS_H
