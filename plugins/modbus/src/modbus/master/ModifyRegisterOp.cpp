// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ModifyRegisterOp.h"

#include <adapter-api/Exception.h>

#include <iomanip>
#include <sstream>

namespace adapter {
namespace modbus {
namespace master {

    struct Bit {

        Bit(uint8_t value)
            : value(value)
        {
            if (value > 15) {
                throw api::Exception("Value for bit outside the range [0,15]: ", static_cast<int>(value));
            }
        }

        uint16_t to_mask() const
        {
            return static_cast<uint16_t>(1 << value);
        }

        const uint8_t value;
    };

    inline std::string hex(const char* op, uint16_t num)
    {
        std::ostringstream oss;
        oss << op << "(0x" << std::setw(4) << std::setfill('0') << std::hex << num << ")";
        return oss.str();
    }

    class ClearBitOperation final : public IModifyRegisterOp {
        const Bit bit;

    public:
        ClearBitOperation(uint8_t value)
            : bit(value)
        {
        }

        uint16_t modify(uint16_t input) const override
        {
            return input & ~bit.to_mask();
        }

        std::string description() const override
        {
            std::ostringstream oss;
            oss << "clear(b" << static_cast<int>(this->bit.value) << ")";
            return oss.str();
        }
    };

    class SetBitOperation final : public IModifyRegisterOp {
        const Bit bit;

    public:
        SetBitOperation(uint8_t value)
            : bit(value)
        {
        }

        uint16_t modify(uint16_t input) const override
        {
            return input | bit.to_mask();
        }

        std::string description() const override
        {
            std::ostringstream oss;
            oss << "set(b" << static_cast<int>(this->bit.value) << ")";
            return oss.str();
        }
    };

    class ClearMaskOperation final : public IModifyRegisterOp {
        const uint16_t mask;

    public:
        ClearMaskOperation(const uint16_t mask)
            : mask(mask)
        {
        }

        uint16_t modify(uint16_t input) const override
        {
            return input & ~mask;
        }

        std::string description() const override
        {
            return hex("clear", this->mask);
        }
    };

    class SetMaskOperation final : public IModifyRegisterOp {
        const uint16_t mask;

    public:
        SetMaskOperation(const uint16_t mask)
            : mask(mask)
        {
        }

        uint16_t modify(uint16_t input) const override
        {
            return input | mask;
        }

        std::string description() const override
        {
            return hex("set", this->mask);
        }
    };

    class InvertMaskOperation final : public IModifyRegisterOp {
        const uint16_t mask;

    public:
        InvertMaskOperation(const uint16_t mask)
            : mask(mask)
        {
        }

        uint16_t modify(uint16_t input) const override
        {
            return input ^ mask;
        }

        std::string description() const override
        {
            return hex("invert", this->mask);
        }
    };

    class AccumulatedOperation final : public IModifyRegisterOp {

        const std::vector<modify_reg_op_t> operations;

    public:
        AccumulatedOperation(std::vector<modify_reg_op_t> operations)
            : operations(std::move(operations))
        {
        }

        uint16_t modify(uint16_t input) const override
        {
            for (const auto& op : this->operations) {
                input = op->modify(input);
            }
            return input;
        }

        std::string description() const override
        {
            std::ostringstream oss;
            oss << "{ ";

            for (size_t i = 0; i < this->operations.size(); ++i) {
                if (i != 0) {
                    oss << ", ";
                }
                oss << this->operations[i]->description();
            }

            oss << " }";
            return oss.str();
        }
    };

    modify_reg_op_t Operations::clear_bit(uint8_t bit)
    {
        return std::make_shared<ClearBitOperation>(bit);
    }

    modify_reg_op_t Operations::set_bit(uint8_t bit)
    {
        return std::make_shared<SetBitOperation>(bit);
    }

    modify_reg_op_t Operations::clear_mask(uint16_t mask)
    {
        return std::make_shared<ClearMaskOperation>(mask);
    }

    modify_reg_op_t Operations::set_mask(uint16_t mask)
    {
        return std::make_shared<SetMaskOperation>(mask);
    }

    modify_reg_op_t Operations::invert_mask(uint16_t mask)
    {
        return std::make_shared<InvertMaskOperation>(mask);
    }

    modify_reg_op_t Operations::accumulate(std::vector<modify_reg_op_t> operations)
    {
        return std::make_shared<AccumulatedOperation>(std::move(operations));
    }

}
}
}
