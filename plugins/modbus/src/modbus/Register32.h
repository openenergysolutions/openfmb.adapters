
#ifndef OPENFMB_ADAPTER_REGISTER32_H
#define OPENFMB_ADAPTER_REGISTER32_H

#include <cstdint>

namespace adapter {

    class Register32
    {
    public:

        Register32() = default;

        void clear()
        {
            this->lower_set = this->upper_set = false;
        }

        void set_lower(uint16_t lower)
        {
            this->lower = lower;
        }

        void set_upper(uint16_t lower)
        {
            this->upper = upper;
        }

        bool is_set() const
        {
            return this->lower_set && this->upper_set;
        }

        uint32_t get_value() const
        {
            return (static_cast<uint32_t>(upper) << 16) | static_cast<uint32_t>(lower);
        }

        float to_float(float scale) const
        {
            return scale*static_cast<float>(get_value());
        }

    private:

        bool lower_set = false;
        bool upper_set = false;

        uint16_t lower = 0;
        uint16_t upper = 0;
    };

}



#endif //OPENFMB_ADAPTER_REGISTER32_H
