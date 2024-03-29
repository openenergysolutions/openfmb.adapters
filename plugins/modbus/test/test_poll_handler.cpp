// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "catch.hpp"

#include "master/IRequestBuilder.h"
#include "master/PollHandler.h"

using namespace adapter::modbus::master;

class RequestBuilderMock : public IRequestBuilder {
public:
    std::vector<::modbus::ReadHoldingRegistersRequest> read_holding_register_requests;

    void add(const ::modbus::ReadCoilsRequest& request) override {}

    void add(const ::modbus::ReadDiscreteInputsRequest& request) override {}

    void add(const ::modbus::ReadHoldingRegistersRequest& request) override
    {
        read_holding_register_requests.push_back(request);
    }

    void add(const ::modbus::ReadInputRegistersRequest& request) override {}
};

TEST_CASE("Auto-polling")
{
    PollHandler handler;
    RequestBuilderMock builder;

    SECTION("Byte discontinuity")
    {
        SECTION("No discontinuity allowed")
        {
            SECTION("Perform only one poll when no discontinuity")
            {
                handler.add_holding_register(42, nullptr);
                handler.add_holding_register(43, nullptr);
                handler.add_holding_register(44, nullptr);
                handler.add_holding_register(45, nullptr);
                handler.add_holding_register(46, nullptr);

                handler.configure(AutoPollConfig(0, 0), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 1);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 42);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 5);
            }

            SECTION("Split poll in two when the request is too big")
            {
                for (uint16_t i = 0; i <= 125; ++i) {
                    handler.add_holding_register(i, nullptr);
                }

                handler.configure(AutoPollConfig(0, 0), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 2);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 0);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 125);
                REQUIRE(builder.read_holding_register_requests[1].starting_address == 125);
                REQUIRE(builder.read_holding_register_requests[1].qty_of_registers == 1);
            }

            SECTION("Perform two polls when there is a discontinuity")
            {
                handler.add_holding_register(0, nullptr);
                handler.add_holding_register(2, nullptr);

                handler.configure(AutoPollConfig(0, 0), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 2);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 0x00);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 1);
                REQUIRE(builder.read_holding_register_requests[1].starting_address == 0x02);
                REQUIRE(builder.read_holding_register_requests[1].qty_of_registers == 1);
            }

            SECTION("Perform three polls on complex discontinuities")
            {
                handler.add_holding_register(0, nullptr);
                handler.add_holding_register(1, nullptr);
                handler.add_holding_register(3, nullptr);
                handler.add_holding_register(5, nullptr);
                handler.add_holding_register(6, nullptr);

                handler.configure(AutoPollConfig(0, 0), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 3);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 0);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 2);
                REQUIRE(builder.read_holding_register_requests[1].starting_address == 3);
                REQUIRE(builder.read_holding_register_requests[1].qty_of_registers == 1);
                REQUIRE(builder.read_holding_register_requests[2].starting_address == 5);
                REQUIRE(builder.read_holding_register_requests[2].qty_of_registers == 2);
            }
        }

        SECTION("Discontinuity allowed")
        {
            constexpr auto allowed_discontinuity = 20;

            SECTION("Perform only one poll when no discontinuity")
            {
                handler.add_holding_register(42, nullptr);
                handler.add_holding_register(43, nullptr);
                handler.add_holding_register(44, nullptr);
                handler.add_holding_register(45, nullptr);
                handler.add_holding_register(46, nullptr);

                handler.configure(AutoPollConfig(0, allowed_discontinuity), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 1);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 42);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 5);
            }

            SECTION("Perform only one poll when the discontinuity is too small")
            {
                handler.add_holding_register(42, nullptr);
                handler.add_holding_register(43, nullptr);
                handler.add_holding_register(63, nullptr);
                handler.add_holding_register(64, nullptr);

                handler.configure(AutoPollConfig(0, allowed_discontinuity), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 1);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 42);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 23);
            }

            SECTION("Split the polls when the discontinuity is too big")
            {
                handler.add_holding_register(42, nullptr);
                handler.add_holding_register(43, nullptr);
                handler.add_holding_register(142, nullptr);

                handler.configure(AutoPollConfig(0, allowed_discontinuity), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 2);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 42);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 2);
                REQUIRE(builder.read_holding_register_requests[1].starting_address == 142);
                REQUIRE(builder.read_holding_register_requests[1].qty_of_registers == 1);
            }

            SECTION("Split poll in two when the request is too big but the discontinuity is satisfied")
            {
                handler.add_holding_register(0, nullptr);
                handler.add_holding_register(125, nullptr);

                handler.configure(AutoPollConfig(0, 1000), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 2);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 0);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 1);
                REQUIRE(builder.read_holding_register_requests[1].starting_address == 125);
                REQUIRE(builder.read_holding_register_requests[1].qty_of_registers == 1);
            }

            SECTION("Split poll in two when the request is too big but the discontinuity is satisfied", "[hide]")
            {
                handler.add_holding_register(0, nullptr);
                handler.add_holding_register(124, nullptr);
                handler.add_holding_register(125, nullptr);

                handler.configure(AutoPollConfig(0, 1000), builder);

                REQUIRE(builder.read_holding_register_requests.size() == 2);
                REQUIRE(builder.read_holding_register_requests[0].starting_address == 0);
                REQUIRE(builder.read_holding_register_requests[0].qty_of_registers == 125);
                REQUIRE(builder.read_holding_register_requests[1].starting_address == 125);
                REQUIRE(builder.read_holding_register_requests[1].qty_of_registers == 1);
            }
        }
    }
}
