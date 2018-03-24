#include "catch.hpp"

#include "modbus/Register32.h"

using namespace adapter;

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

    SECTION("Float converts as expected")
    {

        Register32 value;
        value.get_lower()->set(3);
        value.get_upper()->set(1);
        // 3  + 65536 = 65539
        REQUIRE(value.to_float(1.0) == Approx(65539));
    }
}