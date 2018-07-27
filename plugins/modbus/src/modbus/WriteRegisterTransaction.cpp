
#include "WriteRegisterTransaction.h"
#include <modbus/exceptions/IException.h>

#include <sstream>

namespace adapter {
namespace modbus {

    WriteRegisterTransaction::WriteRegisterTransaction(Logger logger, uint16_t index, uint16_t value)
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
            ::modbus::WriteSingleRegisterRequest{::modbus::RegisterValue{this->index, this->value } },
            write_callback);
    }

    std::string WriteRegisterTransaction::get_description() const
    {
        std::ostringstream oss;
        oss << "write register: " << this->index << " with value: " << this->value;
        return oss.str();
    }
}
}