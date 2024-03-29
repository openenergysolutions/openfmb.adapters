// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_PROFILEREGISTRY_H
#define OPENFMB_ADAPTER_PROFILEREGISTRY_H

#include <proto-api/breakermodule/breakermodule.pb.h>
#include <proto-api/capbankmodule/capbankmodule.pb.h>
#include <proto-api/circuitsegmentservicemodule/circuitsegmentservicemodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/generationmodule/generationmodule.pb.h>
#include <proto-api/interconnectionmodule/interconnectionmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>
#include <proto-api/metermodule/metermodule.pb.h>
#include <proto-api/reclosermodule/reclosermodule.pb.h>
#include <proto-api/regulatormodule/regulatormodule.pb.h>
#include <proto-api/reservemodule/reservemodule.pb.h>
#include <proto-api/resourcemodule/resourcemodule.pb.h>
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
        // breaker module
        breakermodule::BreakerDiscreteControlProfile,
        breakermodule::BreakerEventProfile,
        breakermodule::BreakerReadingProfile,
        breakermodule::BreakerStatusProfile,
        // capbank module
        capbankmodule::CapBankControlProfile,
        capbankmodule::CapBankDiscreteControlProfile,
        capbankmodule::CapBankEventProfile,
        capbankmodule::CapBankReadingProfile,
        capbankmodule::CapBankStatusProfile,
        // circuit segment service module
        circuitsegmentservicemodule::CircuitSegmentControlProfile,
        circuitsegmentservicemodule::CircuitSegmentEventProfile,
        circuitsegmentservicemodule::CircuitSegmentStatusProfile,
        // ess module
        essmodule::ESSCapabilityProfile,
        essmodule::ESSCapabilityOverrideProfile,
        essmodule::ESSControlProfile,
        essmodule::ESSDiscreteControlProfile,
        essmodule::ESSEventProfile,
        essmodule::ESSReadingProfile,
        essmodule::ESSStatusProfile,
        // generation module
        generationmodule::GenerationCapabilityProfile,
        generationmodule::GenerationCapabilityOverrideProfile,
        generationmodule::GenerationControlProfile,
        generationmodule::GenerationDiscreteControlProfile,
        generationmodule::GenerationEventProfile,
        generationmodule::GenerationReadingProfile,
        generationmodule::GenerationStatusProfile,
        // interconnection module
        interconnectionmodule::InterconnectionPlannedScheduleProfile,
        interconnectionmodule::InterconnectionRequestedScheduleProfile,
        // load module
        loadmodule::LoadControlProfile,
        loadmodule::LoadEventProfile,
        loadmodule::LoadReadingProfile,
        loadmodule::LoadStatusProfile,
        // meter module
        metermodule::MeterReadingProfile,
        // recloser module        
        reclosermodule::RecloserDiscreteControlProfile,
        reclosermodule::RecloserEventProfile,
        reclosermodule::RecloserReadingProfile,
        reclosermodule::RecloserStatusProfile,
        // regulator module
        regulatormodule::RegulatorControlProfile,
        regulatormodule::RegulatorDiscreteControlProfile,
        regulatormodule::RegulatorEventProfile,
        regulatormodule::RegulatorReadingProfile,
        regulatormodule::RegulatorStatusProfile,
        // reserve module
        reservemodule::ReserveAvailabilityProfile,
        reservemodule::ReserveRequestProfile,
        // resource module
        resourcemodule::ResourceDiscreteControlProfile,
        resourcemodule::ResourceEventProfile,
        resourcemodule::ResourceReadingProfile,
        resourcemodule::ResourceStatusProfile,
        // solar module
        solarmodule::SolarCapabilityProfile,
        solarmodule::SolarCapabilityOverrideProfile,
        solarmodule::SolarControlProfile,
        solarmodule::SolarDiscreteControlProfile,
        solarmodule::SolarEventProfile,
        solarmodule::SolarReadingProfile,
        solarmodule::SolarStatusProfile,
        // switch module        
        switchmodule::SwitchDiscreteControlProfile,
        switchmodule::SwitchEventProfile,
        switchmodule::SwitchReadingProfile,
        switchmodule::SwitchStatusProfile
        >;
}
}

#endif
