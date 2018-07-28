

#include "ModifyRegisterTransactionBase.h"

#include "WriteRegisterTransaction.h"
#include "WriteMultipleRegistersTransaction.h"


#include <modbus/exceptions/IException.h>

#include <numeric>

namespace adapter {
namespace modbus {

    std::shared_ptr<ITransaction> create_write_transaction(uint16_t address, Logger logger, uint16_t value, bool write_multiple)
    {
        if(write_multiple)
        {
            return std::make_shared<WriteMultipleRegistersTransaction>(logger, address, value);
        }
        else
        {
            return std::make_shared<WriteRegisterTransaction>(logger, address, value);
        }
    }

    ModifyRegisterTransactionBase::ModifyRegisterTransactionBase(Logger logger, uint16_t address, modify_reg_op_t operation, bool always_write_multiple_registers)
        : logger(std::move(logger))
        , address(address)
        , operation(std::move(operation))
        , always_write_multiple_registers(always_write_multiple_registers)
    {
    }

    void ModifyRegisterTransactionBase::start(std::shared_ptr<::modbus::ISession> session, const callback_t& callback)
    {
        const auto read_handler = [self = this->shared_from_this(), session = session, callback](const ::modbus::Expected<::modbus::ReadHoldingRegistersResponse>& response) {
            if (response.is_valid()) {
                if (response.get().values.size() == 1) {

                    // process all of the operations on the read value
                    const uint16_t write_value = self->operation(response.get().values[0].value);

                    // create the appropriate write transaction and start it
                    create_write_transaction(self->address, self->logger, write_value, self->always_write_multiple_registers)->start(session, callback);

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
            ::modbus::ReadHoldingRegistersRequest{this->address, 1},
            read_handler);
    }
}
}
