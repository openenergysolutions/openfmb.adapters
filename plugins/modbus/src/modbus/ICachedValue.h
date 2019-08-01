#ifndef OPENFMB_ADAPTER_MODBUS_ICACHEDVALUE_H
#define OPENFMB_ADAPTER_MODBUS_ICACHEDVALUE_H

#include <cstdint>

namespace adapter {
namespace modbus {
    class ICachedValue {

    public:
        virtual ~ICachedValue() = default;

        virtual void reset() = 0;

        virtual bool is_set() const = 0;
    };

    class ICachedValue16 : public ICachedValue {

    public:
        virtual ~ICachedValue16() = default;

        virtual uint16_t to_uint16() const = 0;

        virtual int16_t to_sint16() const = 0;
    };

    class ICachedValue32 : public ICachedValue {

    public:
        virtual ~ICachedValue32() = default;

        virtual uint32_t to_uint32() const = 0;

        virtual int32_t to_sint32() const = 0;

        virtual uint32_t to_uint32(uint32_t modulus) const = 0;

        virtual int32_t to_sint32(uint32_t modulus) const = 0;

        virtual float to_float32() const = 0;
    };
}
}

#endif
