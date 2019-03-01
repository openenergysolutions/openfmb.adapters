
#ifndef OPENFMB_ADAPTER_PROFILEINFO_H
#define OPENFMB_ADAPTER_PROFILEINFO_H

#include "adapter-api/ProfileRegistry.h"

namespace adapter {
namespace util {
    // no defaults, only specializations
    template <class T>
    struct profile_info;

    template <>
    struct profile_info<metermodule::MeterReadingProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const metermodule::MeterReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const metermodule::MeterReadingProfile& profile)
        {
            return profile.meter().conductingequipment();
        }
    };

    template <>
    struct profile_info<breakermodule::BreakerReadingProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const breakermodule::BreakerReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const breakermodule::BreakerReadingProfile& profile)
        {
            return profile.breaker().conductingequipment();
        }
    };

    template <>
    struct profile_info<breakermodule::BreakerStatusProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const breakermodule::BreakerStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const breakermodule::BreakerStatusProfile& profile)
        {
            return profile.breaker().conductingequipment();
        }
    };

    template <>
    struct profile_info<breakermodule::BreakerDiscreteControlProfile> {

        static constexpr bool is_control = true;

        static const commonmodule::MessageInfo& get_message_info(const breakermodule::BreakerDiscreteControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const breakermodule::BreakerDiscreteControlProfile& profile)
        {
            return profile.breaker().conductingequipment();
        }
    };

    template <>
    struct profile_info<switchmodule::SwitchReadingProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchReadingProfile& profile)
        {
            return profile.protectedswitch().conductingequipment();
        }
    };

    template <>
    struct profile_info<switchmodule::SwitchStatusProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchStatusProfile& profile)
        {
            return profile.protectedswitch().conductingequipment();
        }
    };

    template <>
    struct profile_info<switchmodule::SwitchControlProfile> {

        static constexpr bool is_control = true;

        static const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchControlProfile& profile)
        {
            return profile.protectedswitch().conductingequipment();
        }
    };

    template <>
    struct profile_info<essmodule::ESSReadingProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const essmodule::ESSReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSReadingProfile& profile)
        {
            return profile.ess().conductingequipment();
        }
    };

    template <>
    struct profile_info<essmodule::ESSStatusProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const essmodule::ESSStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSStatusProfile& profile)
        {
            return profile.ess().conductingequipment();
        }
    };

    template <>
    struct profile_info<essmodule::ESSControlProfile> {

        static constexpr bool is_control = true;

        static const commonmodule::MessageInfo& get_message_info(const essmodule::ESSControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSControlProfile& profile)
        {
            return profile.ess().conductingequipment();
        }
    };

    template <>
    struct profile_info<solarmodule::SolarReadingProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarReadingProfile& profile)
        {
            return profile.solarinverter().conductingequipment();
        }
    };

    template <>
    struct profile_info<solarmodule::SolarStatusProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarStatusProfile& profile)
        {
            return profile.solarinverter().conductingequipment();
        }
    };

    template <>
    struct profile_info<solarmodule::SolarControlProfile> {

        static constexpr bool is_control = true;

        static const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarControlProfile& profile)
        {
            return profile.solarinverter().conductingequipment();
        }
    };

    template <>
    struct profile_info<loadmodule::LoadReadingProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadReadingProfile& profile)
        {
            return profile.energyconsumer().conductingequipment();
        }
    };

    template <>
    struct profile_info<loadmodule::LoadStatusProfile> {

        static constexpr bool is_control = false;

        static const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadStatusProfile& profile)
        {
            return profile.energyconsumer().conductingequipment();
        }
    };

    template <>
    struct profile_info<loadmodule::LoadControlProfile> {

        static constexpr bool is_control = true;

        static const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadControlProfile& profile)
        {
            return profile.energyconsumer().conductingequipment();
        }
    };
}
}

#endif
