#include "catch.hpp"

#include "modbus/Register16.h"
#include "modbus/Register32.h"

using namespace adapter::modbus;

TEST_CASE( "16-bit registers function as expected" )
{
    SECTION("Not set until value is set")
    {
        Register16 value;
        REQUIRE_FALSE(value.is_set());
        value.set(4);
        REQUIRE(value.is_set());
    }

    SECTION("Float converts as expected")
    {
        Register16 value;
        value.set(4);
        REQUIRE(value.to_float() == Approx(4.0f));
    }
}

TEST_CASE( "32-bit registers function as expected" )
{
    SECTION("Not set until both values set")
    {
        Register32 value(65536);
        REQUIRE_FALSE(value.is_set());

        value.get_lower()->set(4);
        REQUIRE_FALSE(value.is_set());
        value.get_upper()->set(6);
        REQUIRE(value.is_set());
    }

    SECTION("Float converts as expected")
    {

        Register32 value;
        value.get_lower()->set(3);
        value.get_upper()->set(1);
        // 3  + 65536 = 65539
        REQUIRE(value.to_float() == Approx(65539.0f));
    }

    SECTION("Modulo 10K format works")
    {

        Register32 value(10000);
        value.get_upper()->set(1234);
        value.get_lower()->set(5678);
        // 1234*10000 + 5678 = 123455679
        REQUIRE(value.to_int64() == 12345678);
    }
}