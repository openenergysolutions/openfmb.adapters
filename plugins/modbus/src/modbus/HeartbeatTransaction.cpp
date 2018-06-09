

#include <modbus/exceptions/IException.h>
#include "HeartbeatTransaction.h"

namespace adapter
{
    namespace modbus
    {
        HeartbeatTransaction::HeartbeatTransaction(Logger logger, uint16_t address, std::chrono::steady_clock::duration period, uint16_t invert_mask) :
            logger(std::move(logger)),
            address(address),
            period(period),
            invert_mask(invert_mask)
        {}

        void HeartbeatTransaction::start(std::shared_ptr<::modbus::ISession> session, const std::function<void()>& callback)
        {
            const auto read_handler = [self = this->shared_from_this(), session = session, callback](const ::modbus::Expected<::modbus::ReadHoldingRegistersResponse>& response)
            {
                if(response.is_valid())
                {
                    if(response.get().values.size() == 1)
                    {
                        // invert the specified bits in the received value
                        const uint16_t write_value = response.get().values[0].value ^ self->invert_mask;

                        const auto write_handler = [self = self, callback](const ::modbus::Expected<::modbus::WriteSingleRegisterResponse>& response)
                        {
                            if(!response.is_valid())
                            {
                                self->logger.warn("heartbeat write failed: ", response.get_exception<::modbus::IException>().get_message());
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
                    self->logger.warn("heartbeat read failed: {}", response.get_exception<::modbus::IException>().get_message());
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

