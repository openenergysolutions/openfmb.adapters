
#ifndef OPENFMB_ADAPTER_MODIFYREGISTEROP_H
#define OPENFMB_ADAPTER_MODIFYREGISTEROP_H

#include <cstdint>
#include <numeric>
#include <memory>
#include <vector>

namespace adapter {
namespace modbus {

    class IModifyRegisterOp {
        public:
            virtual uint16_t modify(uint16_t input) const = 0;
            virtual std::string description() const = 0;
    };


    using modify_reg_op_t = std::shared_ptr<IModifyRegisterOp>;

    struct Operations {

        static modify_reg_op_t clear(uint16_t mask);

        static modify_reg_op_t set(uint16_t mask);

        static modify_reg_op_t invert(uint16_t mask);

        static modify_reg_op_t accumulate(std::vector<modify_reg_op_t> operations);

    };

}
}

#endif


