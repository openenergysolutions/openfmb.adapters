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

#ifndef OPENFMB_SUBSCRIBERFACTORY_H
#define OPENFMB_SUBSCRIBERFACTORY_H

#include "DDSSubscriber.h"

#include "generated/TopicRepository.h"

#include "adapter-util/config/SubjectNameSuffix.h"

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

#include "OpenFMB-IDL.hpp"

namespace adapter {

namespace dds {

namespace rti {

template<typename T>
struct SubscriberFactory;

template<>
struct SubscriberFactory<breakermodule::BreakerDiscreteControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<breakermodule::BreakerDiscreteControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<breakermodule::BreakerDiscreteControlProfile, openfmb::breakermodule::BreakerDiscreteControlProfile>>(logger, subject, dds_subscriber, topic_repo.breakerdiscretecontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<breakermodule::BreakerEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<breakermodule::BreakerEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<breakermodule::BreakerEventProfile, openfmb::breakermodule::BreakerEventProfile>>(logger, subject, dds_subscriber, topic_repo.breakereventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<breakermodule::BreakerReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<breakermodule::BreakerReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<breakermodule::BreakerReadingProfile, openfmb::breakermodule::BreakerReadingProfile>>(logger, subject, dds_subscriber, topic_repo.breakerreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<breakermodule::BreakerStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<breakermodule::BreakerStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<breakermodule::BreakerStatusProfile, openfmb::breakermodule::BreakerStatusProfile>>(logger, subject, dds_subscriber, topic_repo.breakerstatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<essmodule::ESSControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<essmodule::ESSControlProfile, openfmb::essmodule::ESSControlProfile>>(logger, subject, dds_subscriber, topic_repo.esscontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<essmodule::ESSEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<essmodule::ESSEventProfile, openfmb::essmodule::ESSEventProfile>>(logger, subject, dds_subscriber, topic_repo.esseventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<essmodule::ESSReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<essmodule::ESSReadingProfile, openfmb::essmodule::ESSReadingProfile>>(logger, subject, dds_subscriber, topic_repo.essreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<essmodule::ESSStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<essmodule::ESSStatusProfile, openfmb::essmodule::ESSStatusProfile>>(logger, subject, dds_subscriber, topic_repo.essstatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<generationmodule::GenerationControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<generationmodule::GenerationControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<generationmodule::GenerationControlProfile, openfmb::generationmodule::GenerationControlProfile>>(logger, subject, dds_subscriber, topic_repo.generationcontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<generationmodule::GenerationEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<generationmodule::GenerationEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<generationmodule::GenerationEventProfile, openfmb::generationmodule::GenerationEventProfile>>(logger, subject, dds_subscriber, topic_repo.generationeventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<generationmodule::GenerationReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<generationmodule::GenerationReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<generationmodule::GenerationReadingProfile, openfmb::generationmodule::GenerationReadingProfile>>(logger, subject, dds_subscriber, topic_repo.generationreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<generationmodule::GenerationStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<generationmodule::GenerationStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<generationmodule::GenerationStatusProfile, openfmb::generationmodule::GenerationStatusProfile>>(logger, subject, dds_subscriber, topic_repo.generationstatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<loadmodule::LoadControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<loadmodule::LoadControlProfile, openfmb::loadmodule::LoadControlProfile>>(logger, subject, dds_subscriber, topic_repo.loadcontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<loadmodule::LoadEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<loadmodule::LoadEventProfile, openfmb::loadmodule::LoadEventProfile>>(logger, subject, dds_subscriber, topic_repo.loadeventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<loadmodule::LoadReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<loadmodule::LoadReadingProfile, openfmb::loadmodule::LoadReadingProfile>>(logger, subject, dds_subscriber, topic_repo.loadreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<loadmodule::LoadStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<loadmodule::LoadStatusProfile, openfmb::loadmodule::LoadStatusProfile>>(logger, subject, dds_subscriber, topic_repo.loadstatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<metermodule::MeterReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<metermodule::MeterReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<metermodule::MeterReadingProfile, openfmb::metermodule::MeterReadingProfile>>(logger, subject, dds_subscriber, topic_repo.meterreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<reclosermodule::RecloserControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserControlProfile, openfmb::reclosermodule::RecloserControlProfile>>(logger, subject, dds_subscriber, topic_repo.reclosercontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserDiscreteControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<reclosermodule::RecloserDiscreteControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserDiscreteControlProfile, openfmb::reclosermodule::RecloserDiscreteControlProfile>>(logger, subject, dds_subscriber, topic_repo.recloserdiscretecontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<reclosermodule::RecloserEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserEventProfile, openfmb::reclosermodule::RecloserEventProfile>>(logger, subject, dds_subscriber, topic_repo.reclosereventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<reclosermodule::RecloserReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserReadingProfile, openfmb::reclosermodule::RecloserReadingProfile>>(logger, subject, dds_subscriber, topic_repo.recloserreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<reclosermodule::RecloserStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserStatusProfile, openfmb::reclosermodule::RecloserStatusProfile>>(logger, subject, dds_subscriber, topic_repo.recloserstatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<regulatormodule::RegulatorControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorControlProfile, openfmb::regulatormodule::RegulatorControlProfile>>(logger, subject, dds_subscriber, topic_repo.regulatorcontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<regulatormodule::RegulatorEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorEventProfile, openfmb::regulatormodule::RegulatorEventProfile>>(logger, subject, dds_subscriber, topic_repo.regulatoreventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<regulatormodule::RegulatorReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorReadingProfile, openfmb::regulatormodule::RegulatorReadingProfile>>(logger, subject, dds_subscriber, topic_repo.regulatorreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<regulatormodule::RegulatorStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorStatusProfile, openfmb::regulatormodule::RegulatorStatusProfile>>(logger, subject, dds_subscriber, topic_repo.regulatorstatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<resourcemodule::ResourceReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<resourcemodule::ResourceReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<resourcemodule::ResourceReadingProfile, openfmb::resourcemodule::ResourceReadingProfile>>(logger, subject, dds_subscriber, topic_repo.resourcereadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<resourcemodule::ResourceStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<resourcemodule::ResourceStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<resourcemodule::ResourceStatusProfile, openfmb::resourcemodule::ResourceStatusProfile>>(logger, subject, dds_subscriber, topic_repo.resourcestatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<solarmodule::SolarControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<solarmodule::SolarControlProfile, openfmb::solarmodule::SolarControlProfile>>(logger, subject, dds_subscriber, topic_repo.solarcontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<solarmodule::SolarEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<solarmodule::SolarEventProfile, openfmb::solarmodule::SolarEventProfile>>(logger, subject, dds_subscriber, topic_repo.solareventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<solarmodule::SolarReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<solarmodule::SolarReadingProfile, openfmb::solarmodule::SolarReadingProfile>>(logger, subject, dds_subscriber, topic_repo.solarreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<solarmodule::SolarStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<solarmodule::SolarStatusProfile, openfmb::solarmodule::SolarStatusProfile>>(logger, subject, dds_subscriber, topic_repo.solarstatusprofile, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<switchmodule::SwitchControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<switchmodule::SwitchControlProfile, openfmb::switchmodule::SwitchControlProfile>>(logger, subject, dds_subscriber, topic_repo.switchcontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchDiscreteControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<switchmodule::SwitchDiscreteControlProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<switchmodule::SwitchDiscreteControlProfile, openfmb::switchmodule::SwitchDiscreteControlProfile>>(logger, subject, dds_subscriber, topic_repo.switchdiscretecontrolprofile, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<switchmodule::SwitchEventProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<switchmodule::SwitchEventProfile, openfmb::switchmodule::SwitchEventProfile>>(logger, subject, dds_subscriber, topic_repo.switcheventprofile, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<switchmodule::SwitchReadingProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<switchmodule::SwitchReadingProfile, openfmb::switchmodule::SwitchReadingProfile>>(logger, subject, dds_subscriber, topic_repo.switchreadingprofile, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, const util::SubjectNameSuffix& subject, const TopicRepository& topic_repo, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_one_t<switchmodule::SwitchStatusProfile> publisher)
    {
        return std::make_unique<DDSSubscriber<switchmodule::SwitchStatusProfile, openfmb::switchmodule::SwitchStatusProfile>>(logger, subject, dds_subscriber, topic_repo.switchstatusprofile, publisher);
    }
};

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

