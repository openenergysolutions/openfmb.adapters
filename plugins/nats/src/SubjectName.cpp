

#include "SubjectName.h"

#include <adapter-api/proto/resourcemodule/resourcemodule.pb.h>
#include <adapter-api/proto/switchmodule/switchmodule.pb.h>

namespace adapter
{
    namespace nats
    {

        template <>
        std::string get_subject_key_mrid(const resourcemodule::ResourceReadingProfile& profile)
        {
            return profile.meter().conductingequipment().mrid();
        }

        template <>
        std::string get_subject_key_mrid(const switchmodule::SwitchReadingProfile& profile)
        {
            return profile.protectedswitch().conductingequipment().mrid();
        }

        template <>
        std::string get_subject_key_mrid(const switchmodule::SwitchStatusProfile& profile)
        {
            return profile.protectedswitch().conductingequipment().mrid();
        }

    }
}


