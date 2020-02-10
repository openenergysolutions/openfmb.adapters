#include "catch.hpp"

#include "DoubleWord.h"

using namespace adapter::modbus;

TEST_CASE("double word")
{
    SECTION("can mimic required operation for ESS")
    {
        const float value = 851968.3f;
        const auto dword = DoubleWord::get(static_cast<uint32_t>(value * 10));
        REQUIRE(dword.upper == 130);
        REQUIRE(dword.lower == 3);
    }
}
