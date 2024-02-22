// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 3/15/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_ITRANSACTIONPROCESSOR_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_ITRANSACTIONPROCESSOR_H

#include "ITransaction.h"

#include <memory>

namespace adapter {
namespace iccp {
namespace client {


class ITransactionProcessor {
public:
    virtual void add(std::shared_ptr<ITransaction> transaction) = 0;
};

}
}
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENT_ITRANSACTIONPROCESSOR_H
