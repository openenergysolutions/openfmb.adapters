
#ifndef OPENFMB_ADAPTER_PROFILEREGISTRY_H
#define OPENFMB_ADAPTER_PROFILEREGISTRY_H

#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/solarmodule/solarmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>

#include <utility>

namespace adapter
{
    namespace impl
    {
        template <template <typename P> class H, class ... Args>
        void handle_one(Args&& ... ) {}

        template <template <typename P> class H, class T, class... Ts, class ... Args>
        void handle_one(Args&& ... args)
        {
            H<T>::handle(std::forward<Args>(args)...);
            handle_one<H,Ts...>(std::forward<Args>(args)...);
        }

        template <class... Ps>
        struct ProfileList
        {
            template <template <typename T> class H, class ... Args>
            static void handle_all(Args&& ... args)
            {
                handle_one<H, Ps...>(std::forward<Args>(args)...);
            }
        };
    }


    /**
     * A list of profile types implemented as a variadic data structure.
     *
     * This list is used by other components to automatically add support for profiles.
     */
    using ProfileRegistry = impl::ProfileList <
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
                            loadmodule::LoadControlProfile >;

}

#endif
