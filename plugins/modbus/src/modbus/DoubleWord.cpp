// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "DoubleWord.h"

namespace adapter {
namespace modbus {

    DoubleWord DoubleWord::get(uint32_t value)
    {
        return DoubleWord{
            static_cast<uint16_t>((value >> 16) & 0xFFFF),
            static_cast<uint16_t>(value & 0xFFFF)
        };
    }

    DoubleWord::DoubleWord(const uint16_t upper, const uint16_t lower)
        : upper(upper)
        , lower(lower)
    {
    }

}
}
