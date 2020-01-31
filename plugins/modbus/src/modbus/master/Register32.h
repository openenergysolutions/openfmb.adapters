
#ifndef OPENFMB_ADAPTER_MODBUS_REGISTER32_H
#define OPENFMB_ADAPTER_MODBUS_REGISTER32_H

#include "ICachedValue.h"
#include "IRegister.h"

#include <ser4cpp/serialization/LittleEndian.h>

#include <memory>

namespace adapter {
namespace modbus {
namespace master {

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

            return ser4cpp::SingleFloat::to_float32(to_uint32());
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
}

#endif
