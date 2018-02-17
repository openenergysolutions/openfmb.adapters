#include "catch.hpp"

#include <adapter-api/proto/resourcemodule/resourcemodule.pb.h>

#include "twinoaks/generated/ConvertFromProto.h"
#include "twinoaks/generated/ConvertToProto.h"

TEST_CASE( "protobuf <=> DDS conversions round trip correctly" ) {

    SECTION("Strings convert as expected") {

        resourcemodule::ResourceReadingProfile input;
        resourcemodule::ResourceReadingProfile output;

        input.mutable_readingmessageinfo()->set_applicationname("application");


        {
            openfmb::resourcemodule::ResourceReadingProfile dds;
            adapter::dds::convert_from_proto(input, dds);
            adapter::dds::convert_to_proto(dds, output);
        }

        REQUIRE(input.readingmessageinfo().applicationname() == output.readingmessageinfo().applicationname());
    }
}