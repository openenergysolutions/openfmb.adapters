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

TEST_CASE( "protobuf <=> DDS conversions round trip correctly" ) {

    resourcemodule::ResourceReadingProfile input;
    resourcemodule::ResourceReadingProfile output;

    SECTION("Strings convert as expected") {


        input.mutable_readingmessageinfo()->set_applicationname("application");

        convert_round_trip<openfmb::resourcemodule::ResourceReadingProfile>(input, output);

        REQUIRE(input.readingmessageinfo().applicationname() == output.readingmessageinfo().applicationname());
    }
}