// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "ModifyRegisterTransactionBase.h"

#include "WriteRegisterTransaction.h"

#include <modbus/exceptions/IException.h>

#include <numeric>

namespace adapter {
namespace modbus {
namespace master {

    ModifyRegisterTransactionBase::ModifyRegisterTransactionBase(api::Logger logger, uint16_t address, modify_reg_op_t operation)
        : logger(std::move(logger))
        , address(address)
        , operation(std::move(operation))
    {
    }

    void ModifyRegisterTransactionBase::start(std::shared_ptr<::modbus::IClientSession> session, const callback_t& callback)
    {
        const auto read_handler = [self = this->shared_from_this(), session = session, callback](const ::modbus::Expected<::modbus::ReadHoldingRegistersResponse>& response) {
            if (response.is_valid()) {
                if (response.get().values.size() == 1) {

                    // process all of the operations on the read value
                    const uint16_t write_value = self->operation->modify(response.get().values[0].value);

                    std::make_shared<WriteRegisterTransaction>(self->logger, self->address, write_value)->start(session, callback);

                } else {
                    self->logger.warn("response does not contain a single value: {}", response.get().values.size());
                    callback(false);
                }
            } else {
                self->logger.warn("{} read failed: {}", self->get_description(), response.get_exception<::modbus::IException>().get_message());
                callback(false);
            }
        };

        session->send_request(
            ::modbus::ReadHoldingRegistersRequest{ this->address, 1 },
            read_handler);
    }

}
}
}
