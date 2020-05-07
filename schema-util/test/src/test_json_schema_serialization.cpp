
#include <array>
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
                Object {
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
                }

        );

        write_schema(std::cout, "https://www.github.com/openenergysolutions", { endpoint }, true);
    }

    SECTION("write a boolean")
    {
        const auto bool_prop = bool_property("foo", Required::yes, "foo or !foo", false);

        write_schema(std::cout, "https://www.github.com/openenergysolutions", { bool_prop }, true);
    }

    SECTION("writes an enum")
    {
        const auto enum_prop = enum_property<FooBar>(
                Required::yes,
                "foo or bar",
                FooBar::Value::bar);

        write_schema(std::cout, "https://www.github.com/openenergysolutions", { enum_prop }, true);
    }

    SECTION("writes a OneOf object")
    {
        const auto enumeration = enum_property<FooBar>(
                Required::yes,
                "foo or bar",
                FooBar::Value::bar);

        const auto foo_prop = string_property("foo", Required::yes, "value when foo", "wat", StringFormat::None);
        const auto bar_prop = string_property("bar", Required::yes, "value when bar", "wat", StringFormat::None);

        const auto object = object_property(
                "stuff",
                Required::yes,
                "description",
                Object(
                        { enumeration, foo_prop, bar_prop},
                        OneOf(
                                {
                                        Variant({enumeration->when(FooBar::Value::foo)}, {foo_prop}),
                                        Variant({enumeration->when(FooBar::Value::bar)}, {bar_prop}),
                                }
                        )
                )

        );


        write_schema(std::cout, "https://www.github.com/openenergysolutions", { object }, true);
    }


    SECTION("writes an array property")
    {
        const auto array = array_property(
                "endpoints",
                Required::yes,
                "array of endpoints",
                Object(
                        {
                                string_property("address", Required::yes, "IP address", "127.0.0.1", StringFormat::IPv4),
                                numeric_property<uint16_t>(
                                        "port",
                                        Required::yes,
                                        "Endpoint port",
                                        20000,
                                        Bound<uint16_t>::from(1),
                                        Bound<uint16_t>::from(65535)
                                )
                        })
        );


        write_schema(std::cout, "https://www.github.com/openenergysolutions", { array }, true);
    }
}

