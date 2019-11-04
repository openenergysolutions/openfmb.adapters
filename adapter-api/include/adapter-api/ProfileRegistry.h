
#ifndef OPENFMB_ADAPTER_PROFILEREGISTRY_H
#define OPENFMB_ADAPTER_PROFILEREGISTRY_H

#include <proto-api/breakermodule/breakermodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/generationmodule/generationmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>
#include <proto-api/metermodule/metermodule.pb.h>
#include <proto-api/reclosermodule/reclosermodule.pb.h>
#include <proto-api/regulatormodule/regulatormodule.pb.h>
#include <proto-api/resourcemodule/resourcemodule.pb.h>
#include <proto-api/solarmodule/solarmodule.pb.h>
#include <proto-api/shuntmodule/shuntmodule.pb.h>
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
        // ess module
        breakermodule::BreakerDiscreteControlProfile,
        breakermodule::BreakerEventProfile,
        breakermodule::BreakerReadingProfile,
        breakermodule::BreakerStatusProfile,
        // ess module
        essmodule::ESSControlProfile,
        essmodule::ESSEventProfile,
        essmodule::ESSReadingProfile,
        essmodule::ESSStatusProfile,
        // generation module
        generationmodule::GenerationControlProfile,
        generationmodule::GenerationEventProfile,
        generationmodule::GenerationReadingProfile,
        generationmodule::GenerationStatusProfile,
        // load module
        loadmodule::LoadControlProfile,
        loadmodule::LoadEventProfile,
        loadmodule::LoadReadingProfile,
        loadmodule::LoadStatusProfile,
        // meter module
        metermodule::MeterReadingProfile,
        // recloser module
        reclosermodule::RecloserControlProfile,
        reclosermodule::RecloserDiscreteControlProfile,
        reclosermodule::RecloserEventProfile,
        reclosermodule::RecloserReadingProfile,
        reclosermodule::RecloserStatusProfile,
        // regulator module
        regulatormodule::RegulatorControlProfile,
        regulatormodule::RegulatorEventProfile,
        regulatormodule::RegulatorReadingProfile,
        regulatormodule::RegulatorStatusProfile,
        // resource module
        resourcemodule::ResourceReadingProfile,
        resourcemodule::ResourceStatusProfile,
        // solar module
        solarmodule::SolarControlProfile,
        solarmodule::SolarEventProfile,
        solarmodule::SolarReadingProfile,
        solarmodule::SolarStatusProfile,
        // shunt module
        shuntmodule::ShuntControlProfile,
        shuntmodule::ShuntDiscreteControlProfile,
        shuntmodule::ShuntEventProfile,
        shuntmodule::ShuntReadingProfile,
        shuntmodule::ShuntStatusProfile,
        // switch module
        switchmodule::SwitchControlProfile,
        switchmodule::SwitchDiscreteControlProfile,
        switchmodule::SwitchEventProfile,
        switchmodule::SwitchReadingProfile,
        switchmodule::SwitchStatusProfile
        >;
}
}

#endif
