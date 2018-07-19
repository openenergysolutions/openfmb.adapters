
#include <proto-api/solarmodule/solarmodule.pb.h>
#include "adapter-api/config/ProfileType.h"

#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>

namespace adapter
{
    template <>
    ProfileType get_profile_type<resourcemodule::ResourceReadingProfile>()
    {
        return ProfileType::reading;
    }

    template <>
    ProfileType get_profile_type<switchmodule::SwitchReadingProfile>()
    {
        return ProfileType::reading;
    }

    template <>
    ProfileType get_profile_type<switchmodule::SwitchStatusProfile>()
    {
        return ProfileType::status;
    }

    template <>
    ProfileType get_profile_type<switchmodule::SwitchControlProfile>()
    {
        return ProfileType::control;
    }

    template <>
    ProfileType get_profile_type<essmodule::ESSReadingProfile>()
    {
        return ProfileType::reading;
    }

    template <>
    ProfileType get_profile_type<essmodule::ESSStatusProfile>()
    {
        return ProfileType::status;
    }

    template <>
    ProfileType get_profile_type<essmodule::ESSControlProfile>()
    {
        return ProfileType::control;
    }

    template <>
    ProfileType get_profile_type<solarmodule::SolarReadingProfile>()
    {
        return ProfileType::reading;
    }

    template <>
    ProfileType get_profile_type<solarmodule::SolarStatusProfile>()
    {
        return ProfileType::status;
    }

    template <>
    ProfileType get_profile_type<solarmodule::SolarControlProfile>()
    {
        return ProfileType::control;
    }

    template <>
    ProfileType get_profile_type<loadmodule::LoadReadingProfile>()
    {
        return ProfileType::reading;
    }

    template <>
    ProfileType get_profile_type<loadmodule::LoadStatusProfile>()
    {
        return ProfileType::status;
    }

    template <>
    ProfileType get_profile_type<loadmodule::LoadControlProfile>()
    {
        return ProfileType::control;
    }
}


