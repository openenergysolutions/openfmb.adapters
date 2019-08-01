
#ifndef OPENFMB_ADAPTER_MODBUS_REGISTER32_H
#define OPENFMB_ADAPTER_MODBUS_REGISTER32_H

#include "ICachedValue.h"
#include "IRegister.h"

#include <memory>

namespace adapter {
namespace modbus {

    class Register32 final : public ICachedValue32 {
        struct Register : public IRegister {

            bool is_set = false;
            uint16_t value = 0;

            void set(uint16_t value) override
            {
                this->value = value;
                this->is_set = true;
            }
        };

    public:
        Register32() = default;

        // ---- implement ICachedAnalogue -----

        void reset() override
        {
            this->lower->is_set = this->upper->is_set = false;
        }

        bool is_set() const override
        {
            return this->lower->is_set && this->upper->is_set;
        }

        uint32_t to_uint32() const override
        {
            return (static_cast<uint32_t>(upper->value) << 16) | static_cast<uint32_t>(lower->value);
        }

        int32_t to_sint32() const override
        {
            return static_cast<int32_t>(this->to_uint32());
        }

        uint32_t to_uint32(uint32_t modulus) const override
        {
            return static_cast<uint32_t>(upper->value * modulus) + static_cast<uint32_t>(lower->value);
        }

        int32_t to_sint32(uint32_t modulus) const override
        {
            return static_cast<int32_t>(to_uint32(modulus));
        }

        float to_float32() const override
        {
            auto value = to_uint32();

            // Extract the required values
            bool sign = (value & 0x80000000) != 0;
            uint8_t exponent = static_cast<uint8_t>((value >> 23) & 0xFF);
            uint32_t mantissa = value & 0x7FFFFF;

            // Check special cases
            if(exponent == 0xFF)
            {
                if(mantissa != 0x00)
                {
                    return std::numeric_limits<float>::quiet_NaN();
                }
                else
                {
                    if(!sign)
                    {
                        return std::numeric_limits<float>::infinity();
                    }
                    else
                    {
                        return -std::numeric_limits<float>::infinity();
                    }
                    
                }
            }
            if(exponent == 0x00 && mantissa == 0x00)
            {
                return 0.0f;
            }


            // Build the actual value
            auto weigthed_mantissa = static_cast<float>(mantissa)/(static_cast<uint32_t>(1) << 23);
            float result;
            if(exponent == 0)
            {
                result = std::ldexp(weigthed_mantissa, 2 - (static_cast<uint16_t>(1) << 8));
            }
            else
            {
                result = std::ldexp(1.0f + weigthed_mantissa, exponent - 127);
            }

            // Adjust the sign
            if(sign)
            {
                result = -result;
            }

            return result;
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
        const std::shared_ptr<Register> lower = std::make_shared<Register>();
        const std::shared_ptr<Register> upper = std::make_shared<Register>();
    };
}
}

#endif
