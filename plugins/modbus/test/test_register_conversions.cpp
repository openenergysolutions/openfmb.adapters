// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "catch.hpp"

#include "Register16.h"
#include "Register32.h"

using namespace adapter::modbus;

TEST_CASE("16-bit registers function as expected")
{
    SECTION("Not set until value is set")
    {
        Register16 value;
        REQUIRE_FALSE(value.is_set());
        value.set(4);
        REQUIRE(value.is_set());
    }

    SECTION("Converts to signed correctly")
    {
        Register16 value;
        value.set(65535);
        REQUIRE(value.to_sint16() == -1);
    }
}

TEST_CASE("32-bit registers function as expected")
{
    SECTION("Not set until both values set")
    {
        Register32 value;
        REQUIRE_FALSE(value.is_set());

        value.get_lower()->set(4);
        REQUIRE_FALSE(value.is_set());
        value.get_upper()->set(6);
        REQUIRE(value.is_set());
    }

    SECTION("converts to uint32 correctly")
    {

        Register32 value;
        value.get_lower()->set(3);
        value.get_upper()->set(1);
        // 3  + 65536 = 65539
        REQUIRE(value.to_uint32() == 65539);
    }

    SECTION("converts to sint32 correctly")
    {
        Register32 value;
        value.get_lower()->set(0xFFFE);
        value.get_upper()->set(0xFFFF);
        REQUIRE(value.to_sint32() == -2);
    }

    SECTION("converts to uint32 modulo 10K")
    {
        Register32 value;
        value.get_upper()->set(1234);
        value.get_lower()->set(5678);
        // 1234*10000 + 5678 = 123455679
        REQUIRE(value.to_uint32(10000) == 12345678);
    }

    SECTION("converts to float32 correctly")
    {
        SECTION("Zero")
        {
            Register32 value;
            value.get_upper()->set(0x0000);
            value.get_lower()->set(0x0000);
            REQUIRE(value.to_float32() == Approx(0.0f));
        }

        SECTION("Positive number")
        {
            Register32 value;
            value.get_upper()->set(0x4228);
            value.get_lower()->set(0xCCCD);
            REQUIRE(value.to_float32() == Approx(42.2f));
        }

        SECTION("Negative number")
        {
            Register32 value;
            value.get_upper()->set(0xC299);
            value.get_lower()->set(0x3333);
            REQUIRE(value.to_float32() == Approx(-76.6f));
        }

        SECTION("Fraction number")
        {
            Register32 value;
            value.get_upper()->set(0x3DFC);
            value.get_lower()->set(0xB924);
            REQUIRE(value.to_float32() == Approx(0.1234f));
        }

        SECTION("NaN")
        {
            Register32 value;
            value.get_upper()->set(0xFFC0);
            value.get_lower()->set(0x0000);
            auto result = value.to_float32();
            REQUIRE(std::isnan(result));
        }

        SECTION("+Infinity")
        {
            Register32 value;
            value.get_upper()->set(0x7F80);
            value.get_lower()->set(0x0000);
            auto result = value.to_float32();
            REQUIRE(std::isinf(result));
            REQUIRE(result > 0);
        }

        SECTION("-Infinity")
        {
            Register32 value;
            value.get_upper()->set(0xFF80);
            value.get_lower()->set(0x0000);
            auto result = value.to_float32();
            REQUIRE(std::isinf(result));
            REQUIRE(result < 0);
        }
    }
}