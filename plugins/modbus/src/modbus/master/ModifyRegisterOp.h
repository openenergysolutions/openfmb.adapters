// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODIFYREGISTEROP_H
#define OPENFMB_ADAPTER_MODIFYREGISTEROP_H

#include <cstdint>
#include <memory>
#include <numeric>
#include <string>
#include <vector>

namespace adapter {
namespace modbus {
namespace master {

    class IModifyRegisterOp {
    public:
        virtual uint16_t modify(uint16_t input) const = 0;
        virtual std::string description() const = 0;
    };

    using modify_reg_op_t = std::shared_ptr<IModifyRegisterOp>;

    struct Operations {

        static modify_reg_op_t clear_bit(uint8_t bit);

        static modify_reg_op_t set_bit(uint8_t bit);

        static modify_reg_op_t clear_mask(uint16_t mask);

        static modify_reg_op_t set_mask(uint16_t mask);

        static modify_reg_op_t invert_mask(uint16_t mask);

        static modify_reg_op_t accumulate(std::vector<modify_reg_op_t> operations);
    };

}
}
}

#endif
