// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

// 
//   _   _         ______    _ _ _   _             _ _ _
//  | \ | |       |  ____|  | (_) | (_)           | | | |
//  |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
//  | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
//  | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
//  |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                            __/ |
//                                           |___/
// 
//  This file is auto-generated. Do not edit manually
// 

#ifndef OPENFMB_PROFILE_H
#define OPENFMB_PROFILE_H

#include <string>
#include <array>

namespace adapter {

namespace util {

struct Profile
{
    enum class Value
    {
        // breakermodule.BreakerDiscreteControlProfile
        BreakerDiscreteControlProfile,
        // breakermodule.BreakerEventProfile
        BreakerEventProfile,
        // breakermodule.BreakerReadingProfile
        BreakerReadingProfile,
        // breakermodule.BreakerStatusProfile
        BreakerStatusProfile,
        // capbankmodule.CapBankControlProfile
        CapBankControlProfile,
        // capbankmodule.CapBankDiscreteControlProfile
        CapBankDiscreteControlProfile,
        // capbankmodule.CapBankEventProfile
        CapBankEventProfile,
        // capbankmodule.CapBankReadingProfile
        CapBankReadingProfile,
        // capbankmodule.CapBankStatusProfile
        CapBankStatusProfile,
        // circuitsegmentservicemodule.CircuitSegmentControlProfile
        CircuitSegmentControlProfile,
        // circuitsegmentservicemodule.CircuitSegmentEventProfile
        CircuitSegmentEventProfile,
        // circuitsegmentservicemodule.CircuitSegmentStatusProfile
        CircuitSegmentStatusProfile,
        // essmodule.ESSCapabilityOverrideProfile
        ESSCapabilityOverrideProfile,
        // essmodule.ESSCapabilityProfile
        ESSCapabilityProfile,
        // essmodule.ESSControlProfile
        ESSControlProfile,
        // essmodule.ESSDiscreteControlProfile
        ESSDiscreteControlProfile,
        // essmodule.ESSEventProfile
        ESSEventProfile,
        // essmodule.ESSReadingProfile
        ESSReadingProfile,
        // essmodule.ESSStatusProfile
        ESSStatusProfile,
        // generationmodule.GenerationCapabilityOverrideProfile
        GenerationCapabilityOverrideProfile,
        // generationmodule.GenerationCapabilityProfile
        GenerationCapabilityProfile,
        // generationmodule.GenerationControlProfile
        GenerationControlProfile,
        // generationmodule.GenerationDiscreteControlProfile
        GenerationDiscreteControlProfile,
        // generationmodule.GenerationEventProfile
        GenerationEventProfile,
        // generationmodule.GenerationReadingProfile
        GenerationReadingProfile,
        // generationmodule.GenerationStatusProfile
        GenerationStatusProfile,
        // interconnectionmodule.InterconnectionPlannedScheduleProfile
        InterconnectionPlannedScheduleProfile,
        // interconnectionmodule.InterconnectionRequestedScheduleProfile
        InterconnectionRequestedScheduleProfile,
        // loadmodule.LoadControlProfile
        LoadControlProfile,
        // loadmodule.LoadEventProfile
        LoadEventProfile,
        // loadmodule.LoadReadingProfile
        LoadReadingProfile,
        // loadmodule.LoadStatusProfile
        LoadStatusProfile,
        // metermodule.MeterReadingProfile
        MeterReadingProfile,
        // reclosermodule.RecloserDiscreteControlProfile
        RecloserDiscreteControlProfile,
        // reclosermodule.RecloserEventProfile
        RecloserEventProfile,
        // reclosermodule.RecloserReadingProfile
        RecloserReadingProfile,
        // reclosermodule.RecloserStatusProfile
        RecloserStatusProfile,
        // regulatormodule.RegulatorDiscreteControlProfile
        RegulatorDiscreteControlProfile,
        // regulatormodule.RegulatorControlProfile
        RegulatorControlProfile,
        // regulatormodule.RegulatorEventProfile
        RegulatorEventProfile,
        // regulatormodule.RegulatorReadingProfile
        RegulatorReadingProfile,
        // regulatormodule.RegulatorStatusProfile
        RegulatorStatusProfile,
        // reservemodule.ReserveAvailabilityProfile
        ReserveAvailabilityProfile,
        // reservemodule.ReserveRequestProfile
        ReserveRequestProfile,
        // resourcemodule.ResourceDiscreteControlProfile
        ResourceDiscreteControlProfile,
        // resourcemodule.ResourceEventProfile
        ResourceEventProfile,
        // resourcemodule.ResourceReadingProfile
        ResourceReadingProfile,
        // resourcemodule.ResourceStatusProfile
        ResourceStatusProfile,
        // solarmodule.SolarCapabilityOverrideProfile
        SolarCapabilityOverrideProfile,
        // solarmodule.SolarCapabilityProfile
        SolarCapabilityProfile,
        // solarmodule.SolarControlProfile
        SolarControlProfile,
        // solarmodule.SolarDiscreteControlProfile
        SolarDiscreteControlProfile,
        // solarmodule.SolarEventProfile
        SolarEventProfile,
        // solarmodule.SolarReadingProfile
        SolarReadingProfile,
        // solarmodule.SolarStatusProfile
        SolarStatusProfile,
        // switchmodule.SwitchDiscreteControlProfile
        SwitchDiscreteControlProfile,
        // switchmodule.SwitchEventProfile
        SwitchEventProfile,
        // switchmodule.SwitchReadingProfile
        SwitchReadingProfile,
        // switchmodule.SwitchStatusProfile
        SwitchStatusProfile,
    };

    static const char BreakerDiscreteControlProfile[];
    static const char BreakerEventProfile[];
    static const char BreakerReadingProfile[];
    static const char BreakerStatusProfile[];
    static const char CapBankControlProfile[];
    static const char CapBankDiscreteControlProfile[];
    static const char CapBankEventProfile[];
    static const char CapBankReadingProfile[];
    static const char CapBankStatusProfile[];
    static const char CircuitSegmentControlProfile[];
    static const char CircuitSegmentEventProfile[];
    static const char CircuitSegmentStatusProfile[];
    static const char ESSCapabilityOverrideProfile[];
    static const char ESSCapabilityProfile[];
    static const char ESSControlProfile[];
    static const char ESSDiscreteControlProfile[];
    static const char ESSEventProfile[];
    static const char ESSReadingProfile[];
    static const char ESSStatusProfile[];
    static const char GenerationCapabilityOverrideProfile[];
    static const char GenerationCapabilityProfile[];
    static const char GenerationControlProfile[];
    static const char GenerationDiscreteControlProfile[];
    static const char GenerationEventProfile[];
    static const char GenerationReadingProfile[];
    static const char GenerationStatusProfile[];
    static const char InterconnectionPlannedScheduleProfile[];
    static const char InterconnectionRequestedScheduleProfile[];
    static const char LoadControlProfile[];
    static const char LoadEventProfile[];
    static const char LoadReadingProfile[];
    static const char LoadStatusProfile[];
    static const char MeterReadingProfile[];
    static const char RecloserDiscreteControlProfile[];
    static const char RecloserEventProfile[];
    static const char RecloserReadingProfile[];
    static const char RecloserStatusProfile[];
    static const char RegulatorDiscreteControlProfile[];
    static const char RegulatorControlProfile[];
    static const char RegulatorEventProfile[];
    static const char RegulatorReadingProfile[];
    static const char RegulatorStatusProfile[];
    static const char ReserveAvailabilityProfile[];
    static const char ReserveRequestProfile[];
    static const char ResourceDiscreteControlProfile[];
    static const char ResourceEventProfile[];
    static const char ResourceReadingProfile[];
    static const char ResourceStatusProfile[];
    static const char SolarCapabilityOverrideProfile[];
    static const char SolarCapabilityProfile[];
    static const char SolarControlProfile[];
    static const char SolarDiscreteControlProfile[];
    static const char SolarEventProfile[];
    static const char SolarReadingProfile[];
    static const char SolarStatusProfile[];
    static const char SwitchDiscreteControlProfile[];
    static const char SwitchEventProfile[];
    static const char SwitchReadingProfile[];
    static const char SwitchStatusProfile[];

    static constexpr const char* label = "profile";

    static const std::array<Value, 59> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace util

} // end namespace adapter

#endif

