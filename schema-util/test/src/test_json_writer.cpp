
#include "catch.hpp"

#include "JSONWriter.h"
#include "Lines.h"

#include <iostream>
#include <sstream>

using namespace adapter::schema;

TEST_CASE( "test json writer" )
{
    SECTION("can write 2 properties with correct comma placement")
    {
        std::ostringstream  oss;
        JSONWriter writer(oss);
        writer.write_property("host", "127.0.0.1");
        writer.write_property("port", 20000);
        writer.close_document();

        const auto expected = lines({
                "{",
                R"(    "host": "127.0.0.1",)",
                R"(    "port": 20000)",
                "}"
        });

        REQUIRE(oss.str() == expected);
    }

    SECTION("empty objects can written")
    {
        std::ostringstream  oss;
        JSONWriter writer(oss);
        writer.begin_object("empty");
        writer.end_object();
        writer.close_document();

        const auto expected = lines({
                                            "{",
                                            R"(    "empty": {)",
                                              "    }",
                                            "}"
                                    });

        REQUIRE(oss.str() == expected);
    }

    SECTION("can write 2 properties within 2 objects")
    {
        std::ostringstream  oss;
        JSONWriter writer(oss);
        writer.begin_object("endpoint1");
        writer.write_property("host", "127.0.0.1");
        writer.write_property("port", "20000");
        writer.end_object();
        writer.begin_object("endpoint2");
        writer.write_property("host", "127.0.0.1");
        writer.write_property("port", "20000");
        writer.end_object();
        writer.close_document();

        const auto expected = lines({
                                            "{",
                                            "    \"endpoint1\": {",
                                            R"(        "host": "127.0.0.1",)",
                                            R"(        "port": "20000")",
                                            "    },",
                                            "    \"endpoint2\": {",
                                            R"(        "host": "127.0.0.1",)",
                                            R"(        "port": "20000")",
                                            "    }",
                                            "}"
                                    });

        REQUIRE(oss.str() == expected);
    }

    SECTION("can write array with two elements")
    {
        std::ostringstream  oss;
        JSONWriter writer(oss);
        writer.begin_array("names");
        writer.write_scalar("Jim");
        writer.write_scalar("Susan");
        writer.end_array();
        writer.close_document();

        const auto expected = ""
                              "{\n"
                              "    \"names\": [\n"
                              "        \"Jim\",\n"
                              "        \"Susan\"\n"
                              "    ]\n"
                              "}\n";


        REQUIRE(oss.str() == expected);
    }

}

