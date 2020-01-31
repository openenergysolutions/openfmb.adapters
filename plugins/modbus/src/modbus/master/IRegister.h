#ifndef OPENFMB_ADAPTER_MODBUS_IREGISTER_H
#define OPENFMB_ADAPTER_MODBUS_IREGISTER_H

#include <cstdint>

namespace adapter {
namespace modbus {
namespace master {

    class IRegister {
    public:
        virtual ~IRegister() = default;

        virtual void set(uint16_t value) = 0;
    };

}
}
}

#endif
