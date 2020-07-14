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

#ifndef OPENFMB_TOPICREPOSITORY_H
#define OPENFMB_TOPICREPOSITORY_H

#include "dds/dds.hpp"

#include "OpenFMB-IDL.hpp"

namespace adapter {

namespace dds {

namespace rti {

struct TopicRepository
{
    public:
    TopicRepository(const ::dds::domain::DomainParticipant& participant);

    ::dds::topic::Topic<openfmb::breakermodule::BreakerDiscreteControlProfile> breakerdiscretecontrolprofile;
    ::dds::topic::Topic<openfmb::breakermodule::BreakerEventProfile> breakereventprofile;
    ::dds::topic::Topic<openfmb::breakermodule::BreakerReadingProfile> breakerreadingprofile;
    ::dds::topic::Topic<openfmb::breakermodule::BreakerStatusProfile> breakerstatusprofile;
    ::dds::topic::Topic<openfmb::capbankmodule::CapBankControlProfile> capbankcontrolprofile;
    ::dds::topic::Topic<openfmb::capbankmodule::CapBankDiscreteControlProfile> capbankdiscretecontrolprofile;
    ::dds::topic::Topic<openfmb::capbankmodule::CapBankEventProfile> capbankeventprofile;
    ::dds::topic::Topic<openfmb::capbankmodule::CapBankReadingProfile> capbankreadingprofile;
    ::dds::topic::Topic<openfmb::capbankmodule::CapBankStatusProfile> capbankstatusprofile;
    ::dds::topic::Topic<openfmb::essmodule::ESSControlProfile> esscontrolprofile;
    ::dds::topic::Topic<openfmb::essmodule::ESSEventProfile> esseventprofile;
    ::dds::topic::Topic<openfmb::essmodule::ESSReadingProfile> essreadingprofile;
    ::dds::topic::Topic<openfmb::essmodule::ESSStatusProfile> essstatusprofile;
    ::dds::topic::Topic<openfmb::generationmodule::GenerationControlProfile> generationcontrolprofile;
    ::dds::topic::Topic<openfmb::generationmodule::GenerationDiscreteControlProfile> generationdiscretecontrolprofile;
    ::dds::topic::Topic<openfmb::generationmodule::GenerationEventProfile> generationeventprofile;
    ::dds::topic::Topic<openfmb::generationmodule::GenerationReadingProfile> generationreadingprofile;
    ::dds::topic::Topic<openfmb::generationmodule::GenerationStatusProfile> generationstatusprofile;
    ::dds::topic::Topic<openfmb::loadmodule::LoadControlProfile> loadcontrolprofile;
    ::dds::topic::Topic<openfmb::loadmodule::LoadEventProfile> loadeventprofile;
    ::dds::topic::Topic<openfmb::loadmodule::LoadReadingProfile> loadreadingprofile;
    ::dds::topic::Topic<openfmb::loadmodule::LoadStatusProfile> loadstatusprofile;
    ::dds::topic::Topic<openfmb::metermodule::MeterReadingProfile> meterreadingprofile;
    ::dds::topic::Topic<openfmb::reclosermodule::RecloserControlProfile> reclosercontrolprofile;
    ::dds::topic::Topic<openfmb::reclosermodule::RecloserDiscreteControlProfile> recloserdiscretecontrolprofile;
    ::dds::topic::Topic<openfmb::reclosermodule::RecloserEventProfile> reclosereventprofile;
    ::dds::topic::Topic<openfmb::reclosermodule::RecloserReadingProfile> recloserreadingprofile;
    ::dds::topic::Topic<openfmb::reclosermodule::RecloserStatusProfile> recloserstatusprofile;
    ::dds::topic::Topic<openfmb::regulatormodule::RegulatorControlProfile> regulatorcontrolprofile;
    ::dds::topic::Topic<openfmb::regulatormodule::RegulatorEventProfile> regulatoreventprofile;
    ::dds::topic::Topic<openfmb::regulatormodule::RegulatorReadingProfile> regulatorreadingprofile;
    ::dds::topic::Topic<openfmb::regulatormodule::RegulatorStatusProfile> regulatorstatusprofile;
    ::dds::topic::Topic<openfmb::resourcemodule::ResourceDiscreteControlProfile> resourcediscretecontrolprofile;
    ::dds::topic::Topic<openfmb::resourcemodule::ResourceEventProfile> resourceeventprofile;
    ::dds::topic::Topic<openfmb::resourcemodule::ResourceReadingProfile> resourcereadingprofile;
    ::dds::topic::Topic<openfmb::resourcemodule::ResourceStatusProfile> resourcestatusprofile;
    ::dds::topic::Topic<openfmb::solarmodule::SolarControlProfile> solarcontrolprofile;
    ::dds::topic::Topic<openfmb::solarmodule::SolarEventProfile> solareventprofile;
    ::dds::topic::Topic<openfmb::solarmodule::SolarReadingProfile> solarreadingprofile;
    ::dds::topic::Topic<openfmb::solarmodule::SolarStatusProfile> solarstatusprofile;
    ::dds::topic::Topic<openfmb::switchmodule::SwitchControlProfile> switchcontrolprofile;
    ::dds::topic::Topic<openfmb::switchmodule::SwitchDiscreteControlProfile> switchdiscretecontrolprofile;
    ::dds::topic::Topic<openfmb::switchmodule::SwitchEventProfile> switcheventprofile;
    ::dds::topic::Topic<openfmb::switchmodule::SwitchReadingProfile> switchreadingprofile;
    ::dds::topic::Topic<openfmb::switchmodule::SwitchStatusProfile> switchstatusprofile;
};

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

