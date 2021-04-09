// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "outstation/ModbusDatabase.h"

#include <modbus/server/db/InMemoryDatabase.h>

namespace adapter {
namespace modbus {
namespace outstation {

    ModbusDatabase::ModbusDatabase(api::publisher_t publisher)
        : m_publisher{publisher}
    {

    }

    void ModbusDatabase::add_coil_handler(uint16_t address, write_handler_t handler)
    {
        const auto it = m_coil_handlers.find(address);
        if(it != m_coil_handlers.end())
        {
            it->second.push_back(handler);
        }
        else
        {
            m_coil_handlers.insert({address, {handler}});
            add_coil(::modbus::Address{address}, false);
        }
    }

    void ModbusDatabase::add_register_handler(uint16_t address, write_handler_t handler)
    {
        const auto it = m_register_handlers.find(address);
        if(it != m_register_handlers.end())
        {
            it->second.push_back(handler);
        }
        else
        {
            m_register_handlers.insert({address, {handler}});
            add_holding_register(::modbus::Address{address}, 0);
        }
    }

    ::modbus::Expected<::modbus::WriteSingleCoilResponse> ModbusDatabase::on_request(const ::modbus::WriteSingleCoilRequest& request)
    {
        const auto result = ::modbus::InMemoryDatabase::on_request(request);

        if(result.is_valid())
        {
            handle_coil_write(request.value.address, request.value.value);
        }

        return result;
    }

    ::modbus::Expected<::modbus::WriteSingleRegisterResponse> ModbusDatabase::on_request(const ::modbus::WriteSingleRegisterRequest& request)
    {
        const auto result = ::modbus::InMemoryDatabase::on_request(request);

        if(result.is_valid())
        {
            handle_register_write(request.value.address, request.value.value);
        }

        return result;
    }

    ::modbus::Expected<::modbus::WriteMultipleCoilsResponse> ModbusDatabase::on_request(const ::modbus::WriteMultipleCoilsRequest& request)
    {
        const auto result = ::modbus::InMemoryDatabase::on_request(request);

        if(result.is_valid())
        {
            auto current_address = request.starting_address;
            for(const auto value : request.values)
            {
                handle_coil_write(current_address, value);
                ++current_address;
            }
        }

        return result;
    }

    ::modbus::Expected<::modbus::WriteMultipleRegistersResponse> ModbusDatabase::on_request(const ::modbus::WriteMultipleRegistersRequest& request)
    {
        const auto result = ::modbus::InMemoryDatabase::on_request(request);

        if(result.is_valid())
        {
            auto current_address = request.starting_address;
            for(const auto value : request.values)
            {
                handle_register_write(current_address, value);
                ++current_address;
            }
        }

        return result;
    }

    void ModbusDatabase::handle_coil_write(uint16_t address, bool value)
    {
        const auto it = m_coil_handlers.find(address);
        if(it != m_coil_handlers.end())
        {
            for(const auto& handler : it->second)
            {
                handler(*m_publisher, *this);
            }
        }
    }

    void ModbusDatabase::handle_register_write(uint16_t address, uint16_t value)
    {
        const auto it = m_register_handlers.find(address);
        if(it != m_register_handlers.end())
        {
            for(const auto& handler : it->second)
            {
                handler(*m_publisher, *this);
            }
        }
    }

}
}
}
