// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_REGISTER64_H
#define OPENFMB_ADAPTER_MODBUS_REGISTER64_H

#include "ICachedValue.h"
#include "IRegister.h"

#include <ser4cpp/serialization/LittleEndian.h>

#include <memory>

namespace adapter {
namespace modbus {

    class Register64 final : public ICachedValue64 {
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
        Register64() = default;

        // ---- implement ICachedAnalogue -----

        void reset() override
        {
            this->lower->is_set = this->upper->is_set = this->upper_mid->is_set = this->lower_mid->is_set = false;
        }

        bool is_set() const override
        {
            return this->lower->is_set
                && this->lower_mid->is_set
                && this->upper_mid->is_set
                && this->upper->is_set;
        }

        uint64_t to_uint64() const override
        {
            return (static_cast<uint64_t>(upper->value) << 48)
                | (static_cast<uint64_t>(upper_mid->value) << 32)
                | (static_cast<uint64_t>(lower_mid->value) << 16)
                | static_cast<uint64_t>(lower->value);
        }

        int64_t to_sint64() const override
        {
            return static_cast<int64_t>(this->to_uint64());
        }

        uint64_t to_uint64(uint64_t modulus) const override
        {
            return static_cast<uint64_t>(upper->value * modulus) + static_cast<uint64_t>(lower->value);
        }

        int64_t to_sint64(uint64_t modulus) const override
        {
            return static_cast<int64_t>(to_uint64(modulus));
        }

        float to_float64() const override
        {
            auto value = to_uint64();

            return ser4cpp::DoubleFloat::to_double(to_uint64());
        }

        // ---- getters for upper / lower pieces ----

        std::shared_ptr<IRegister> get_upper()
        {
            return this->upper;
        }

        std::shared_ptr<IRegister> get_upper_mid()
        {
            return this->upper_mid;
        }

        std::shared_ptr<IRegister> get_lower_mid()
        {
            return this->lower_mid;
        }

        std::shared_ptr<IRegister> get_lower()
        {
            return this->lower;
        }

    private:
        const std::shared_ptr<Register> lower = std::make_shared<Register>();
        const std::shared_ptr<Register> lower_mid = std::make_shared<Register>();
        const std::shared_ptr<Register> upper_mid = std::make_shared<Register>();
        const std::shared_ptr<Register> upper = std::make_shared<Register>();
    };

}
}

#endif
