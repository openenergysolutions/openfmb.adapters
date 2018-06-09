
#ifndef OPENFMB_ADAPTER_ITRANSACTION_H
#define OPENFMB_ADAPTER_ITRANSACTION_H

#include "modbus/session/ISession.h"

#include <memory>
#include <functional>
#include <chrono>

namespace adapter
{
    namespace modbus
    {
        using session_t = std::shared_ptr<::modbus::ISession>;

        class ITransaction
        {
        public:

            virtual ~ITransaction() = default;

            using callback_t = std::function<void ()>;

            virtual void start(session_t session, const callback_t& callback) = 0;

            virtual bool is_periodic() const
            {
                return false;
            }

            virtual std::chrono::steady_clock::duration get_period() const
            {
                return std::chrono::steady_clock::duration::max();
            }
        };
    }
}

#endif
