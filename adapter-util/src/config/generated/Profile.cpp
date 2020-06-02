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
const char Profile::ESSControlProfile[] = "ESSControlProfile";
const char Profile::ESSEventProfile[] = "ESSEventProfile";
const char Profile::ESSReadingProfile[] = "ESSReadingProfile";
const char Profile::ESSStatusProfile[] = "ESSStatusProfile";
const char Profile::GenerationControlProfile[] = "GenerationControlProfile";
const char Profile::GenerationEventProfile[] = "GenerationEventProfile";
const char Profile::GenerationReadingProfile[] = "GenerationReadingProfile";
const char Profile::GenerationStatusProfile[] = "GenerationStatusProfile";
const char Profile::LoadControlProfile[] = "LoadControlProfile";
const char Profile::LoadEventProfile[] = "LoadEventProfile";
const char Profile::LoadReadingProfile[] = "LoadReadingProfile";
const char Profile::LoadStatusProfile[] = "LoadStatusProfile";
const char Profile::MeterReadingProfile[] = "MeterReadingProfile";
const char Profile::RecloserControlProfile[] = "RecloserControlProfile";
const char Profile::RecloserDiscreteControlProfile[] = "RecloserDiscreteControlProfile";
const char Profile::RecloserEventProfile[] = "RecloserEventProfile";
const char Profile::RecloserReadingProfile[] = "RecloserReadingProfile";
const char Profile::RecloserStatusProfile[] = "RecloserStatusProfile";
const char Profile::RegulatorControlProfile[] = "RegulatorControlProfile";
const char Profile::RegulatorEventProfile[] = "RegulatorEventProfile";
const char Profile::RegulatorReadingProfile[] = "RegulatorReadingProfile";
const char Profile::RegulatorStatusProfile[] = "RegulatorStatusProfile";
const char Profile::ResourceReadingProfile[] = "ResourceReadingProfile";
const char Profile::ResourceStatusProfile[] = "ResourceStatusProfile";
const char Profile::SolarControlProfile[] = "SolarControlProfile";
const char Profile::SolarEventProfile[] = "SolarEventProfile";
const char Profile::SolarReadingProfile[] = "SolarReadingProfile";
const char Profile::SolarStatusProfile[] = "SolarStatusProfile";
const char Profile::ShuntControlProfile[] = "ShuntControlProfile";
const char Profile::ShuntDiscreteControlProfile[] = "ShuntDiscreteControlProfile";
const char Profile::ShuntEventProfile[] = "ShuntEventProfile";
const char Profile::ShuntStatusProfile[] = "ShuntStatusProfile";
const char Profile::ShuntReadingProfile[] = "ShuntReadingProfile";
const char Profile::SwitchControlProfile[] = "SwitchControlProfile";
const char Profile::SwitchDiscreteControlProfile[] = "SwitchDiscreteControlProfile";
const char Profile::SwitchEventProfile[] = "SwitchEventProfile";
const char Profile::SwitchReadingProfile[] = "SwitchReadingProfile";
const char Profile::SwitchStatusProfile[] = "SwitchStatusProfile";

const std::array<Profile::Value, 42> Profile::values =
{
    Profile::Value::BreakerDiscreteControlProfile,
    Profile::Value::BreakerEventProfile,
    Profile::Value::BreakerReadingProfile,
    Profile::Value::BreakerStatusProfile,
    Profile::Value::ESSControlProfile,
    Profile::Value::ESSEventProfile,
    Profile::Value::ESSReadingProfile,
    Profile::Value::ESSStatusProfile,
    Profile::Value::GenerationControlProfile,
    Profile::Value::GenerationEventProfile,
    Profile::Value::GenerationReadingProfile,
    Profile::Value::GenerationStatusProfile,
    Profile::Value::LoadControlProfile,
    Profile::Value::LoadEventProfile,
    Profile::Value::LoadReadingProfile,
    Profile::Value::LoadStatusProfile,
    Profile::Value::MeterReadingProfile,
    Profile::Value::RecloserControlProfile,
    Profile::Value::RecloserDiscreteControlProfile,
    Profile::Value::RecloserEventProfile,
    Profile::Value::RecloserReadingProfile,
    Profile::Value::RecloserStatusProfile,
    Profile::Value::RegulatorControlProfile,
    Profile::Value::RegulatorEventProfile,
    Profile::Value::RegulatorReadingProfile,
    Profile::Value::RegulatorStatusProfile,
    Profile::Value::ResourceReadingProfile,
    Profile::Value::ResourceStatusProfile,
    Profile::Value::SolarControlProfile,
    Profile::Value::SolarEventProfile,
    Profile::Value::SolarReadingProfile,
    Profile::Value::SolarStatusProfile,
    Profile::Value::ShuntControlProfile,
    Profile::Value::ShuntDiscreteControlProfile,
    Profile::Value::ShuntEventProfile,
    Profile::Value::ShuntStatusProfile,
    Profile::Value::ShuntReadingProfile,
    Profile::Value::SwitchControlProfile,
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
        case(Value::ESSControlProfile): return ESSControlProfile;
        case(Value::ESSEventProfile): return ESSEventProfile;
        case(Value::ESSReadingProfile): return ESSReadingProfile;
        case(Value::ESSStatusProfile): return ESSStatusProfile;
        case(Value::GenerationControlProfile): return GenerationControlProfile;
        case(Value::GenerationEventProfile): return GenerationEventProfile;
        case(Value::GenerationReadingProfile): return GenerationReadingProfile;
        case(Value::GenerationStatusProfile): return GenerationStatusProfile;
        case(Value::LoadControlProfile): return LoadControlProfile;
        case(Value::LoadEventProfile): return LoadEventProfile;
        case(Value::LoadReadingProfile): return LoadReadingProfile;
        case(Value::LoadStatusProfile): return LoadStatusProfile;
        case(Value::MeterReadingProfile): return MeterReadingProfile;
        case(Value::RecloserControlProfile): return RecloserControlProfile;
        case(Value::RecloserDiscreteControlProfile): return RecloserDiscreteControlProfile;
        case(Value::RecloserEventProfile): return RecloserEventProfile;
        case(Value::RecloserReadingProfile): return RecloserReadingProfile;
        case(Value::RecloserStatusProfile): return RecloserStatusProfile;
        case(Value::RegulatorControlProfile): return RegulatorControlProfile;
        case(Value::RegulatorEventProfile): return RegulatorEventProfile;
        case(Value::RegulatorReadingProfile): return RegulatorReadingProfile;
        case(Value::RegulatorStatusProfile): return RegulatorStatusProfile;
        case(Value::ResourceReadingProfile): return ResourceReadingProfile;
        case(Value::ResourceStatusProfile): return ResourceStatusProfile;
        case(Value::SolarControlProfile): return SolarControlProfile;
        case(Value::SolarEventProfile): return SolarEventProfile;
        case(Value::SolarReadingProfile): return SolarReadingProfile;
        case(Value::SolarStatusProfile): return SolarStatusProfile;
        case(Value::ShuntControlProfile): return ShuntControlProfile;
        case(Value::ShuntDiscreteControlProfile): return ShuntDiscreteControlProfile;
        case(Value::ShuntEventProfile): return ShuntEventProfile;
        case(Value::ShuntStatusProfile): return ShuntStatusProfile;
        case(Value::ShuntReadingProfile): return ShuntReadingProfile;
        case(Value::SwitchControlProfile): return SwitchControlProfile;
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
        {ESSControlProfile, Value::ESSControlProfile},
        {ESSEventProfile, Value::ESSEventProfile},
        {ESSReadingProfile, Value::ESSReadingProfile},
        {ESSStatusProfile, Value::ESSStatusProfile},
        {GenerationControlProfile, Value::GenerationControlProfile},
        {GenerationEventProfile, Value::GenerationEventProfile},
        {GenerationReadingProfile, Value::GenerationReadingProfile},
        {GenerationStatusProfile, Value::GenerationStatusProfile},
        {LoadControlProfile, Value::LoadControlProfile},
        {LoadEventProfile, Value::LoadEventProfile},
        {LoadReadingProfile, Value::LoadReadingProfile},
        {LoadStatusProfile, Value::LoadStatusProfile},
        {MeterReadingProfile, Value::MeterReadingProfile},
        {RecloserControlProfile, Value::RecloserControlProfile},
        {RecloserDiscreteControlProfile, Value::RecloserDiscreteControlProfile},
        {RecloserEventProfile, Value::RecloserEventProfile},
        {RecloserReadingProfile, Value::RecloserReadingProfile},
        {RecloserStatusProfile, Value::RecloserStatusProfile},
        {RegulatorControlProfile, Value::RegulatorControlProfile},
        {RegulatorEventProfile, Value::RegulatorEventProfile},
        {RegulatorReadingProfile, Value::RegulatorReadingProfile},
        {RegulatorStatusProfile, Value::RegulatorStatusProfile},
        {ResourceReadingProfile, Value::ResourceReadingProfile},
        {ResourceStatusProfile, Value::ResourceStatusProfile},
        {SolarControlProfile, Value::SolarControlProfile},
        {SolarEventProfile, Value::SolarEventProfile},
        {SolarReadingProfile, Value::SolarReadingProfile},
        {SolarStatusProfile, Value::SolarStatusProfile},
        {ShuntControlProfile, Value::ShuntControlProfile},
        {ShuntDiscreteControlProfile, Value::ShuntDiscreteControlProfile},
        {ShuntEventProfile, Value::ShuntEventProfile},
        {ShuntStatusProfile, Value::ShuntStatusProfile},
        {ShuntReadingProfile, Value::ShuntReadingProfile},
        {SwitchControlProfile, Value::SwitchControlProfile},
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
