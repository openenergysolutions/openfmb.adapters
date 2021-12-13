// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

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
        Capability,
    };

    // no defaults, only specializations
    template <class T>
    struct profile_info;

    template <>
    struct profile_info<breakermodule::BreakerDiscreteControlProfile> {

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
    struct profile_info<breakermodule::BreakerReadingProfile> {

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
    struct profile_info<breakermodule::BreakerStatusProfile> {

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
    struct profile_info<capbankmodule::CapBankControlProfile> {

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const capbankmodule::CapBankControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const capbankmodule::CapBankControlProfile& profile)
        {
            return profile.capbanksystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<capbankmodule::CapBankDiscreteControlProfile> {

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const capbankmodule::CapBankDiscreteControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const capbankmodule::CapBankDiscreteControlProfile& profile)
        {
            return profile.capbanksystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<capbankmodule::CapBankEventProfile> {

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const capbankmodule::CapBankEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const capbankmodule::CapBankEventProfile& profile)
        {
            return profile.capbanksystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<capbankmodule::CapBankReadingProfile> {

        static constexpr ProfileType type = ProfileType::Reading;

        static const commonmodule::MessageInfo& get_message_info(const capbankmodule::CapBankReadingProfile& profile)
        {
            return profile.readingmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const capbankmodule::CapBankReadingProfile& profile)
        {
            return profile.capbanksystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<capbankmodule::CapBankStatusProfile> {

        static constexpr ProfileType type = ProfileType::Status;

        static const commonmodule::MessageInfo& get_message_info(const capbankmodule::CapBankStatusProfile& profile)
        {
            return profile.statusmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const capbankmodule::CapBankStatusProfile& profile)
        {
            return profile.capbanksystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<circuitsegmentservicemodule::CircuitSegmentControlProfile> {

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ApplicationSystem& get_conducting_equip(const circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
        {
            return profile.applicationsystem();
        }
    };

    template <>
    struct profile_info<circuitsegmentservicemodule::CircuitSegmentEventProfile> {

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ApplicationSystem& get_conducting_equip(const circuitsegmentservicemodule::CircuitSegmentEventProfile& profile)
        {
            return profile.applicationsystem();
        }
    };

    template <>
    struct profile_info<circuitsegmentservicemodule::CircuitSegmentStatusProfile> {

        static constexpr ProfileType type = ProfileType::Status;

        static const commonmodule::MessageInfo& get_message_info(const circuitsegmentservicemodule::CircuitSegmentStatusProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ApplicationSystem& get_conducting_equip(const circuitsegmentservicemodule::CircuitSegmentStatusProfile& profile)
        {
            return profile.applicationsystem();
        }
    };

    template <>
    struct profile_info<essmodule::ESSCapabilityOverrideProfile> {

        static constexpr ProfileType type = ProfileType::Capability;

        static const commonmodule::MessageInfo& get_message_info(const essmodule::ESSCapabilityOverrideProfile& profile)
        {
            return profile.capabilitymessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSCapabilityOverrideProfile& profile)
        {
            return profile.ess().conductingequipment();
        }
    };

    template <>
    struct profile_info<essmodule::ESSCapabilityProfile> {

        static constexpr ProfileType type = ProfileType::Capability;

        static const commonmodule::MessageInfo& get_message_info(const essmodule::ESSCapabilityProfile& profile)
        {
            return profile.capabilitymessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const essmodule::ESSCapabilityProfile& profile)
        {
            return profile.ess().conductingequipment();
        }
    };

    template <>
    struct profile_info<essmodule::ESSControlProfile> {

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
    struct profile_info<generationmodule::GenerationCapabilityOverrideProfile> {

        static constexpr ProfileType type = ProfileType::Capability;

        static const commonmodule::MessageInfo& get_message_info(const generationmodule::GenerationCapabilityOverrideProfile& profile)
        {
            return profile.capabilityoverridemessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const generationmodule::GenerationCapabilityOverrideProfile& profile)
        {
            return profile.generatingunit().conductingequipment();
        }
    };

    template <>
    struct profile_info<generationmodule::GenerationCapabilityProfile> {

        static constexpr ProfileType type = ProfileType::Capability;

        static const commonmodule::MessageInfo& get_message_info(const generationmodule::GenerationCapabilityProfile& profile)
        {
            return profile.capabilitymessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const generationmodule::GenerationCapabilityProfile& profile)
        {
            return profile.generatingunit().conductingequipment();
        }
    };

    template <>
    struct profile_info<generationmodule::GenerationControlProfile> {

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
    struct profile_info<generationmodule::GenerationDiscreteControlProfile> {

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const generationmodule::GenerationDiscreteControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const generationmodule::GenerationDiscreteControlProfile& profile)
        {
            return profile.generatingunit().conductingequipment();
        }
    };

    template <>
    struct profile_info<generationmodule::GenerationEventProfile> {

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
    struct profile_info<reclosermodule::RecloserDiscreteControlProfile> {

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
    struct profile_info<regulatormodule::RegulatorDiscreteControlProfile> {

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const regulatormodule::RegulatorDiscreteControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const regulatormodule::RegulatorDiscreteControlProfile& profile)
        {
            return profile.regulatorsystem().conductingequipment();
        }
    };

    template <>
    struct profile_info<regulatormodule::RegulatorEventProfile> {

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
    struct profile_info<resourcemodule::ResourceDiscreteControlProfile> {

        static constexpr ProfileType type = ProfileType::Control;

        static const commonmodule::MessageInfo& get_message_info(const resourcemodule::ResourceDiscreteControlProfile& profile)
        {
            return profile.controlmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const resourcemodule::ResourceDiscreteControlProfile& profile)
        {
            return profile.conductingequipment();
        }
    };

    template <>
    struct profile_info<resourcemodule::ResourceEventProfile> {

        static constexpr ProfileType type = ProfileType::Event;

        static const commonmodule::MessageInfo& get_message_info(const resourcemodule::ResourceEventProfile& profile)
        {
            return profile.eventmessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const resourcemodule::ResourceEventProfile& profile)
        {
            return profile.conductingequipment();
        }
    };

    template <>
    struct profile_info<resourcemodule::ResourceReadingProfile> {

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
    struct profile_info<solarmodule::SolarCapabilityOverrideProfile> {

        static constexpr ProfileType type = ProfileType::Capability;

        static const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarCapabilityOverrideProfile& profile)
        {
            return profile.capabilityoverridemessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarCapabilityOverrideProfile& profile)
        {
            return profile.solarinverter().conductingequipment();
        }
    };

    template <>
    struct profile_info<solarmodule::SolarCapabilityProfile> {

        static constexpr ProfileType type = ProfileType::Capability;

        static const commonmodule::MessageInfo& get_message_info(const solarmodule::SolarCapabilityProfile& profile)
        {
            return profile.capabilitymessageinfo().messageinfo();
        }

        static const commonmodule::ConductingEquipment& get_conducting_equip(const solarmodule::SolarCapabilityProfile& profile)
        {
            return profile.solarinverter().conductingequipment();
        }
    };

    template <>
    struct profile_info<solarmodule::SolarControlProfile> {

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
    struct profile_info<switchmodule::SwitchDiscreteControlProfile> {

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
