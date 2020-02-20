
#include <iostream>
#include "catch.hpp"

#include "schema-util/Builder.h"

using namespace adapter::schema;

// a test enum
struct FooBar {
    enum class Value {
        foo,
        bar
    };

    static constexpr const char* label = "foo-or-bar";
    static const std::array<Value, 2> values;
    static std::string to_string(Value value)
    {
        if(value == Value::foo) {
            return "foo";
        } else {
            return "bar";
        }
    }
};

const std::array<FooBar::Value, 2> FooBar::values = { FooBar::Value::foo, FooBar::Value::bar };

TEST_CASE( "schema serialization" )
{
    SECTION("writes a simple schema")
    {
        const auto endpoint = object_property(
                "endpoint",
                Required::yes,
                "IP endpoint",
                {
                        string_property(
                                "host",
                                Required::yes,
                                "Host IP address",
                                "127.0.0.1",
                                StringFormat::IPv4
                        ),
                        numeric_property<uint16_t>(
                                "port",
                                Required::yes,
                                "Endpoint port",
                                20000,
                                Bound<uint16_t>::from(1),
                                Bound<uint16_t>::from(65535)
                        )
                }
        );

        write_schema(std::cout, "https://www.github.com/openenergysolutions", { endpoint });
    }

    SECTION("writes an enum")
    {
        const auto enum_prop = enum_property<FooBar>(
                Required::yes,
                "foo or bar",
                FooBar::Value::bar);

        write_schema(std::cout, "https://www.github.com/openenergysolutions", { enum_prop });
    }
}

