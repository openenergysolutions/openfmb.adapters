#include "catch.hpp"

#include "adapter-api/util/YAMLOverride.h"

#include <boost/variant.hpp>

using namespace adapter::yaml;

using variant_t = boost::variant<std::string, size_t>;

class MockCallbacks : public IOverrideCallbacks {

public:

    std::vector<variant_t> callbacks;

    void on_map_key(const std::string &key) override {
        callbacks.push_back(variant_t(key));
    }

    void on_sequence_index(size_t index) override {
        callbacks.push_back(variant_t(index));
    }
};

TEST_CASE( "can parse YAML override specifications" )
{
    SECTION("single key")
    {
        MockCallbacks mock;
        process("token", mock);
        REQUIRE(mock.callbacks.size() == 1);
        REQUIRE(mock.callbacks[0] == variant_t("token"));
    }

    SECTION("single index")
    {
        MockCallbacks mock;
        process("[4]", mock);
        REQUIRE(mock.callbacks.size() == 1);
        REQUIRE(mock.callbacks[0] == variant_t(4));
    }

    SECTION("multiple keys")
    {
        MockCallbacks mock;
        process("token1.token2", mock);
        REQUIRE(mock.callbacks.size() == 2);
        REQUIRE(mock.callbacks[0] == variant_t("token1"));
        REQUIRE(mock.callbacks[1] == variant_t("token2"));
    }

    SECTION("multiple indexes")
    {
        MockCallbacks mock;
        process("[4][7][3]", mock);
        REQUIRE(mock.callbacks.size() == 3);
        REQUIRE(mock.callbacks[0] == variant_t(4));
        REQUIRE(mock.callbacks[1] == variant_t(7));
        REQUIRE(mock.callbacks[2] == variant_t(3));
    }

    SECTION("mixed specification")
    {
        MockCallbacks mock;
        process("one[4][7].two[3]", mock);
        REQUIRE(mock.callbacks.size() == 5);
        REQUIRE(mock.callbacks[0] == variant_t("one"));
        REQUIRE(mock.callbacks[1] == variant_t(4));
        REQUIRE(mock.callbacks[2] == variant_t(7));
        REQUIRE(mock.callbacks[3] == variant_t("two"));
        REQUIRE(mock.callbacks[4] == variant_t(3));
    }
}

