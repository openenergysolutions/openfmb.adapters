
#include "FlipSingleCoilTransaction.h"
#include "WriteSingleCoilTransaction.h"
#include <modbus/exceptions/IException.h>
#include <modbus/messages/ReadCoilsRequest.h>

#include <sstream>

namespace adapter {
namespace modbus {

FlipSingleCoilTransaction::FlipSingleCoilTransaction(api::Logger logger, uint16_t index)
    : logger(std::move(logger))
    , index(index)
{
}

void FlipSingleCoilTransaction::start(session_t session, const callback_t& callback)
{
    const auto read_handler = [self = this->shared_from_this(), session = session, callback](const ::modbus::Expected<::modbus::ReadCoilsResponse>& response) {
        if (response.is_valid()) {
            if (response.get().values.size() == 1) {

                // process all of the operations on the read value
                const uint16_t flipped_value = !response.get().values[0].value;

                std::make_shared<WriteSingleCoilTransaction>(self->logger, self->index, flipped_value)->start(session, callback);

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
        ::modbus::ReadCoilsRequest{ this->index, 1 },
        read_handler);
}

std::string FlipSingleCoilTransaction::get_description() const
{
    std::ostringstream oss;
    oss << "flip coil: " << this->index;
    return oss.str();
}

}
}
