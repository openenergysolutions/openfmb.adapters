
#ifndef OPENFMB_ADAPTER_MODBUS_ITRANSACTIONPROCESSOR_H
#define OPENFMB_ADAPTER_MODBUS_ITRANSACTIONPROCESSOR_H

#include "ITransaction.h"

#include <memory>

namespace adapter {
namespace modbus {
namespace master {

    /**
         * Something that can asynchronously process Modbus transactions
         */
    class ITransactionProcessor {
    public:
        virtual void add(std::shared_ptr<ITransaction> transaction) = 0;
    };

}
}
}

#endif
