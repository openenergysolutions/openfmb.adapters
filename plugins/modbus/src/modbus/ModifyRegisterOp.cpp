
#include "ModifyRegisterOp.h"

#include <sstream>
#include <iomanip>

namespace adapter {
namespace modbus {

    inline std::string hex(const char* op, uint16_t num)
    {
        std::ostringstream oss;
        oss << op << "(0x" << std::setw(4) << std::setfill('0') << std::hex << num << ")";
        return oss.str();
    }

    class ClearMaskOperation final : public IModifyRegisterOp {
        const uint16_t mask;

    public:
        ClearMaskOperation(const uint16_t mask) : mask(mask) {}

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
        SetMaskOperation(const uint16_t mask) : mask(mask) {}

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
        InvertMaskOperation(const uint16_t mask) : mask(mask) {}

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

        AccumulatedOperation(std::vector<modify_reg_op_t> operations) :
                operations(std::move(operations)) {}

        uint16_t modify(uint16_t input) const override
        {
            for(const auto& op : this->operations)
            {
                input = op->modify(input);
            }
            return input;
        }

        std::string description() const override
        {
            std::ostringstream oss;
            oss << "{ ";

            for(size_t i = 0; i < this->operations.size(); ++i)
            {
                if(i != 0)
                {
                    oss << ", ";
                }
                oss << this->operations[i]->description();
            }

            oss << " }";
            return oss.str();
        }
    };


    modify_reg_op_t Operations::clear(uint16_t mask)
    {
        return std::make_shared<ClearMaskOperation>(mask);
    }

    modify_reg_op_t Operations::set(uint16_t mask)
    {
        return std::make_shared<SetMaskOperation>(mask);
    }

    modify_reg_op_t Operations::invert(uint16_t mask)
    {
        return std::make_shared<InvertMaskOperation>(mask);
    }

    modify_reg_op_t Operations::accumulate(std::vector<modify_reg_op_t> operations)
    {
        return std::make_shared<AccumulatedOperation>(std::move(operations));
    }


}
}


