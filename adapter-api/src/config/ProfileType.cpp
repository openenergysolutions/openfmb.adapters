
#include "adapter-api/config/ProfileType.h"

#include "proto-api/resourcemodule/resourcemodule.pb.h"
#include "proto-api/switchmodule/switchmodule.pb.h"

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

}


