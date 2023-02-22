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

#include "adapter-util/config/generated/Profile.h"

#include "adapter-api/Exception.h"

#include <map>

namespace adapter {

namespace util {

const char Profile::BreakerDiscreteControlProfile[] = "BreakerDiscreteControlProfile";
const char Profile::BreakerEventProfile[] = "BreakerEventProfile";
const char Profile::BreakerReadingProfile[] = "BreakerReadingProfile";
const char Profile::BreakerStatusProfile[] = "BreakerStatusProfile";
const char Profile::CapBankControlProfile[] = "CapBankControlProfile";
const char Profile::CapBankDiscreteControlProfile[] = "CapBankDiscreteControlProfile";
const char Profile::CapBankEventProfile[] = "CapBankEventProfile";
const char Profile::CapBankReadingProfile[] = "CapBankReadingProfile";
const char Profile::CapBankStatusProfile[] = "CapBankStatusProfile";
const char Profile::CircuitSegmentControlProfile[] = "CircuitSegmentControlProfile";
const char Profile::CircuitSegmentEventProfile[] = "CircuitSegmentEventProfile";
const char Profile::CircuitSegmentStatusProfile[] = "CircuitSegmentStatusProfile";
const char Profile::ESSCapabilityOverrideProfile[] = "ESSCapabilityOverrideProfile";
const char Profile::ESSCapabilityProfile[] = "ESSCapabilityProfile";
const char Profile::ESSControlProfile[] = "ESSControlProfile";
const char Profile::ESSDiscreteControlProfile[] = "ESSDiscreteControlProfile";
const char Profile::ESSEventProfile[] = "ESSEventProfile";
const char Profile::ESSReadingProfile[] = "ESSReadingProfile";
const char Profile::ESSStatusProfile[] = "ESSStatusProfile";
const char Profile::GenerationCapabilityOverrideProfile[] = "GenerationCapabilityOverrideProfile";
const char Profile::GenerationCapabilityProfile[] = "GenerationCapabilityProfile";
const char Profile::GenerationControlProfile[] = "GenerationControlProfile";
const char Profile::GenerationDiscreteControlProfile[] = "GenerationDiscreteControlProfile";
const char Profile::GenerationEventProfile[] = "GenerationEventProfile";
const char Profile::GenerationReadingProfile[] = "GenerationReadingProfile";
const char Profile::GenerationStatusProfile[] = "GenerationStatusProfile";
const char Profile::InterconnectionPlannedScheduleProfile[] = "InterconnectionPlannedScheduleProfile";
const char Profile::InterconnectionRequestedScheduleProfile[] = "InterconnectionRequestedScheduleProfile";
const char Profile::LoadControlProfile[] = "LoadControlProfile";
const char Profile::LoadEventProfile[] = "LoadEventProfile";
const char Profile::LoadReadingProfile[] = "LoadReadingProfile";
const char Profile::LoadStatusProfile[] = "LoadStatusProfile";
const char Profile::MeterReadingProfile[] = "MeterReadingProfile";
const char Profile::RecloserDiscreteControlProfile[] = "RecloserDiscreteControlProfile";
const char Profile::RecloserEventProfile[] = "RecloserEventProfile";
const char Profile::RecloserReadingProfile[] = "RecloserReadingProfile";
const char Profile::RecloserStatusProfile[] = "RecloserStatusProfile";
const char Profile::RegulatorDiscreteControlProfile[] = "RegulatorDiscreteControlProfile";
const char Profile::RegulatorControlProfile[] = "RegulatorControlProfile";
const char Profile::RegulatorEventProfile[] = "RegulatorEventProfile";
const char Profile::RegulatorReadingProfile[] = "RegulatorReadingProfile";
const char Profile::RegulatorStatusProfile[] = "RegulatorStatusProfile";
const char Profile::ReserveAvailabilityProfile[] = "ReserveAvailabilityProfile";
const char Profile::ReserveRequestProfile[] = "ReserveRequestProfile";
const char Profile::ResourceDiscreteControlProfile[] = "ResourceDiscreteControlProfile";
const char Profile::ResourceEventProfile[] = "ResourceEventProfile";
const char Profile::ResourceReadingProfile[] = "ResourceReadingProfile";
const char Profile::ResourceStatusProfile[] = "ResourceStatusProfile";
const char Profile::SolarCapabilityOverrideProfile[] = "SolarCapabilityOverrideProfile";
const char Profile::SolarCapabilityProfile[] = "SolarCapabilityProfile";
const char Profile::SolarControlProfile[] = "SolarControlProfile";
const char Profile::SolarDiscreteControlProfile[] = "SolarDiscreteControlProfile";
const char Profile::SolarEventProfile[] = "SolarEventProfile";
const char Profile::SolarReadingProfile[] = "SolarReadingProfile";
const char Profile::SolarStatusProfile[] = "SolarStatusProfile";
const char Profile::SwitchDiscreteControlProfile[] = "SwitchDiscreteControlProfile";
const char Profile::SwitchEventProfile[] = "SwitchEventProfile";
const char Profile::SwitchReadingProfile[] = "SwitchReadingProfile";
const char Profile::SwitchStatusProfile[] = "SwitchStatusProfile";

const std::array<Profile::Value, 59> Profile::values =
{
    Profile::Value::BreakerDiscreteControlProfile,
    Profile::Value::BreakerEventProfile,
    Profile::Value::BreakerReadingProfile,
    Profile::Value::BreakerStatusProfile,
    Profile::Value::CapBankControlProfile,
    Profile::Value::CapBankDiscreteControlProfile,
    Profile::Value::CapBankEventProfile,
    Profile::Value::CapBankReadingProfile,
    Profile::Value::CapBankStatusProfile,
    Profile::Value::CircuitSegmentControlProfile,
    Profile::Value::CircuitSegmentEventProfile,
    Profile::Value::CircuitSegmentStatusProfile,
    Profile::Value::ESSCapabilityOverrideProfile,
    Profile::Value::ESSCapabilityProfile,
    Profile::Value::ESSControlProfile,
    Profile::Value::ESSDiscreteControlProfile,
    Profile::Value::ESSEventProfile,
    Profile::Value::ESSReadingProfile,
    Profile::Value::ESSStatusProfile,
    Profile::Value::GenerationCapabilityOverrideProfile,
    Profile::Value::GenerationCapabilityProfile,
    Profile::Value::GenerationControlProfile,
    Profile::Value::GenerationDiscreteControlProfile,
    Profile::Value::GenerationEventProfile,
    Profile::Value::GenerationReadingProfile,
    Profile::Value::GenerationStatusProfile,
    Profile::Value::InterconnectionPlannedScheduleProfile,
    Profile::Value::InterconnectionRequestedScheduleProfile,
    Profile::Value::LoadControlProfile,
    Profile::Value::LoadEventProfile,
    Profile::Value::LoadReadingProfile,
    Profile::Value::LoadStatusProfile,
    Profile::Value::MeterReadingProfile,
    Profile::Value::RecloserDiscreteControlProfile,
    Profile::Value::RecloserEventProfile,
    Profile::Value::RecloserReadingProfile,
    Profile::Value::RecloserStatusProfile,
    Profile::Value::RegulatorDiscreteControlProfile,
    Profile::Value::RegulatorControlProfile,
    Profile::Value::RegulatorEventProfile,
    Profile::Value::RegulatorReadingProfile,
    Profile::Value::RegulatorStatusProfile,
    Profile::Value::ReserveAvailabilityProfile,
    Profile::Value::ReserveRequestProfile,
    Profile::Value::ResourceDiscreteControlProfile,
    Profile::Value::ResourceEventProfile,
    Profile::Value::ResourceReadingProfile,
    Profile::Value::ResourceStatusProfile,
    Profile::Value::SolarCapabilityOverrideProfile,
    Profile::Value::SolarCapabilityProfile,
    Profile::Value::SolarControlProfile,
    Profile::Value::SolarDiscreteControlProfile,
    Profile::Value::SolarEventProfile,
    Profile::Value::SolarReadingProfile,
    Profile::Value::SolarStatusProfile,
    Profile::Value::SwitchDiscreteControlProfile,
    Profile::Value::SwitchEventProfile,
    Profile::Value::SwitchReadingProfile,
    Profile::Value::SwitchStatusProfile,
};

std::string Profile::to_string(Profile::Value value)
{
    switch(value)
    {
        case(Value::BreakerDiscreteControlProfile): return BreakerDiscreteControlProfile;
        case(Value::BreakerEventProfile): return BreakerEventProfile;
        case(Value::BreakerReadingProfile): return BreakerReadingProfile;
        case(Value::BreakerStatusProfile): return BreakerStatusProfile;
        case(Value::CapBankControlProfile): return CapBankControlProfile;
        case(Value::CapBankDiscreteControlProfile): return CapBankDiscreteControlProfile;
        case(Value::CapBankEventProfile): return CapBankEventProfile;
        case(Value::CapBankReadingProfile): return CapBankReadingProfile;
        case(Value::CapBankStatusProfile): return CapBankStatusProfile;
        case(Value::CircuitSegmentControlProfile): return CircuitSegmentControlProfile;
        case(Value::CircuitSegmentEventProfile): return CircuitSegmentEventProfile;
        case(Value::CircuitSegmentStatusProfile): return CircuitSegmentStatusProfile;
        case(Value::ESSCapabilityOverrideProfile): return ESSCapabilityOverrideProfile;
        case(Value::ESSCapabilityProfile): return ESSCapabilityProfile;
        case(Value::ESSControlProfile): return ESSControlProfile;
        case(Value::ESSDiscreteControlProfile): return ESSDiscreteControlProfile;
        case(Value::ESSEventProfile): return ESSEventProfile;
        case(Value::ESSReadingProfile): return ESSReadingProfile;
        case(Value::ESSStatusProfile): return ESSStatusProfile;
        case(Value::GenerationCapabilityOverrideProfile): return GenerationCapabilityOverrideProfile;
        case(Value::GenerationCapabilityProfile): return GenerationCapabilityProfile;
        case(Value::GenerationControlProfile): return GenerationControlProfile;
        case(Value::GenerationDiscreteControlProfile): return GenerationDiscreteControlProfile;
        case(Value::GenerationEventProfile): return GenerationEventProfile;
        case(Value::GenerationReadingProfile): return GenerationReadingProfile;
        case(Value::GenerationStatusProfile): return GenerationStatusProfile;
        case(Value::InterconnectionPlannedScheduleProfile): return InterconnectionPlannedScheduleProfile;
        case(Value::InterconnectionRequestedScheduleProfile): return InterconnectionRequestedScheduleProfile;
        case(Value::LoadControlProfile): return LoadControlProfile;
        case(Value::LoadEventProfile): return LoadEventProfile;
        case(Value::LoadReadingProfile): return LoadReadingProfile;
        case(Value::LoadStatusProfile): return LoadStatusProfile;
        case(Value::MeterReadingProfile): return MeterReadingProfile;
        case(Value::RecloserDiscreteControlProfile): return RecloserDiscreteControlProfile;
        case(Value::RecloserEventProfile): return RecloserEventProfile;
        case(Value::RecloserReadingProfile): return RecloserReadingProfile;
        case(Value::RecloserStatusProfile): return RecloserStatusProfile;
        case(Value::RegulatorDiscreteControlProfile): return RegulatorDiscreteControlProfile;
        case(Value::RegulatorControlProfile): return RegulatorControlProfile;
        case(Value::RegulatorEventProfile): return RegulatorEventProfile;
        case(Value::RegulatorReadingProfile): return RegulatorReadingProfile;
        case(Value::RegulatorStatusProfile): return RegulatorStatusProfile;
        case(Value::ReserveAvailabilityProfile): return ReserveAvailabilityProfile;
        case(Value::ReserveRequestProfile): return ReserveRequestProfile;
        case(Value::ResourceDiscreteControlProfile): return ResourceDiscreteControlProfile;
        case(Value::ResourceEventProfile): return ResourceEventProfile;
        case(Value::ResourceReadingProfile): return ResourceReadingProfile;
        case(Value::ResourceStatusProfile): return ResourceStatusProfile;
        case(Value::SolarCapabilityOverrideProfile): return SolarCapabilityOverrideProfile;
        case(Value::SolarCapabilityProfile): return SolarCapabilityProfile;
        case(Value::SolarControlProfile): return SolarControlProfile;
        case(Value::SolarDiscreteControlProfile): return SolarDiscreteControlProfile;
        case(Value::SolarEventProfile): return SolarEventProfile;
        case(Value::SolarReadingProfile): return SolarReadingProfile;
        case(Value::SolarStatusProfile): return SolarStatusProfile;
        case(Value::SwitchDiscreteControlProfile): return SwitchDiscreteControlProfile;
        case(Value::SwitchEventProfile): return SwitchEventProfile;
        case(Value::SwitchReadingProfile): return SwitchReadingProfile;
        default: return SwitchStatusProfile;
    }
}

Profile::Value Profile::from_string(const std::string& name)
{
    static const std::map<std::string, Value> map = 
    {
        {BreakerDiscreteControlProfile, Value::BreakerDiscreteControlProfile},
        {BreakerEventProfile, Value::BreakerEventProfile},
        {BreakerReadingProfile, Value::BreakerReadingProfile},
        {BreakerStatusProfile, Value::BreakerStatusProfile},
        {CapBankControlProfile, Value::CapBankControlProfile},
        {CapBankDiscreteControlProfile, Value::CapBankDiscreteControlProfile},
        {CapBankEventProfile, Value::CapBankEventProfile},
        {CapBankReadingProfile, Value::CapBankReadingProfile},
        {CapBankStatusProfile, Value::CapBankStatusProfile},
        {CircuitSegmentControlProfile, Value::CircuitSegmentControlProfile},
        {CircuitSegmentEventProfile, Value::CircuitSegmentEventProfile},
        {CircuitSegmentStatusProfile, Value::CircuitSegmentStatusProfile},
        {ESSCapabilityOverrideProfile, Value::ESSCapabilityOverrideProfile},
        {ESSCapabilityProfile, Value::ESSCapabilityProfile},
        {ESSControlProfile, Value::ESSControlProfile},
        {ESSDiscreteControlProfile, Value::ESSDiscreteControlProfile},
        {ESSEventProfile, Value::ESSEventProfile},
        {ESSReadingProfile, Value::ESSReadingProfile},
        {ESSStatusProfile, Value::ESSStatusProfile},
        {GenerationCapabilityOverrideProfile, Value::GenerationCapabilityOverrideProfile},
        {GenerationCapabilityProfile, Value::GenerationCapabilityProfile},
        {GenerationControlProfile, Value::GenerationControlProfile},
        {GenerationDiscreteControlProfile, Value::GenerationDiscreteControlProfile},
        {GenerationEventProfile, Value::GenerationEventProfile},
        {GenerationReadingProfile, Value::GenerationReadingProfile},
        {GenerationStatusProfile, Value::GenerationStatusProfile},
        {InterconnectionPlannedScheduleProfile, Value::InterconnectionPlannedScheduleProfile},
        {InterconnectionRequestedScheduleProfile, Value::InterconnectionRequestedScheduleProfile},
        {LoadControlProfile, Value::LoadControlProfile},
        {LoadEventProfile, Value::LoadEventProfile},
        {LoadReadingProfile, Value::LoadReadingProfile},
        {LoadStatusProfile, Value::LoadStatusProfile},
        {MeterReadingProfile, Value::MeterReadingProfile},
        {RecloserDiscreteControlProfile, Value::RecloserDiscreteControlProfile},
        {RecloserEventProfile, Value::RecloserEventProfile},
        {RecloserReadingProfile, Value::RecloserReadingProfile},
        {RecloserStatusProfile, Value::RecloserStatusProfile},
        {RegulatorDiscreteControlProfile, Value::RegulatorDiscreteControlProfile},
        {RegulatorControlProfile, Value::RegulatorControlProfile},
        {RegulatorEventProfile, Value::RegulatorEventProfile},
        {RegulatorReadingProfile, Value::RegulatorReadingProfile},
        {RegulatorStatusProfile, Value::RegulatorStatusProfile},
        {ReserveAvailabilityProfile, Value::ReserveAvailabilityProfile},
        {ReserveRequestProfile, Value::ReserveRequestProfile},
        {ResourceDiscreteControlProfile, Value::ResourceDiscreteControlProfile},
        {ResourceEventProfile, Value::ResourceEventProfile},
        {ResourceReadingProfile, Value::ResourceReadingProfile},
        {ResourceStatusProfile, Value::ResourceStatusProfile},
        {SolarCapabilityOverrideProfile, Value::SolarCapabilityOverrideProfile},
        {SolarCapabilityProfile, Value::SolarCapabilityProfile},
        {SolarControlProfile, Value::SolarControlProfile},
        {SolarDiscreteControlProfile, Value::SolarDiscreteControlProfile},
        {SolarEventProfile, Value::SolarEventProfile},
        {SolarReadingProfile, Value::SolarReadingProfile},
        {SolarStatusProfile, Value::SolarStatusProfile},
        {SwitchDiscreteControlProfile, Value::SwitchDiscreteControlProfile},
        {SwitchEventProfile, Value::SwitchEventProfile},
        {SwitchReadingProfile, Value::SwitchReadingProfile},
        {SwitchStatusProfile, Value::SwitchStatusProfile},
    };
    const auto elem = map.find(name);
    if(elem == map.end()) throw api::Exception("Unknown value name '", name, "' for enum Profile");
    return elem->second;
}

} // end namespace util

} // end namespace adapter
