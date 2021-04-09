// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_FLIPSINGLECOILTRANSACTION_H
#define OPENFMB_ADAPTER_FLIPSINGLECOILTRANSACTION_H

#include "ITransaction.h"

#include <adapter-api/Logger.h>

namespace adapter {
namespace modbus {
namespace master {

class FlipSingleCoilTransaction : public ITransaction, public std::enable_shared_from_this<FlipSingleCoilTransaction> {

public:
    FlipSingleCoilTransaction(api::Logger logger, uint16_t index);

    std::string get_description() const override;

    void start(session_t session, const callback_t& callback) override;

private:
    api::Logger logger;
    const uint16_t index;
};

}
}
}

#endif
