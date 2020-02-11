
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
                "object",
                true,
                typed_property<std::string>("name", false, "John"),
                bounded_property<uint16_t>("port", true, 20000, Bound<uint16_t>::from(1), Bound<uint16_t>::from(65535))
        );

        JSONSchemaPrinter visitor(std::cout);
        schema->visit(visitor);
    }

}

