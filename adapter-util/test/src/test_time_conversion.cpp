// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "catch.hpp"

#include "adapter-util/util/Time.h"

void test_from_conversion(uint64_t seconds, uint32_t nanos, uint64_t expected_ms)
{
    commonmodule::Timestamp ts;
    ts.set_seconds(seconds);
    ts.set_nanoseconds(nanos);

    const auto result = adapter::util::time::get(ts);
    const auto ms_since_epoch = std::chrono::duration_cast<std::chrono::milliseconds>(result.time_since_epoch()).count();

    REQUIRE(ms_since_epoch == expected_ms);
}

TEST_CASE("can convert from OpenFMB time to system time")
{
    test_from_conversion(101, 0, 101'000);

    // add one millisecond
    test_from_conversion(101, 1'000'000, 101'001);

    // adds one second
    test_from_conversion(101, 1'000'000'000, 102'000);
}

void test_to_conversion(std::chrono::system_clock::time_point time, uint64_t expected_seconds, uint32_t expected_nanos)
{
    commonmodule::Timestamp ts;
    adapter::util::time::set(time, ts);

    REQUIRE(ts.seconds() == expected_seconds);
    REQUIRE(ts.nanoseconds() == expected_nanos);
}

TEST_CASE("can convert from system time to OpenFMB")
{
    test_to_conversion(std::chrono::system_clock::time_point(std::chrono::milliseconds(4000)), 4, 0);
    
    test_to_conversion(std::chrono::system_clock::time_point(std::chrono::milliseconds(4001)), 4, 1'000'000);
}
