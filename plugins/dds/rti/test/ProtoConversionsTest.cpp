#include "catch.hpp"

#include "generated/ConvertFromProto.h"
#include "generated/ConvertToProto.h"

using namespace adapter::dds::rti;

TEST_CASE("Proto conversions")
{
    solarmodule::SolarReadingProfile original_proto{};
    openfmb::solarmodule::SolarReadingProfile dds_object{};
    solarmodule::SolarReadingProfile final_proto{};

    auto timestamp = original_proto.mutable_readingmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    timestamp->set_fraction(24); // uint32
    timestamp->set_seconds(99999); // uint 64
    timestamp->mutable_tq()->set_clockfailure(true); // boolean
    timestamp->mutable_tq()->set_timeaccuracy(commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3); // enum
    original_proto.mutable_ied()->mutable_identifiedobject()->mutable_name()->set_value("asdf"); // string
    original_proto.mutable_solarreading()->mutable_readingmmxu()->mutable_phv()->mutable_phsa()->mutable_cval()->mutable_ang()->mutable_f()->set_value(76.76f); // float

    convert_from_proto(original_proto, dds_object);
    convert_to_proto(dds_object, final_proto);

    CHECK(final_proto.readingmessageinfo().messageinfo().messagetimestamp().fraction() == 24);
    CHECK(final_proto.readingmessageinfo().messageinfo().messagetimestamp().seconds() == 99999);
    CHECK(final_proto.readingmessageinfo().messageinfo().messagetimestamp().tq().clockfailure() == true);
    CHECK(final_proto.readingmessageinfo().messageinfo().messagetimestamp().tq().timeaccuracy() == commonmodule::TimeAccuracyKind::TimeAccuracyKind_T3);
    CHECK(final_proto.ied().identifiedobject().name().value() == "asdf");
    CHECK(final_proto.ied().identifiedobject().has_description() == false);
    CHECK(final_proto.solarreading().readingmmxu().phv().phsa().cval().ang().f().value() == Approx(76.76f));
}
