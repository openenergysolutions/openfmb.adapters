
#include "WriteRegisterTransaction.h"
#include <modbus/exceptions/IException.h>

#include <sstream>

namespace adapter {
namespace modbus {

    WriteRegisterTransaction::WriteRegisterTransaction(api::Logger logger, uint16_t index, uint16_t value)
        : logger(std::move(logger))
        , index(index)
        , value(value)
    {
    }

    void WriteRegisterTransaction::start(session_t session, const callback_t& callback)
    {
        const auto write_callback = [self = this->shared_from_this(), callback](const ::modbus::Expected<::modbus::WriteSingleRegisterResponse>& response) {
            if (!response.is_valid()) {
                self->logger.warn("{} failed: {}", self->get_description(), response.get_exception<::modbus::IException>().get_message());
            }
            callback(response.is_valid());
        };

        session->send_request(
            ::modbus::WriteSingleRegisterRequest{ ::modbus::RegisterValue{ this->index, this->value } },
            write_callback);
    }

    std::string WriteRegisterTransaction::get_description() const
    {
        std::ostringstream oss;

        if (this->value > std::numeric_limits<int16_t>::max()) {
            // also describe the value as a negative integer if it exceeds the maximum value of int16_t
            oss << "write register: " << this->index << " with value: " << this->value << " (" << static_cast<int16_t>(this->value) << ")";
        } else {
            oss << "write register: " << this->index << " with value: " << this->value;
        }
        return oss.str();
    }
}
}