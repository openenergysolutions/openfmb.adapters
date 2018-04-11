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

    SECTION("Converts to signed correctly")
    {
        Register16 value;
        value.set(65535);
        REQUIRE(value.to_sint16() == -1);
    }
}

TEST_CASE( "32-bit registers function as expected" )
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
}