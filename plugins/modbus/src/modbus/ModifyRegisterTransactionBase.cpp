

#include "ModifyRegisterTransactionBase.h"

#include <modbus/exceptions/IException.h>

#include <numeric>

namespace adapter
{
    namespace modbus
    {
        ModifyRegisterTransactionBase::ModifyRegisterTransactionBase(Logger logger, uint16_t address, modify_reg_op_t operation) :
            logger(std::move(logger)),
            address(address),
            operation(std::move(operation))
        {}

        void ModifyRegisterTransactionBase::start(std::shared_ptr<::modbus::ISession> session, const std::function<void()>& callback)
        {
            const auto read_handler = [self = this->shared_from_this(), session = session, callback](const ::modbus::Expected<::modbus::ReadHoldingRegistersResponse>& response)
            {
                if(response.is_valid())
                {
                    if(response.get().values.size() == 1)
                    {
                        // process all of the operations on the read value
                        const uint16_t write_value = self->operation(response.get().values[0].value);

                        const auto write_handler = [self = self, callback](const ::modbus::Expected<::modbus::WriteSingleRegisterResponse>& response)
                        {
                            if(!response.is_valid())
                            {
                                self->logger.warn("{} write failed: ", self->get_description(), response.get_exception<::modbus::IException>().get_message());
                            }

                            callback();
                        };

                        session->send_request(
                            ::modbus::WriteSingleRegisterRequest { .value = ::modbus::RegisterValue {.address = self->address, .value = write_value }},
                            write_handler
                        );
                    }
                    else
                    {
                        self->logger.warn("response does not contain a single value: {}", response.get().values.size());
                        callback();
                    }
                }
                else
                {
                    self->logger.warn("{} failed: {}", self->get_description(), response.get_exception<::modbus::IException>().get_message());
                    callback();
                }
            };

            session->send_request(
                ::modbus::ReadHoldingRegistersRequest{.starting_address = this->address, .qty_of_registers = 1},
                read_handler
            );
        }

    }
}

