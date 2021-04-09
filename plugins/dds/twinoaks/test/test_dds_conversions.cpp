// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "catch.hpp"

#include "twinoaks/generated/ConvertFromProto.h"
#include "twinoaks/generated/ConvertToProto.h"

template <class D, class P>
void convert_round_trip(const P& input, P& output)
{
    D dds;
    adapter::dds::convert_from_proto(input, dds);
    adapter::dds::convert_to_proto(dds, output);
}

TEST_CASE("protobuf <=> DDS conversions round trip correctly")
{

    metermodule::MeterReadingProfile input;
    metermodule::MeterReadingProfile output;

    SECTION("Strings convert as expected")
    {
        input.mutable_readingmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_name()->set_value("name");

        convert_round_trip<twinoaks::metermodule::MeterReadingProfile>(input, output);

        REQUIRE(input.readingmessageinfo().messageinfo().identifiedobject().name().value() == output.readingmessageinfo().messageinfo().identifiedobject().name().value());
    }
}