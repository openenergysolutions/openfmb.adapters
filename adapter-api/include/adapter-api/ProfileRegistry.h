
#ifndef OPENFMB_ADAPTER_PROFILEREGISTRY_H
#define OPENFMB_ADAPTER_PROFILEREGISTRY_H

#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>
#include <proto-api/metermodule/metermodule.pb.h>
#include <proto-api/solarmodule/solarmodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

#include "Exception.h"

#include <utility>

namespace adapter {
namespace api {
    namespace impl {
        template <template <typename P> class H, class... Args>
        void handle_one(Args&&...) {}

        template <template <typename P> class H, class T, class... Ts, class... Args>
        void handle_one(Args&&... args)
        {
            H<T>::handle(std::forward<Args>(args)...);
            handle_one<H, Ts...>(std::forward<Args>(args)...);
        }

        template <template <typename P> class H, class... Args>
        void handle_one_by_name(const std::string& name, Args&&...)
        {
            throw Exception("Unknown profile: ", name);
        }

        template <template <typename P> class H, class T, class... Ts, class... Args>
        void handle_one_by_name(const std::string& name, Args&&... args)
        {
            if (name == T::descriptor()->name()) {
                H<T>::handle(std::forward<Args>(args)...);
            } else {
                handle_one_by_name<H, Ts...>(name, std::forward<Args>(args)...);
            }
        }

        template <class H>
        static void foreach_next_descriptor(const H& handler) {}

        template <class H, class T, class... Ts>
        static void foreach_next_descriptor(const H& handler)
        {
            handler(T::descriptor());
            foreach_next_descriptor<H, Ts...>(handler);
        }

        template <class... Ps>
        struct ProfileList {
            template <template <typename T> class H, class... Args>
            static void handle_all(Args&&... args)
            {
                handle_one<H, Ps...>(std::forward<Args>(args)...);
            }

            template <template <typename T> class H, class... Args>
            static void handle_by_name(const std::string& name, Args&&... args)
            {
                handle_one_by_name<H, Ps...>(name, std::forward<Args>(args)...);
            }

            template <class H>
            static void foreach_descriptor(const H& handler)
            {
                foreach_next_descriptor<H, Ps...>(handler);
            }
        };
    }

    /**
     * A list of profile types implemented as a variadic data structure.
     *
     * This list is used by other components to automatically add support for profiles.
     */
    using ProfileRegistry = impl::ProfileList<
        metermodule::MeterReadingProfile,
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
}

#endif
