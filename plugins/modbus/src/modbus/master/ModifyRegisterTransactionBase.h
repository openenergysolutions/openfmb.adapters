// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H
#define OPENFMB_ADAPTER_MODIFYREGISTERTRANSACTIONBASE_H

#include "ITransaction.h"
#include "ModifyRegisterOp.h"

#include <adapter-api/Logger.h>

namespace adapter {
namespace modbus {
namespace master {

    class ModifyRegisterTransactionBase : public ITransaction, public std::enable_shared_from_this<ModifyRegisterTransactionBase> {
        api::Logger logger;

    protected:
        const uint16_t address;
        const modify_reg_op_t operation;

    public:
        ModifyRegisterTransactionBase(api::Logger logger, uint16_t address, modify_reg_op_t operation);

        virtual ~ModifyRegisterTransactionBase() = default;

        void start(std::shared_ptr<::modbus::IClientSession> session, const callback_t& callback) final;
    };

}
}
}

#endif
