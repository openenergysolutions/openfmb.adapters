
#ifndef OPENFMB_ADAPTER_PROFILEREGISTRY_H
#define OPENFMB_ADAPTER_PROFILEREGISTRY_H

#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/solarmodule/solarmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>

namespace adapter
{
template <class... T>
class ProfileList {};

using ProfileRegistry = ProfileList<
            resourcemodule::ResourceReadingProfile,
            switchmodule::SwitchReadingProfile,
            switchmodule::SwitchStatusProfile,
            switchmodule::SwitchControlProfile,
            essmodule::ESSReadingProfile,
            essmodule::ESSStatusProfile,
            essmodule::ESSControlProfile,
            solarmodule::SolarReadingProfile,
            solarmodule::SolarStatusProfile,
            solarmodule::SolarControlProfile,
            loadmodule::LoadReadingProfile,
            loadmodule::LoadStatusProfile,
            loadmodule::LoadControlProfile>;

}

#endif
