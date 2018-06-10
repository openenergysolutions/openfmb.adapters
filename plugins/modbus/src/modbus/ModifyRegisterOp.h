
#ifndef OPENFMB_ADAPTER_MODIFYREGISTEROP_H
#define OPENFMB_ADAPTER_MODIFYREGISTEROP_H

#include <functional>
#include <cstdint>
#include <numeric>

namespace adapter
{
    namespace modbus
    {
        using modify_reg_op_t = std::function<uint16_t (uint16_t)>;

        namespace operations
        {
            inline modify_reg_op_t clear(uint16_t mask)
            {
                return [mask](uint16_t input)
                {
                    return input & !mask;
                };
            }

            inline modify_reg_op_t set(uint16_t mask)
            {
                return [mask](uint16_t input)
                {
                    return input | mask;
                };
            }

            inline modify_reg_op_t invert(uint16_t mask)
            {
                return [mask](uint16_t input)
                {
                    return input ^ mask;
                };
            }

            template <class T>
            inline modify_reg_op_t accumulate(T collection)
            {
                return [collection = std::move(collection)](uint16_t value)
                {
                    return std::accumulate(
                               collection.cbegin(),
                               collection.cend(),
                               value,
                               [&](uint16_t acc, const modify_reg_op_t& op)
                    {
                        return op(acc);
                    }
                           );
                };
            }
        }

    }
}

#endif


