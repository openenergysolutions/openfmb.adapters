
#ifndef OPENFMB_ADAPTER_REGISTER32_H
#define OPENFMB_ADAPTER_REGISTER32_H

#include "IRegister.h"
#include "ICachedAnalogue.h"

#include <memory>

namespace adapter
{

    class Register32 final : public ICachedAnalogue
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

        float to_float(float scale) const override
        {
            return scale * static_cast<float>(get_value_u32());
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
            return (static_cast<uint32_t>(upper->value) << 16) | static_cast<uint32_t>(lower->value);
        }

        const std::shared_ptr<Register> lower = std::make_shared<Register>();
        const std::shared_ptr<Register> upper = std::make_shared<Register>();
    };

}



#endif //OPENFMB_ADAPTER_REGISTER32_H
