

#ifndef OPENFMB_ADAPTER_HEARTBEATTRANSACTION_H
#define OPENFMB_ADAPTER_HEARTBEATTRANSACTION_H

#include "ModifyRegisterTransactionBase.h"

namespace adapter {
namespace modbus {
    class HeartbeatTransaction final : public ModifyRegisterTransactionBase {
        const std::chrono::steady_clock::duration period;

    public:
        HeartbeatTransaction(Logger logger, uint16_t address, std::chrono::steady_clock::duration period, modify_reg_op_t op)
            : ModifyRegisterTransactionBase(
                  std::move(logger),
                  address,
                  std::move(op))
            , period(period)
        {
        }

        std::string get_description() const override
        {
            return "heartbeat";
        }

        bool is_periodic() const override
        {
            return true;
        }

        std::chrono::steady_clock::duration get_period() const override
        {
            return this->period;
        }
    };
}
}

#endif