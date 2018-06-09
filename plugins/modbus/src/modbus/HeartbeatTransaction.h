

#ifndef OPENFMB_ADAPTER_HEARTBEATTRANSACTION_H
#define OPENFMB_ADAPTER_HEARTBEATTRANSACTION_H

#include "ITransaction.h"

#include <adapter-api/Logger.h>

namespace adapter
{
    namespace modbus
    {
        class HeartbeatTransaction final : public ITransaction, public std::enable_shared_from_this<HeartbeatTransaction>
        {
            Logger logger;
            const uint16_t address;
            const std::chrono::steady_clock::duration period;
            const uint16_t invert_mask;

        public:

            HeartbeatTransaction(Logger logger, uint16_t address, std::chrono::steady_clock::duration period, uint16_t invert_mask);

            void start(std::shared_ptr<::modbus::ISession> session, const std::function<void()>& callback) override;

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
