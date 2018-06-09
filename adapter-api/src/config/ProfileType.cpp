
#include "adapter-api/config/ProfileType.h"

#include "proto-api/resourcemodule/resourcemodule.pb.h"
#include "proto-api/switchmodule/switchmodule.pb.h"
#include "proto-api/essmodule/essmodule.pb.h"

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
}


