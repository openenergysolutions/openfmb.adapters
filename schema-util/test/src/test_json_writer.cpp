
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
        JSONWriter writer(oss, true);
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
        JSONWriter writer(oss, true);
        writer.begin_object_property("empty");
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
        JSONWriter writer(oss, true);
        writer.begin_object_property("endpoint1");
        writer.write_property("host", "127.0.0.1");
        writer.write_property("port", "20000");
        writer.end_object();
        writer.begin_object_property("endpoint2");
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

    SECTION("can write array with two scalar elements")
    {
        std::ostringstream  oss;
        JSONWriter writer(oss, true);
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

    SECTION("can write array of objects two elements")
    {
        std::ostringstream  oss;
        JSONWriter writer(oss, true);
        writer.begin_array("items");
        writer.begin_object();
        writer.write_property("name","Jim");
        writer.end_object();
        writer.begin_object();
        writer.write_property("name","Susan");
        writer.end_object();
        writer.end_array();
        writer.close_document();

        const auto expected = ""
                              "{\n"
                              "    \"items\": [\n"
                              "        {\n"
                              "            \"name\": \"Jim\"\n"
                              "        },\n"
                              "        {\n"
                              "            \"name\": \"Susan\"\n"
                              "        }\n"
                              "    ]\n"
                              "}\n";


        REQUIRE(oss.str() == expected);
    }

}

