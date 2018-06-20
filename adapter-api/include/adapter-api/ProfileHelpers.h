#ifndef OPENFMB_ADAPTER_PROFILEHELPERS_H
#define OPENFMB_ADAPTER_PROFILEHELPERS_H

#include <adapter-api/util/Exception.h>

#include "ProfileRegistry.h"
#include "Profile.h"

namespace adapter
{

    namespace profiles
    {

        template <template <class P> class T, class ... Args>
        void handle_one(Profile profile, Args&& ... args)
        {
            switch (profile)
            {
            case (Profile::resource_reading):
                T<resourcemodule::ResourceReadingProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::switch_control):
                T<switchmodule::SwitchControlProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::switch_reading):
                T<switchmodule::SwitchReadingProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::switch_status):
                T<switchmodule::SwitchStatusProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::ess_reading):
                T<essmodule::ESSReadingProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::ess_status):
                T<essmodule::ESSStatusProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::ess_control):
                T<essmodule::ESSControlProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::solar_reading):
                T<solarmodule::SolarReadingProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::solar_status):
                T<solarmodule::SolarStatusProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::solar_control):
                T<solarmodule::SolarControlProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::load_reading):
                T<loadmodule::LoadReadingProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::load_status):
                T<loadmodule::LoadStatusProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::load_control):
                T<loadmodule::LoadControlProfile>::handle(std::forward<Args>(args)...);
                break;
            default:
                throw Exception("Unhandled profile: ", ProfileMeta::to_string(profile));
            }
        }

        template <template <typename P> class T, class ... Args>
        void handle_one(const std::string& profile, Args&& ... args)
        {
            return handle_one<T>(ProfileMeta::from_string(profile), std::forward<Args>(args)...);
        }

        template <template <class P> class T, typename R, class ... Args>
        R get_one(Profile profile, Args&& ... args)
        {
            switch (profile)
            {
            case (Profile::resource_reading):
                return T<resourcemodule::ResourceReadingProfile>::get(std::forward<Args>(args)...);
            case (Profile::switch_control):
                return T<switchmodule::SwitchControlProfile>::get(std::forward<Args>(args)...);
            case (Profile::switch_reading):
                return T<switchmodule::SwitchReadingProfile>::get(std::forward<Args>(args)...);
            case (Profile::switch_status):
                return T<switchmodule::SwitchStatusProfile>::get(std::forward<Args>(args)...);
            case (Profile::ess_reading):
                return T<essmodule::ESSReadingProfile>::get(std::forward<Args>(args)...);
            case (Profile::ess_status):
                return T<essmodule::ESSStatusProfile>::get(std::forward<Args>(args)...);
            case (Profile::ess_control):
                return T<essmodule::ESSControlProfile>::get(std::forward<Args>(args)...);
            case (Profile::solar_reading):
                return T<solarmodule::SolarReadingProfile>::get(std::forward<Args>(args)...);
            case (Profile::solar_status):
                return T<solarmodule::SolarStatusProfile>::get(std::forward<Args>(args)...);
            case (Profile::solar_control):
                return T<solarmodule::SolarControlProfile>::get(std::forward<Args>(args)...);
            case (Profile::load_reading):
                return T<loadmodule::LoadReadingProfile>::get(std::forward<Args>(args)...);
            case (Profile::load_status):
                return T<loadmodule::LoadStatusProfile>::get(std::forward<Args>(args)...);
            case (Profile::load_control):
                return T<loadmodule::LoadControlProfile>::get(std::forward<Args>(args)...);
            default:
                throw Exception("Unhandled profile: ", ProfileMeta::to_string(profile));
            }
        }

        template <template <typename P> class T, typename R, class ... Args>
        R get_one(const std::string& profile, Args&& ... args)
        {
            return get_one<T, R>(ProfileMeta::from_string(profile), std::forward<Args>(args)...);
        }

    }
}

#endif
