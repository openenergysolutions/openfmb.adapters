#include "catch.hpp"

#include "proto-api/resourcemodule/resourcemodule.pb.h"
#include "cppcodec/base64_default_rfc4648.hpp"

TEST_CASE("Deserialize string value")
{
    const std::string base64_encoded_serialized_message = "IhsiGQoXChUaE3dlbGNvbWUgdG8gdGhlIGNsdWI=";
    auto serialized_message = base64::decode<std::vector<uint8_t>>(base64_encoded_serialized_message);

    resourcemodule::ResourceReadingProfile message{};
    REQUIRE(message.ParseFromArray(serialized_message.data(), serialized_message.size()));
    REQUIRE(message.resourcereading().readingmmxu().logicalnode().identifiedobject().name().value() == "welcome to the club");
}
