
#ifndef OPENFMB_ADAPTER_WRITEREGISTERTRANSACTION_H
#define OPENFMB_ADAPTER_WRITEREGISTERTRANSACTION_H

#include "ITransaction.h"

#include <adapter-api/Logger.h>

#include <sstream>

namespace adapter
{
    namespace modbus
    {
        class WriteRegisterTransaction : public ITransaction, public std::enable_shared_from_this<WriteRegisterTransaction>
        {
            Logger logger;
            const uint16_t index;
            const uint16_t value;

        public:

            WriteRegisterTransaction(Logger logger, uint16_t index, uint16_t value) :
                logger(std::move(logger)),
                index(index),
                value(value)
            {}

            std::string get_description() const override
            {
                std::ostringstream oss;
                oss << "write register: " << this->index << " with value: " << this->value;
                return oss.str();
            }

            void start(session_t session, const callback_t& callback) override;

        };
    }
}

#endif

