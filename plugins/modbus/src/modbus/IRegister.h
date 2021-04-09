// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_IREGISTER_H
#define OPENFMB_ADAPTER_MODBUS_IREGISTER_H

#include <cstdint>

namespace adapter {
namespace modbus {

    class IRegister {
    public:
        virtual ~IRegister() = default;

        virtual void set(uint16_t value) = 0;
    };

}
}

#endif
