#include "catch.hpp"

#include "modbus/ModifyRegisterOp.h"

using namespace adapter::modbus;

TEST_CASE("register operations behave as expected")
{
    SECTION("can set a single bit")
    {
        const auto op = Operations::set(0x0002);
        REQUIRE(op->modify(0x0001) == 0x0003);
        REQUIRE(op->description() == "set(0x0002)");
    }

    SECTION("can clear a single bit")
    {
        const auto op = Operations::clear(0x0100);
        REQUIRE(op->modify(0xFFFF) == 0xFEFF);
        REQUIRE(op->description() == "clear(0x0100)");
    }

    SECTION("transactions can be combined")
    {
        const auto op = Operations::accumulate(
                { Operations::set(0x0001), Operations::clear(0x0100) }
        );
        REQUIRE(op->modify(0xFFFE) == 0xFEFF);
        REQUIRE(op->description() == "{ set(0x0001), clear(0x0100) }");
    }
}

