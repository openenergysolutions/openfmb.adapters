// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_MODBUS_MODBUSDATABASE_H
#define OPENFMB_ADAPTER_MODBUS_MODBUSDATABASE_H

#include <adapter-api/IPublisher.h>

#include <modbus/server/db/InMemoryDatabase.h>

#include <functional>
#include <unordered_map>
#include <vector>

namespace adapter {
namespace modbus {
namespace outstation {

    class ModbusDatabase final : public ::modbus::InMemoryDatabase {

        using write_handler_t = std::function<void(api::IPublisher&, ::modbus::IDatabase&)>;
        using write_handler_vec_t = std::vector<write_handler_t>;

    public:
        ModbusDatabase(api::publisher_t publisher);
        ~ModbusDatabase() = default;

        void add_coil_handler(uint16_t, write_handler_t handler);
        void add_register_handler(uint16_t, write_handler_t handler);

    protected:
        ::modbus::Expected<::modbus::WriteSingleCoilResponse> on_request(const ::modbus::WriteSingleCoilRequest& request) override;
        ::modbus::Expected<::modbus::WriteSingleRegisterResponse> on_request(const ::modbus::WriteSingleRegisterRequest& request) override;
        ::modbus::Expected<::modbus::WriteMultipleCoilsResponse> on_request(const ::modbus::WriteMultipleCoilsRequest& request) override;
        ::modbus::Expected<::modbus::WriteMultipleRegistersResponse> on_request(const ::modbus::WriteMultipleRegistersRequest& request) override;

    private:
        void handle_coil_write(uint16_t address, bool value);
        void handle_register_write(uint16_t address, uint16_t value);

        api::publisher_t m_publisher;
        std::unordered_map<uint16_t, write_handler_vec_t> m_coil_handlers;
        std::unordered_map<uint16_t, write_handler_vec_t> m_register_handlers;
    };

}
}
}

#endif
