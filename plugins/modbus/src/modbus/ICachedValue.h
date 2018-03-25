#ifndef OPENFMB_ADAPTER_MODBUS_ICACHEDVALUE_H
#define OPENFMB_ADAPTER_MODBUS_ICACHEDVALUE_H

#include <cstdint>

namespace adapter
{
    namespace modbus
    {
        class ICachedValue
        {

        public:

            virtual ~ICachedValue() = default;

            virtual void reset() = 0;

            virtual bool is_set() const = 0;

            virtual float to_float() const = 0;

            virtual int64_t to_int64() const = 0;

        };
    }
}

#endif
