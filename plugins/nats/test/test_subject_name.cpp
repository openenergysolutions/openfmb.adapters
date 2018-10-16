#include "catch.hpp"

#include "SubjectName.h"

#include <proto-api/metermodule/metermodule.pb.h>

TEST_CASE("subject names are formatted correctly")
{
    SECTION("subscribe to all uses * wildcard")
    {
        REQUIRE(::adapter::nats::get_subscribe_all_subject_name<metermodule::MeterReadingProfile>() == "openfmb.metermodule.MeterReadingProfile.*");
    }

    SECTION("publish subject name is based on conducting equipment mRID")
    {
        metermodule::MeterReadingProfile profile;
        profile.mutable_meter()->mutable_conductingequipment()->set_mrid("31c24a1b-ecb2-453b-8f79-d245a9830188");

        REQUIRE(::adapter::nats::get_publish_subject_name(profile) == "openfmb.metermodule.MeterReadingProfile.31c24a1b-ecb2-453b-8f79-d245a9830188");
    }
}
