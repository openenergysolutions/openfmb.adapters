
#ifndef OPENFMB_ADAPTER_WRITEMULTIPLEREGISTERSTRANSACTION_H
#define OPENFMB_ADAPTER_WRITEMULTIPLEREGISTERSTRANSACTION_H

#include "ITransaction.h"

#include <adapter-api/Logger.h>

#include <vector>

namespace adapter {
namespace modbus {
namespace master {

    class WriteMultipleRegistersTransaction : public ITransaction, public std::enable_shared_from_this<WriteMultipleRegistersTransaction> {
        api::Logger logger;
        const uint16_t start_index;
        const std::vector<uint16_t> values;

    public:
        WriteMultipleRegistersTransaction(api::Logger logger, uint16_t start_index, std::vector<uint16_t> values);

        WriteMultipleRegistersTransaction(api::Logger logger, uint16_t start_index, uint16_t value);

        std::string get_description() const override;

        void start(session_t session, const callback_t& callback) override;
    };

}
}
}

#endif
