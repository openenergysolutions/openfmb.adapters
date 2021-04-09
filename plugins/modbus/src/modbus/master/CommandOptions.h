// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_COMMANDOPTIONS_H
#define OPENFMB_ADAPTER_COMMANDOPTIONS_H

namespace adapter {
namespace modbus {
namespace master {

    struct CommandOptions {
        const bool always_write_multiple_registers;

        explicit CommandOptions(bool always_write_multiple_registers)
            : always_write_multiple_registers(always_write_multiple_registers)
        {
        }
    };

}
}
}

#endif //OPENFMB_ADAPTER_COMMANDOPTIONS_H
