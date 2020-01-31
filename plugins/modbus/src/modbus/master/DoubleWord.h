
#ifndef OPENFMB_ADAPTER_DOUBLEWORD_H
#define OPENFMB_ADAPTER_DOUBLEWORD_H

#include <cstdint>

namespace adapter {
namespace modbus {
namespace master {

    struct DoubleWord {
        uint16_t upper;
        uint16_t lower;

        DoubleWord(const uint16_t upper, const uint16_t lower);

        static DoubleWord get(uint32_t value);
    };
}
}
}

#endif //OPENFMB_ADAPTER_DOUBLEWORD_H
