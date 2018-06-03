#ifndef OPENFMB_ADAPTER_PROFILEHELPERS_H
#define OPENFMB_ADAPTER_PROFILEHELPERS_H

#include <adapter-api/util/Exception.h>
#include <adapter-api/Profile.h>

#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

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
            case (Profile::switch_reading):
                T<switchmodule::SwitchReadingProfile>::handle(std::forward<Args>(args)...);
                break;
            case (Profile::switch_status):
                T<switchmodule::SwitchStatusProfile>::handle(std::forward<Args>(args)...);
                break;
            default:
                throw Exception("Unhandled profile: ", ProfileMeta::to_string(profile));
            }
        }

        template <template <class P> class T, typename R, class ... Args>
        R get_one(Profile profile, Args&& ... args)
        {
            switch (profile)
            {
            case (Profile::resource_reading):
                return T<resourcemodule::ResourceReadingProfile>::get(std::forward<Args>(args)...);
            case (Profile::switch_reading):
                return T<switchmodule::SwitchReadingProfile>::get(std::forward<Args>(args)...);
            case (Profile::switch_status):
                return T<switchmodule::SwitchStatusProfile>::get(std::forward<Args>(args)...);
            default:
                throw Exception("Unhandled profile: ", ProfileMeta::to_string(profile));
            }
        }

        template <template <typename P> class T, class ... Args>
        void handle_one(const std::string& profile, Args&& ... args)
        {
            return handle_one<T>(ProfileMeta::from_string(profile), std::forward<Args>(args)...);
        }

        template <template <typename P> class T, typename R, class ... Args>
        R get_one(const std::string& profile, Args&& ... args)
        {
            return get_one<T, R>(ProfileMeta::from_string(profile), std::forward<Args>(args)...);
        }

        template <template <typename P> class T, class ... Args>
        void handle_all(Args&& ... args)
        {
            T<resourcemodule::ResourceReadingProfile>::handle(std::forward<Args>(args)...);
            T<switchmodule::SwitchReadingProfile>::handle(std::forward<Args>(args)...);
            T<switchmodule::SwitchStatusProfile>::handle(std::forward<Args>(args)...);
        }
    }
}

#endif
