
#ifndef OPENFMB_ADAPTER_WRITEREGISTERTRANSACTION_H
#define OPENFMB_ADAPTER_WRITEREGISTERTRANSACTION_H

#include "ITransaction.h"

#include <adapter-api/Logger.h>

namespace adapter {
namespace modbus {

    class WriteRegisterTransaction : public ITransaction, public std::enable_shared_from_this<WriteRegisterTransaction> {
        Logger logger;
        const uint16_t index;
        const uint16_t value;

    public:
        WriteRegisterTransaction(Logger logger, uint16_t index, uint16_t value);

        std::string get_description() const override;

        void start(session_t session, const callback_t& callback) override;
    };
}
}

#endif
