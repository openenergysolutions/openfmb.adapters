#include "catch.hpp"

#include "proto-api/metermodule/metermodule.pb.h"
#include "cppcodec/base64_default_rfc4648.hpp"

TEST_CASE("Deserialize string value")
{
    const std::string base64_encoded_serialized_message = "Gh0iGwoZChcaFQoTd2VsY29tZSB0byB0aGUgY2x1Yg==";
    auto serialized_message = base64::decode<std::vector<uint8_t>>(base64_encoded_serialized_message);

    metermodule::MeterReadingProfile message{};
    REQUIRE(message.ParseFromArray(serialized_message.data(), serialized_message.size()));
    REQUIRE(message.meterreading().readingmmxu().logicalnode().identifiedobject().name().value() == "welcome to the club");
}
