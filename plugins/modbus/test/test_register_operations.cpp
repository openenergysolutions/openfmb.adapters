#include "catch.hpp"

#include "modbus/ModifyRegisterOp.h"

using namespace adapter::modbus;

TEST_CASE("register operations behave as expected")
{
    SECTION("can set bits in mask")
    {
        const auto op = Operations::set_mask(0x0002);
        REQUIRE(op->modify(0x0001) == 0x0003);
        REQUIRE(op->description() == "set(0x0002)");
    }

    SECTION("can clear bits in mask")
    {
        const auto op = Operations::clear_mask(0x0100);
        REQUIRE(op->modify(0xFFFF) == 0xFEFF);
        REQUIRE(op->description() == "clear(0x0100)");
    }

    SECTION("can set a single bit")
    {
        const auto op = Operations::set_bit(15);
        REQUIRE(op->modify(0x0001) == 0x8001);
        REQUIRE(op->description() == "set(b15)");
    }

    SECTION("can clear a single bit")
    {
        const auto op = Operations::clear_bit(8);
        REQUIRE(op->modify(0x0101) == 0x0001);
        REQUIRE(op->description() == "clear(b8)");
    }

    SECTION("transactions can be combined")
    {
        const auto op = Operations::accumulate(
            { Operations::set_mask(0x0001), Operations::clear_mask(0x0100) });
        REQUIRE(op->modify(0xFFFE) == 0xFEFF);
        REQUIRE(op->description() == "{ set(0x0001), clear(0x0100) }");
    }
}
