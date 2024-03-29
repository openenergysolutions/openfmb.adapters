// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "catch.hpp"

#include "proto-api/metermodule/metermodule.pb.h"

TEST_CASE("Can set and get a deep value")
{
    metermodule::MeterReadingProfile profile;

    const auto value = 42.0;

    // set a value in a single statement
    // meterreading.readingmmxu.a.phsa.cval.mag.f
    profile.mutable_meterreading()->mutable_readingmmxu()->mutable_a()->mutable_phsa()->mutable_cval()->mutable_ang()->set_value(value);

    // retrieve a value in a single statement
    // NOTE: This doesn't address if the value is even present on the message. If it isn't present, the returned value will be zero
    const auto read_value = profile.meterreading().readingmmxu().a().phsa().cval().ang().value();

    REQUIRE(value == read_value);
}
