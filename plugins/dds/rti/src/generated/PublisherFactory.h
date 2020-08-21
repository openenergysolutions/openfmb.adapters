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

#ifndef OPENFMB_PUBLISHERFACTORY_H
#define OPENFMB_PUBLISHERFACTORY_H

#include "DDSPublisher.h"

#include "generated/TopicRepository.h"

#include "adapter-util/config/SubjectNameSuffix.h"

#include "reclosermodule/reclosermodule.pb.h"
#include "solarmodule/solarmodule.pb.h"
#include "breakermodule/breakermodule.pb.h"
#include "capbankmodule/capbankmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "generationmodule/generationmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "regulatormodule/regulatormodule.pb.h"
#include "metermodule/metermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"

#include "OpenFMB-IDL.hpp"

namespace adapter {

namespace dds {

namespace rti {

template<typename T>
struct PublisherFactory;

template<>
struct PublisherFactory<breakermodule::BreakerDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerDiscreteControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<breakermodule::BreakerDiscreteControlProfile, openfmb::breakermodule::BreakerDiscreteControlProfile>>(logger, subject, dds_publisher, topic_repo.breakerdiscretecontrolprofile);
    }
};

template<>
struct PublisherFactory<breakermodule::BreakerEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<breakermodule::BreakerEventProfile, openfmb::breakermodule::BreakerEventProfile>>(logger, subject, dds_publisher, topic_repo.breakereventprofile);
    }
};

template<>
struct PublisherFactory<breakermodule::BreakerReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<breakermodule::BreakerReadingProfile, openfmb::breakermodule::BreakerReadingProfile>>(logger, subject, dds_publisher, topic_repo.breakerreadingprofile);
    }
};

template<>
struct PublisherFactory<breakermodule::BreakerStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<breakermodule::BreakerStatusProfile, openfmb::breakermodule::BreakerStatusProfile>>(logger, subject, dds_publisher, topic_repo.breakerstatusprofile);
    }
};

template<>
struct PublisherFactory<capbankmodule::CapBankControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<capbankmodule::CapBankControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<capbankmodule::CapBankControlProfile, openfmb::capbankmodule::CapBankControlProfile>>(logger, subject, dds_publisher, topic_repo.capbankcontrolprofile);
    }
};

template<>
struct PublisherFactory<capbankmodule::CapBankDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<capbankmodule::CapBankDiscreteControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<capbankmodule::CapBankDiscreteControlProfile, openfmb::capbankmodule::CapBankDiscreteControlProfile>>(logger, subject, dds_publisher, topic_repo.capbankdiscretecontrolprofile);
    }
};

template<>
struct PublisherFactory<capbankmodule::CapBankEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<capbankmodule::CapBankEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<capbankmodule::CapBankEventProfile, openfmb::capbankmodule::CapBankEventProfile>>(logger, subject, dds_publisher, topic_repo.capbankeventprofile);
    }
};

template<>
struct PublisherFactory<capbankmodule::CapBankReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<capbankmodule::CapBankReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<capbankmodule::CapBankReadingProfile, openfmb::capbankmodule::CapBankReadingProfile>>(logger, subject, dds_publisher, topic_repo.capbankreadingprofile);
    }
};

template<>
struct PublisherFactory<capbankmodule::CapBankStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<capbankmodule::CapBankStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<capbankmodule::CapBankStatusProfile, openfmb::capbankmodule::CapBankStatusProfile>>(logger, subject, dds_publisher, topic_repo.capbankstatusprofile);
    }
};

template<>
struct PublisherFactory<essmodule::ESSControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<essmodule::ESSControlProfile, openfmb::essmodule::ESSControlProfile>>(logger, subject, dds_publisher, topic_repo.esscontrolprofile);
    }
};

template<>
struct PublisherFactory<essmodule::ESSEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<essmodule::ESSEventProfile, openfmb::essmodule::ESSEventProfile>>(logger, subject, dds_publisher, topic_repo.esseventprofile);
    }
};

template<>
struct PublisherFactory<essmodule::ESSReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<essmodule::ESSReadingProfile, openfmb::essmodule::ESSReadingProfile>>(logger, subject, dds_publisher, topic_repo.essreadingprofile);
    }
};

template<>
struct PublisherFactory<essmodule::ESSStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<essmodule::ESSStatusProfile, openfmb::essmodule::ESSStatusProfile>>(logger, subject, dds_publisher, topic_repo.essstatusprofile);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<generationmodule::GenerationControlProfile, openfmb::generationmodule::GenerationControlProfile>>(logger, subject, dds_publisher, topic_repo.generationcontrolprofile);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationDiscreteControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<generationmodule::GenerationDiscreteControlProfile, openfmb::generationmodule::GenerationDiscreteControlProfile>>(logger, subject, dds_publisher, topic_repo.generationdiscretecontrolprofile);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<generationmodule::GenerationEventProfile, openfmb::generationmodule::GenerationEventProfile>>(logger, subject, dds_publisher, topic_repo.generationeventprofile);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<generationmodule::GenerationReadingProfile, openfmb::generationmodule::GenerationReadingProfile>>(logger, subject, dds_publisher, topic_repo.generationreadingprofile);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<generationmodule::GenerationStatusProfile, openfmb::generationmodule::GenerationStatusProfile>>(logger, subject, dds_publisher, topic_repo.generationstatusprofile);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<loadmodule::LoadControlProfile, openfmb::loadmodule::LoadControlProfile>>(logger, subject, dds_publisher, topic_repo.loadcontrolprofile);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<loadmodule::LoadEventProfile, openfmb::loadmodule::LoadEventProfile>>(logger, subject, dds_publisher, topic_repo.loadeventprofile);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<loadmodule::LoadReadingProfile, openfmb::loadmodule::LoadReadingProfile>>(logger, subject, dds_publisher, topic_repo.loadreadingprofile);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<loadmodule::LoadStatusProfile, openfmb::loadmodule::LoadStatusProfile>>(logger, subject, dds_publisher, topic_repo.loadstatusprofile);
    }
};

template<>
struct PublisherFactory<metermodule::MeterReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<metermodule::MeterReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<metermodule::MeterReadingProfile, openfmb::metermodule::MeterReadingProfile>>(logger, subject, dds_publisher, topic_repo.meterreadingprofile);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserDiscreteControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<reclosermodule::RecloserDiscreteControlProfile, openfmb::reclosermodule::RecloserDiscreteControlProfile>>(logger, subject, dds_publisher, topic_repo.recloserdiscretecontrolprofile);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<reclosermodule::RecloserEventProfile, openfmb::reclosermodule::RecloserEventProfile>>(logger, subject, dds_publisher, topic_repo.reclosereventprofile);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<reclosermodule::RecloserReadingProfile, openfmb::reclosermodule::RecloserReadingProfile>>(logger, subject, dds_publisher, topic_repo.recloserreadingprofile);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<reclosermodule::RecloserStatusProfile, openfmb::reclosermodule::RecloserStatusProfile>>(logger, subject, dds_publisher, topic_repo.recloserstatusprofile);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorDiscreteControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorDiscreteControlProfile, openfmb::regulatormodule::RegulatorDiscreteControlProfile>>(logger, subject, dds_publisher, topic_repo.regulatordiscretecontrolprofile);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorControlProfile, openfmb::regulatormodule::RegulatorControlProfile>>(logger, subject, dds_publisher, topic_repo.regulatorcontrolprofile);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorEventProfile, openfmb::regulatormodule::RegulatorEventProfile>>(logger, subject, dds_publisher, topic_repo.regulatoreventprofile);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorReadingProfile, openfmb::regulatormodule::RegulatorReadingProfile>>(logger, subject, dds_publisher, topic_repo.regulatorreadingprofile);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorStatusProfile, openfmb::regulatormodule::RegulatorStatusProfile>>(logger, subject, dds_publisher, topic_repo.regulatorstatusprofile);
    }
};

template<>
struct PublisherFactory<resourcemodule::ResourceDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<resourcemodule::ResourceDiscreteControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<resourcemodule::ResourceDiscreteControlProfile, openfmb::resourcemodule::ResourceDiscreteControlProfile>>(logger, subject, dds_publisher, topic_repo.resourcediscretecontrolprofile);
    }
};

template<>
struct PublisherFactory<resourcemodule::ResourceEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<resourcemodule::ResourceEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<resourcemodule::ResourceEventProfile, openfmb::resourcemodule::ResourceEventProfile>>(logger, subject, dds_publisher, topic_repo.resourceeventprofile);
    }
};

template<>
struct PublisherFactory<resourcemodule::ResourceReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<resourcemodule::ResourceReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<resourcemodule::ResourceReadingProfile, openfmb::resourcemodule::ResourceReadingProfile>>(logger, subject, dds_publisher, topic_repo.resourcereadingprofile);
    }
};

template<>
struct PublisherFactory<resourcemodule::ResourceStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<resourcemodule::ResourceStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<resourcemodule::ResourceStatusProfile, openfmb::resourcemodule::ResourceStatusProfile>>(logger, subject, dds_publisher, topic_repo.resourcestatusprofile);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<solarmodule::SolarControlProfile, openfmb::solarmodule::SolarControlProfile>>(logger, subject, dds_publisher, topic_repo.solarcontrolprofile);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<solarmodule::SolarEventProfile, openfmb::solarmodule::SolarEventProfile>>(logger, subject, dds_publisher, topic_repo.solareventprofile);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<solarmodule::SolarReadingProfile, openfmb::solarmodule::SolarReadingProfile>>(logger, subject, dds_publisher, topic_repo.solarreadingprofile);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<solarmodule::SolarStatusProfile, openfmb::solarmodule::SolarStatusProfile>>(logger, subject, dds_publisher, topic_repo.solarstatusprofile);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchDiscreteControlProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<switchmodule::SwitchDiscreteControlProfile, openfmb::switchmodule::SwitchDiscreteControlProfile>>(logger, subject, dds_publisher, topic_repo.switchdiscretecontrolprofile);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchEventProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<switchmodule::SwitchEventProfile, openfmb::switchmodule::SwitchEventProfile>>(logger, subject, dds_publisher, topic_repo.switcheventprofile);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchReadingProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<switchmodule::SwitchReadingProfile, openfmb::switchmodule::SwitchReadingProfile>>(logger, subject, dds_publisher, topic_repo.switchreadingprofile);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchStatusProfile>> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        return std::make_shared<DDSPublisher<switchmodule::SwitchStatusProfile, openfmb::switchmodule::SwitchStatusProfile>>(logger, subject, dds_publisher, topic_repo.switchstatusprofile);
    }
};

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

