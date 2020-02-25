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
        // essmodule.ESSControlProfile
        ESSControlProfile,
        // essmodule.ESSEventProfile
        ESSEventProfile,
        // essmodule.ESSReadingProfile
        ESSReadingProfile,
        // essmodule.ESSStatusProfile
        ESSStatusProfile,
        // generationmodule.GenerationControlProfile
        GenerationControlProfile,
        // generationmodule.GenerationEventProfile
        GenerationEventProfile,
        // generationmodule.GenerationReadingProfile
        GenerationReadingProfile,
        // generationmodule.GenerationStatusProfile
        GenerationStatusProfile,
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
        // reclosermodule.RecloserControlProfile
        RecloserControlProfile,
        // reclosermodule.RecloserDiscreteControlProfile
        RecloserDiscreteControlProfile,
        // reclosermodule.RecloserEventProfile
        RecloserEventProfile,
        // reclosermodule.RecloserReadingProfile
        RecloserReadingProfile,
        // reclosermodule.RecloserStatusProfile
        RecloserStatusProfile,
        // regulatormodule.RegulatorControlProfile
        RegulatorControlProfile,
        // regulatormodule.RegulatorEventProfile
        RegulatorEventProfile,
        // regulatormodule.RegulatorReadingProfile
        RegulatorReadingProfile,
        // regulatormodule.RegulatorStatusProfile
        RegulatorStatusProfile,
        // resourcemodule.ResourceReadingProfile
        ResourceReadingProfile,
        // resourcemodule.ResourceStatusProfile
        ResourceStatusProfile,
        // solarmodule.SolarControlProfile
        SolarControlProfile,
        // solarmodule.SolarEventProfile
        SolarEventProfile,
        // solarmodule.SolarReadingProfile
        SolarReadingProfile,
        // solarmodule.SolarStatusProfile
        SolarStatusProfile,
        // switchmodule.SwitchControlProfile
        SwitchControlProfile,
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
    static const char ESSControlProfile[];
    static const char ESSEventProfile[];
    static const char ESSReadingProfile[];
    static const char ESSStatusProfile[];
    static const char GenerationControlProfile[];
    static const char GenerationEventProfile[];
    static const char GenerationReadingProfile[];
    static const char GenerationStatusProfile[];
    static const char LoadControlProfile[];
    static const char LoadEventProfile[];
    static const char LoadReadingProfile[];
    static const char LoadStatusProfile[];
    static const char MeterReadingProfile[];
    static const char RecloserControlProfile[];
    static const char RecloserDiscreteControlProfile[];
    static const char RecloserEventProfile[];
    static const char RecloserReadingProfile[];
    static const char RecloserStatusProfile[];
    static const char RegulatorControlProfile[];
    static const char RegulatorEventProfile[];
    static const char RegulatorReadingProfile[];
    static const char RegulatorStatusProfile[];
    static const char ResourceReadingProfile[];
    static const char ResourceStatusProfile[];
    static const char SolarControlProfile[];
    static const char SolarEventProfile[];
    static const char SolarReadingProfile[];
    static const char SolarStatusProfile[];
    static const char SwitchControlProfile[];
    static const char SwitchDiscreteControlProfile[];
    static const char SwitchEventProfile[];
    static const char SwitchReadingProfile[];
    static const char SwitchStatusProfile[];

    static constexpr const char* label = "profile";

    static const std::array<Value, 37> values;

    static std::string to_string(Value value);
    static Value from_string(const std::string& name);
};

} // end namespace util

} // end namespace adapter

#endif
