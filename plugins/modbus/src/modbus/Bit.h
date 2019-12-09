#ifndef OPENFMB_ADAPTER_MODBUS_BIT_H
#define OPENFMB_ADAPTER_MODBUS_BIT_H

namespace adapter {
namespace modbus {

class Bit
{
public:
    Bit() = default;

    void set(bool value)
    {
        this->value = value;
        this->is_value_set = true;
    }

    bool get() const
    {
        return this->value;
    }

    void reset()
    {
        this->is_value_set = false;
    }

    bool is_set() const
    {
        return this->is_value_set;
    }

private:
    bool is_value_set = false;
    bool value = false;
};

}
}

#endif
