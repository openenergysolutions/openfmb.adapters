
#ifndef OPENFMB_ADAPTER_MODBUS_REGISTER16_H
#define OPENFMB_ADAPTER_MODBUS_REGISTER16_H

#include "IRegister.h"
#include "ICachedValue.h"

namespace adapter
{
    namespace modbus
    {

        class Register16 final : public ICachedValue, public IRegister
        {

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

            float to_float() const override
            {
                return static_cast<float>(this->value);
            }

            int64_t to_int64() const override
            {
                return this->value;
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



#endif
