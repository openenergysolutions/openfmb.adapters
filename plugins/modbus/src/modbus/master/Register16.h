
#ifndef OPENFMB_ADAPTER_MODBUS_REGISTER16_H
#define OPENFMB_ADAPTER_MODBUS_REGISTER16_H

#include "ICachedValue.h"
#include "IRegister.h"

namespace adapter {
namespace modbus {
namespace master {

    class Register16 final : public ICachedValue16, public IRegister {

    public:
        Register16() = default;

        // ---- implement ICachedAnalogue -----

        void reset() override
        {
            this->is_value_set = false;
        }

        bool is_set() const override
        {
            return this->is_value_set;
        }

        uint16_t to_uint16() const override
        {
            return value;
        }

        int16_t to_sint16() const override
        {
            return static_cast<int16_t>(value);
        }

        // ---- implement IRegister ----

        void set(uint16_t value) override
        {
            this->value = value;
            this->is_value_set = true;
        }

    private:
        bool is_value_set = false;
        uint16_t value = 0;
    };

}
}
}

#endif
