
#ifndef OPENFMB_ADAPTER_MODBUS_REGISTER32_H
#define OPENFMB_ADAPTER_MODBUS_REGISTER32_H

#include "IRegister.h"
#include "ICachedValue.h"

#include <memory>

namespace adapter
{
    namespace modbus
    {

        class Register32 final : public ICachedValue
        {
            struct Register : public IRegister
            {

                bool is_set = false;
                uint16_t value = 0;

                void set(uint16_t value) override
                {
                    this->value = value;
                    this->is_set = true;
                }
            };

            const uint32_t modulus;

        public:

            explicit Register32(uint32_t modulus) : modulus(modulus)
            {}

            Register32() : modulus(65536)
            {}

            // ---- implement ICachedAnalogue -----

            void reset() override
            {
                this->lower->is_set = this->upper->is_set = false;
            }

            bool is_set() const override
            {
                return this->lower->is_set && this->upper->is_set;
            }

            float to_float() const override
            {
                return static_cast<float>(get_value_u32());
            }

            int64_t to_int64() const override
            {
                return get_value_u32();
            }

            // ---- getters for upper / lower pieces ----

            std::shared_ptr<IRegister> get_upper()
            {
                return this->upper;
            }

            std::shared_ptr<IRegister> get_lower()
            {
                return this->lower;
            }

        private:

            uint32_t get_value_u32() const
            {
                if(this->modulus == 65536)
                {
                    return (static_cast<uint32_t>(upper->value) << 16) | static_cast<uint32_t>(lower->value);
                }
                else
                {
                    return static_cast<uint32_t>(upper->value * this->modulus) + static_cast<uint32_t>(lower->value);
                }

            }

            const std::shared_ptr<Register> lower = std::make_shared<Register>();
            const std::shared_ptr<Register> upper = std::make_shared<Register>();
        };
    }
}

#endif
