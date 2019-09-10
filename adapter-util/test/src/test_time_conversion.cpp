#include "catch.hpp"

#include "adapter-util/util/Time.h"

void test_conversion(uint64_t seconds, uint32_t fraction, uint64_t expected_ms)
{
    commonmodule::Timestamp ts;
    ts.set_seconds(seconds);
    ts.set_fraction(fraction);

    const auto result = adapter::util::time::get(ts);
    const auto ms_since_epoch = std::chrono::duration_cast<std::chrono::milliseconds>(result.time_since_epoch()).count();

    REQUIRE(ms_since_epoch == expected_ms);
}

TEST_CASE("can convert from OpenFMB time to system time")
{
    test_conversion(101, 0, 101'000);

    // small fractions still map to zero milliseconds
    test_conversion(101, 1, 101'000);

    // the maximum value maps to a full second
    test_conversion(101, std::numeric_limits<uint32_t>::max(), 102'000);
}
