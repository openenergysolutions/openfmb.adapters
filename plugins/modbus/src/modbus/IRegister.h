#ifndef OPENFMB_ADAPTER_IREGISTER_H
#define OPENFMB_ADAPTER_IREGISTER_H

#include <cstdint>

namespace adapter
{

    class IRegister
    {
    public:
        virtual ~IRegister() = default;

        virtual void set(uint16_t value) = 0;
    };

}

#endif //OPENFMB_ADAPTER_IREGISTER_H
