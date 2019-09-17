
#ifndef OPENFMB_ADAPTER_PROFILEINFO_H
#define OPENFMB_ADAPTER_PROFILEINFO_H

#include "adapter-api/ProfileRegistry.h"

namespace adapter {
namespace util {

    enum class ProfileType
    {
        Reading,
        Status,
        Control,
        Event,
    };

    // no defaults, only specializations
    template <class T>
    struct profile_info;

    template <>
    struct profile_info<breakermodule::BreakerReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

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
    struct profile_info<breakermodule::BreakerDiscreteControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

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
    struct profile_info<breakermodule::BreakerEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const breakermodule::BreakerEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const breakermodule::BreakerEventProfile& profile)
        {
            return profile.breaker().conductingequipment();
        }
    };

    template <>
    struct profile_info<breakermodule::BreakerStatusProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Status;

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
    struct profile_info<essmodule::ESSControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

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
    struct profile_info<essmodule::ESSEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const essmodule::ESSEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSEventProfile& profile)
        {
            return profile.ess().conductingequipment();
        }
    };

    template <>
    struct profile_info<essmodule::ESSReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

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

        static constexpr ProfileType type = ProfileType::Status;

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
    struct profile_info<generationmodule::GenerationControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const generationmodule::GenerationControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const generationmodule::GenerationControlProfile& profile)
        {
            return profile.generatingunit().conductingequipment();
        }
    };

    template <>
    struct profile_info<generationmodule::GenerationEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const generationmodule::GenerationEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const generationmodule::GenerationEventProfile& profile)
        {
            return profile.generatingunit().conductingequipment();
        }
    };

    template <>
    struct profile_info<generationmodule::GenerationReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

        static const commonmodule::MessageInfo& get_message_info(const generationmodule::GenerationReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const generationmodule::GenerationReadingProfile& profile)
        {
            return profile.generatingunit().conductingequipment();
        }
    };

    template <>
    struct profile_info<generationmodule::GenerationStatusProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Status;

        static const commonmodule::MessageInfo& get_message_info(const generationmodule::GenerationStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const generationmodule::GenerationStatusProfile& profile)
        {
            return profile.generatingunit().conductingequipment();
        }
    };

    template <>
    struct profile_info<loadmodule::LoadControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadControlProfile& profile)
        {
            return profile.energyconsumer().conductingequipment();
        }
    };

    template <>
    struct profile_info<loadmodule::LoadEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const loadmodule::LoadEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const loadmodule::LoadEventProfile& profile)
        {
            return profile.energyconsumer().conductingequipment();
        }
    };

    template <>
    struct profile_info<loadmodule::LoadReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

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

        static constexpr ProfileType type = ProfileType::Status;

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
    struct profile_info<metermodule::MeterReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

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
    struct profile_info<reclosermodule::RecloserControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const reclosermodule::RecloserControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const reclosermodule::RecloserControlProfile& profile)
        {
            return profile.recloser().conductingequipment();
        }
    };

    template <>
    struct profile_info<reclosermodule::RecloserDiscreteControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const reclosermodule::RecloserDiscreteControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const reclosermodule::RecloserDiscreteControlProfile& profile)
        {
            return profile.recloser().conductingequipment();
        }
    };

    template <>
    struct profile_info<reclosermodule::RecloserEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const reclosermodule::RecloserEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const reclosermodule::RecloserEventProfile& profile)
        {
            return profile.recloser().conductingequipment();
        }
    };

    template <>
    struct profile_info<reclosermodule::RecloserReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

        static const commonmodule::MessageInfo& get_message_info(const reclosermodule::RecloserReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const reclosermodule::RecloserReadingProfile& profile)
        {
            return profile.recloser().conductingequipment();
        }
    };

    template <>
    struct profile_info<reclosermodule::RecloserStatusProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Status;

        static const commonmodule::MessageInfo& get_message_info(const reclosermodule::RecloserStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const reclosermodule::RecloserStatusProfile& profile)
        {
            return profile.recloser().conductingequipment();
        }
    };

    template <>
    struct profile_info<regulatormodule::RegulatorControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const regulatormodule::RegulatorControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const regulatormodule::RegulatorControlProfile& profile)
        {
            return profile.regulatorsystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<regulatormodule::RegulatorEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const regulatormodule::RegulatorEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const regulatormodule::RegulatorEventProfile& profile)
        {
            return profile.regulatorsystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<regulatormodule::RegulatorReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

        static const commonmodule::MessageInfo& get_message_info(const regulatormodule::RegulatorReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const regulatormodule::RegulatorReadingProfile& profile)
        {
            return profile.regulatorsystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<regulatormodule::RegulatorStatusProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Status;

        static const commonmodule::MessageInfo& get_message_info(const regulatormodule::RegulatorStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const regulatormodule::RegulatorStatusProfile& profile)
        {
            return profile.regulatorsystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<resourcemodule::ResourceReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

        static const commonmodule::MessageInfo& get_message_info(const resourcemodule::ResourceReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const resourcemodule::ResourceReadingProfile& profile)
        {
            return profile.conductingequipment();
        }
    };

    template <>
    struct profile_info<resourcemodule::ResourceStatusProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Status;

        static const commonmodule::MessageInfo& get_message_info(const resourcemodule::ResourceStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const resourcemodule::ResourceStatusProfile& profile)
        {
            return profile.conductingequipment();
        }
    };

    template <>
    struct profile_info<solarmodule::SolarControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

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
    struct profile_info<solarmodule::SolarEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarEventProfile& profile)
        {
            return profile.solarinverter().conductingequipment();
        }
    };

    template <>
    struct profile_info<solarmodule::SolarReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

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

        static constexpr ProfileType type = ProfileType::Status;

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
    struct profile_info<switchmodule::SwitchControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

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
    struct profile_info<switchmodule::SwitchDiscreteControlProfile> {

        static constexpr bool is_control = true;

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchDiscreteControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchDiscreteControlProfile& profile)
        {
            return profile.protectedswitch().conductingequipment();
        }
    };

    template <>
    struct profile_info<switchmodule::SwitchEventProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchEventProfile& profile)
        {
            return profile.protectedswitch().conductingequipment();
        }
    };

    template <>
    struct profile_info<switchmodule::SwitchReadingProfile> {

        static constexpr bool is_control = false;

        static constexpr ProfileType type = ProfileType::Reading;

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

        static constexpr ProfileType type = ProfileType::Status;

        static const commonmodule::MessageInfo& get_message_info(const switchmodule::SwitchStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const switchmodule::SwitchStatusProfile& profile)
        {
            return profile.protectedswitch().conductingequipment();
        }
    };
}
}

#endif
