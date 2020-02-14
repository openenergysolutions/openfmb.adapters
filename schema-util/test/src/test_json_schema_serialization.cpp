
#include "catch.hpp"

#include "schema-util/Types.h"
#include "schema-util/JSONSchemaPrinter.h"

#include <iostream>

using namespace adapter::schema;

TEST_CASE( "schema serialization" )
{

    SECTION("if_present not invoked if value absent")
    {
        const auto schema = object_property(
                "endpoint",
                true,
                "IP endpoint",
                string_property(
                        "host",
                        false,
                        "127.0.0.1",
                        StringFormat::IPv4,
                        "Host IP address"
                ),
                bounded_property<uint16_t>(
                        "port",
                        true,
                        20000,
                        "Endpoint port",
                        Bound<uint16_t>::from(1),
                        Bound<uint16_t>::from(65535)
                )
        );

        JSONSchemaPrinter visitor(std::cout, "https://www.github.com/openenergysolutions");
        schema->visit(visitor);
        visitor.close_document();
    }

}

