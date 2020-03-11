
#ifndef OPENFMB_ADAPTER_WRITESINGLECOILTRANSACTION_H
#define OPENFMB_ADAPTER_WRITESINGLECOILTRANSACTION_H

#include "ITransaction.h"

#include <adapter-api/Logger.h>

namespace adapter {
namespace modbus {
namespace master {

class WriteSingleCoilTransaction : public ITransaction, public std::enable_shared_from_this<WriteSingleCoilTransaction> {

public:
    WriteSingleCoilTransaction(api::Logger logger, uint16_t index, bool value);

    std::string get_description() const override;

    void start(session_t session, const callback_t& callback) override;

private:
    api::Logger logger;
    const uint16_t index;
    const bool value;
};

}
}
}

#endif
