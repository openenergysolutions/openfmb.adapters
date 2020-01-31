
#include "WriteSingleCoilTransaction.h"
#include <modbus/exceptions/IException.h>

#include <sstream>

namespace adapter {
namespace modbus {
namespace master {

WriteSingleCoilTransaction::WriteSingleCoilTransaction(api::Logger logger, uint16_t index, bool value)
    : logger(std::move(logger))
    , index(index)
    , value(value)
{
}

void WriteSingleCoilTransaction::start(session_t session, const callback_t& callback)
{
    const auto write_callback = [self = this->shared_from_this(), callback](const ::modbus::Expected<::modbus::WriteSingleCoilResponse>& response) {
        if (!response.is_valid()) {
            self->logger.warn("{} failed: {}", self->get_description(), response.get_exception<::modbus::IException>().get_message());
        }
        callback(response.is_valid());
    };

    session->send_request(
        ::modbus::WriteSingleCoilRequest{ ::modbus::SingleBitValue{ this->index, this->value } },
        write_callback);
}

std::string WriteSingleCoilTransaction::get_description() const
{
    std::ostringstream oss;
    oss << "write coil: " << this->index << " with value: " << this->value;
    return oss.str();
}

}
}
}
