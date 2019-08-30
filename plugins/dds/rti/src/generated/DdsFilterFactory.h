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

#ifndef OPENFMB_DDSFILTERFACTORY_H
#define OPENFMB_DDSFILTERFACTORY_H

#include <string>

#include "reclosermodule/reclosermodule.pb.h"
#include "solarmodule/solarmodule.pb.h"
#include "breakermodule/breakermodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "generationmodule/generationmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "regulatormodule/regulatormodule.pb.h"
#include "metermodule/metermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"

namespace adapter {

namespace dds {

namespace rti {

template<typename T>
struct DdsFilterFactory;

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerDiscreteControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"breaker.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"breaker.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"breaker.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"breaker.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"ess.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"ess.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"ess.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"ess.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"generatingUnit.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"generatingUnit.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"generatingUnit.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"generatingUnit.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"energyConsumer.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"energyConsumer.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"energyConsumer.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"energyConsumer.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::metermodule::MeterReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"meter.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"recloser.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserDiscreteControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"recloser.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"recloser.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"recloser.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"recloser.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"regulatorSystem.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"regulatorSystem.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"regulatorSystem.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"regulatorSystem.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::resourcemodule::ResourceReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::resourcemodule::ResourceStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"solarInverter.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"solarInverter.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"solarInverter.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"solarInverter.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"protectedSwitch.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchDiscreteControlProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"protectedSwitch.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchEventProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"protectedSwitch.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchReadingProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"protectedSwitch.conductingEquipment.mRID"} + " = " + mRID;
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchStatusProfile>
{
    static std::string build(const std::string& mRID)
    {
        return std::string{"protectedSwitch.conductingEquipment.mRID"} + " = " + mRID;
    }
};

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

