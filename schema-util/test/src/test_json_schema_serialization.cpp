
#include "catch.hpp"

#include "schema-util/Builder.h"
#include "JSONSchemaPrinter.h"

#include <iostream>

using namespace adapter::schema;

TEST_CASE( "schema serialization" )
{

    SECTION("if_present not invoked if value absent")
    {
        const auto endpoint = object_property(
                "endpoint",
                Required::yes,
                "IP endpoint",
                string_property(
                        "host",
                        Required::yes,
                        "127.0.0.1",
                        StringFormat::IPv4,
                        "Host IP address"
                ),
                numeric_property<uint16_t>(
                        "port",
                        Required::yes,
                        20000,
                        "Endpoint port",
                        Bound<uint16_t>::from(1),
                        Bound<uint16_t>::from(65535)
                )
        );

        write_schema(std::cout, "https://www.github.com/openenergysolutions", { endpoint });
    }

}

