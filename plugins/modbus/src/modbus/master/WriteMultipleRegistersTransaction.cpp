// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "WriteMultipleRegistersTransaction.h"

#include <modbus/exceptions/IException.h>

#include <sstream>

namespace adapter {
namespace modbus {
namespace master {

    WriteMultipleRegistersTransaction::WriteMultipleRegistersTransaction(api::Logger logger, uint16_t start_index, uint16_t value)
        : logger(std::move(logger))
        , start_index(start_index)
        , values({ value })
    {
    }

    WriteMultipleRegistersTransaction::WriteMultipleRegistersTransaction(api::Logger logger, uint16_t start_index, std::vector<uint16_t> values)
        : logger(std::move(logger))
        , start_index(start_index)
        , values(std::move(values))
    {
    }

    void WriteMultipleRegistersTransaction::start(session_t session, const callback_t& callback)
    {
        const auto write_callback = [self = this->shared_from_this(), callback](const ::modbus::Expected<::modbus::WriteMultipleRegistersResponse>& response) {
            if (!response.is_valid()) {
                self->logger.warn("{} failed: {}", self->get_description(), response.get_exception<::modbus::IException>().get_message());
            }
            callback(response.is_valid());
        };

        session->send_request(
            ::modbus::WriteMultipleRegistersRequest{ this->start_index, this->values },
            write_callback);
    }

    std::string WriteMultipleRegistersTransaction::get_description() const
    {
        std::ostringstream oss;
        oss << "write register: " << this->start_index << " with values: [";
        for (auto value : this->values) {
            oss << value << ",";
        }
        oss << "]";
        return oss.str();
    }
}
}
}
