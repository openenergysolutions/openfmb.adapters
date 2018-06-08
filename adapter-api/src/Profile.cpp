
#include "adapter-api/Profile.h"

#include "adapter-api/util/Exception.h"

#include "resourcemodule/resourcemodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "essmodule/essmodule.pb.h"

namespace adapter
{

    std::string ProfileMeta::to_string(Profile profile)
    {
        switch(profile)
        {
        case(Profile::resource_reading):
            return resourcemodule::ResourceReadingProfile::descriptor()->name();
        case(Profile::switch_control):
            return switchmodule::SwitchControlProfile::descriptor()->name();
        case(Profile::switch_reading):
            return switchmodule::SwitchReadingProfile::descriptor()->name();
        case(Profile::switch_status):
            return switchmodule::SwitchStatusProfile::descriptor()->name();
        case(Profile::ess_reading):
            return essmodule::ESSReadingProfile::descriptor()->name();
        case(Profile::ess_status):
            return essmodule::ESSStatusProfile::descriptor()->name();
        default:
            throw Exception("Unhandled profile enum: ", static_cast<int>(profile));
        }
    }

    Profile ProfileMeta::from_string(const std::string& name)
    {
        if(name == to_string(Profile::resource_reading))
        {
            return Profile::resource_reading;
        }
        else if(name == to_string(Profile::switch_control))
        {
            return Profile::switch_control;
        }
        else if(name == to_string(Profile::switch_reading))
        {
            return Profile::switch_reading;
        }
        else if(name == to_string(Profile::switch_status))
        {
            return Profile::switch_status;
        }
        else if(name == to_string(Profile::ess_reading))
        {
            return Profile::ess_reading;
        }
        else if(name == to_string(Profile::ess_status))
        {
            return Profile::ess_status;
        }
        else
        {
            throw Exception("Unknown profile name: ", name);
        };
    }


}



