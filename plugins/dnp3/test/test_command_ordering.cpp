#include "catch.hpp"

#include "CommandOrdering.h"

#include <set>

using namespace adapter::dnp3;

TEST_CASE("CommandOrdering")
{
    std::set<CommandOrdering> set;

    SECTION("set allows same index with different types")
    {
        set.insert({
            { 0, CommandType::Value::crob },
            { 0, CommandType::Value::analog_output },
        });

        REQUIRE(set.size() == 2);
    }

    SECTION("set allows different indices with same type")
    {
        set.insert({
            { 0, CommandType::Value::analog_output },
            { 1, CommandType::Value::analog_output },
        });

        REQUIRE(set.size() == 2);
    }

    SECTION("set rejects same index and type")
    {
        set.insert({
            { 0, CommandType::Value::analog_output },
            { 0, CommandType::Value::analog_output },
        });

        REQUIRE(set.size() == 1);
    }
}
