#include "catch.hpp"

#include "config/AccessorImpl.h"
#include <proto-api/resourcemodule/resourcemodule.pb.h>

TEST_CASE( "accessor implementation" )
{
    using profile_t = resourcemodule::ResourceReadingProfile;

    const auto get_mrid = [](const profile_t& profile) -> const std::string* {
        if (profile.has_meter() && profile.meter().has_conductingequipment()) {
            return &profile.meter().conductingequipment().mrid();
        } else {
            return nullptr;
        }
    };

    const auto set_mrid = [](profile_t& profile, const std::string& value) -> void {
        profile.mutable_meter()->mutable_conductingequipment()->set_mrid(value);
    };

    const adapter::accessor_t<profile_t, std::string> accessor = adapter::AccessorBuilder<profile_t, std::string>::build(set_mrid, get_mrid);

    SECTION("if_present not invoked if value absent")
    {
        profile_t profile;
        const auto fail = [](const std::string& mrid)
        {
            FAIL("should not be called");
        };

        REQUIRE_FALSE(accessor->if_present(profile, fail));
    }

    SECTION("returns expected value if set")
    {
        profile_t profile;
        profile.mutable_meter()->mutable_conductingequipment()->set_mrid("wat");

        const auto check_value = [](const std::string& mrid)
        {
            REQUIRE(mrid == "wat");
        };


        REQUIRE(accessor->if_present(profile, check_value));
    }

    SECTION("sets value as expected")
    {
        profile_t profile;
        accessor->set(profile, "42");
        REQUIRE(profile.mutable_meter()->conductingequipment().mrid() == "42");
    }
}

