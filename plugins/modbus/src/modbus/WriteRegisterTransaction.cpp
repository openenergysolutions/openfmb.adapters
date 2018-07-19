
#include <modbus/exceptions/IException.h>
#include "WriteRegisterTransaction.h"

namespace adapter
{
    namespace modbus
    {
        void WriteRegisterTransaction::start(session_t session, const callback_t& callback)
        {
            const auto write_callback = [self = this->shared_from_this(), callback](const ::modbus::Expected<::modbus::WriteSingleRegisterResponse>& response)
            {
                if(!response.is_valid())
                {
                    self->logger.warn("{} failed: {}", self->get_description(), response.get_exception<::modbus::IException>().get_message());
                }
                callback(response.is_valid());
            };

            session->send_request(
                ::modbus::WriteSingleRegisterRequest{.value = ::modbus::RegisterValue {.address = this->index, .value = this->value}},
                write_callback
            );
        }
    }
}