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
struct PublisherFactory;

template<>
struct PublisherFactory<generationmodule::GenerationStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationStatusProfile> topic{dds_publisher->participant(), "openfmb.generationmodule.GenerationStatusProfile"};
        return std::make_shared<DDSPublisher<generationmodule::GenerationStatusProfile, openfmb::generationmodule::GenerationStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<essmodule::ESSControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSControlProfile> topic{dds_publisher->participant(), "openfmb.essmodule.ESSControlProfile"};
        return std::make_shared<DDSPublisher<essmodule::ESSControlProfile, openfmb::essmodule::ESSControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorEventProfile> topic{dds_publisher->participant(), "openfmb.regulatormodule.RegulatorEventProfile"};
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorEventProfile, openfmb::regulatormodule::RegulatorEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarEventProfile> topic{dds_publisher->participant(), "openfmb.solarmodule.SolarEventProfile"};
        return std::make_shared<DDSPublisher<solarmodule::SolarEventProfile, openfmb::solarmodule::SolarEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<breakermodule::BreakerReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerReadingProfile> topic{dds_publisher->participant(), "openfmb.breakermodule.BreakerReadingProfile"};
        return std::make_shared<DDSPublisher<breakermodule::BreakerReadingProfile, openfmb::breakermodule::BreakerReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadEventProfile> topic{dds_publisher->participant(), "openfmb.loadmodule.LoadEventProfile"};
        return std::make_shared<DDSPublisher<loadmodule::LoadEventProfile, openfmb::loadmodule::LoadEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<breakermodule::BreakerEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerEventProfile> topic{dds_publisher->participant(), "openfmb.breakermodule.BreakerEventProfile"};
        return std::make_shared<DDSPublisher<breakermodule::BreakerEventProfile, openfmb::breakermodule::BreakerEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserReadingProfile> topic{dds_publisher->participant(), "openfmb.reclosermodule.RecloserReadingProfile"};
        return std::make_shared<DDSPublisher<reclosermodule::RecloserReadingProfile, openfmb::reclosermodule::RecloserReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchStatusProfile> topic{dds_publisher->participant(), "openfmb.switchmodule.SwitchStatusProfile"};
        return std::make_shared<DDSPublisher<switchmodule::SwitchStatusProfile, openfmb::switchmodule::SwitchStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorStatusProfile> topic{dds_publisher->participant(), "openfmb.regulatormodule.RegulatorStatusProfile"};
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorStatusProfile, openfmb::regulatormodule::RegulatorStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchReadingProfile> topic{dds_publisher->participant(), "openfmb.switchmodule.SwitchReadingProfile"};
        return std::make_shared<DDSPublisher<switchmodule::SwitchReadingProfile, openfmb::switchmodule::SwitchReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserDiscreteControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserDiscreteControlProfile> topic{dds_publisher->participant(), "openfmb.reclosermodule.RecloserDiscreteControlProfile"};
        return std::make_shared<DDSPublisher<reclosermodule::RecloserDiscreteControlProfile, openfmb::reclosermodule::RecloserDiscreteControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarReadingProfile> topic{dds_publisher->participant(), "openfmb.solarmodule.SolarReadingProfile"};
        return std::make_shared<DDSPublisher<solarmodule::SolarReadingProfile, openfmb::solarmodule::SolarReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<breakermodule::BreakerStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerStatusProfile> topic{dds_publisher->participant(), "openfmb.breakermodule.BreakerStatusProfile"};
        return std::make_shared<DDSPublisher<breakermodule::BreakerStatusProfile, openfmb::breakermodule::BreakerStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadReadingProfile> topic{dds_publisher->participant(), "openfmb.loadmodule.LoadReadingProfile"};
        return std::make_shared<DDSPublisher<loadmodule::LoadReadingProfile, openfmb::loadmodule::LoadReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationReadingProfile> topic{dds_publisher->participant(), "openfmb.generationmodule.GenerationReadingProfile"};
        return std::make_shared<DDSPublisher<generationmodule::GenerationReadingProfile, openfmb::generationmodule::GenerationReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<metermodule::MeterReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<metermodule::MeterReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::metermodule::MeterReadingProfile> topic{dds_publisher->participant(), "openfmb.metermodule.MeterReadingProfile"};
        return std::make_shared<DDSPublisher<metermodule::MeterReadingProfile, openfmb::metermodule::MeterReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserEventProfile> topic{dds_publisher->participant(), "openfmb.reclosermodule.RecloserEventProfile"};
        return std::make_shared<DDSPublisher<reclosermodule::RecloserEventProfile, openfmb::reclosermodule::RecloserEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchControlProfile> topic{dds_publisher->participant(), "openfmb.switchmodule.SwitchControlProfile"};
        return std::make_shared<DDSPublisher<switchmodule::SwitchControlProfile, openfmb::switchmodule::SwitchControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchDiscreteControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchDiscreteControlProfile> topic{dds_publisher->participant(), "openfmb.switchmodule.SwitchDiscreteControlProfile"};
        return std::make_shared<DDSPublisher<switchmodule::SwitchDiscreteControlProfile, openfmb::switchmodule::SwitchDiscreteControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationControlProfile> topic{dds_publisher->participant(), "openfmb.generationmodule.GenerationControlProfile"};
        return std::make_shared<DDSPublisher<generationmodule::GenerationControlProfile, openfmb::generationmodule::GenerationControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadControlProfile> topic{dds_publisher->participant(), "openfmb.loadmodule.LoadControlProfile"};
        return std::make_shared<DDSPublisher<loadmodule::LoadControlProfile, openfmb::loadmodule::LoadControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<breakermodule::BreakerDiscreteControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<breakermodule::BreakerDiscreteControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerDiscreteControlProfile> topic{dds_publisher->participant(), "openfmb.breakermodule.BreakerDiscreteControlProfile"};
        return std::make_shared<DDSPublisher<breakermodule::BreakerDiscreteControlProfile, openfmb::breakermodule::BreakerDiscreteControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorReadingProfile> topic{dds_publisher->participant(), "openfmb.regulatormodule.RegulatorReadingProfile"};
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorReadingProfile, openfmb::regulatormodule::RegulatorReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<resourcemodule::ResourceReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<resourcemodule::ResourceReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::resourcemodule::ResourceReadingProfile> topic{dds_publisher->participant(), "openfmb.resourcemodule.ResourceReadingProfile"};
        return std::make_shared<DDSPublisher<resourcemodule::ResourceReadingProfile, openfmb::resourcemodule::ResourceReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<generationmodule::GenerationEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<generationmodule::GenerationEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationEventProfile> topic{dds_publisher->participant(), "openfmb.generationmodule.GenerationEventProfile"};
        return std::make_shared<DDSPublisher<generationmodule::GenerationEventProfile, openfmb::generationmodule::GenerationEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<loadmodule::LoadStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<loadmodule::LoadStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadStatusProfile> topic{dds_publisher->participant(), "openfmb.loadmodule.LoadStatusProfile"};
        return std::make_shared<DDSPublisher<loadmodule::LoadStatusProfile, openfmb::loadmodule::LoadStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<switchmodule::SwitchEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<switchmodule::SwitchEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchEventProfile> topic{dds_publisher->participant(), "openfmb.switchmodule.SwitchEventProfile"};
        return std::make_shared<DDSPublisher<switchmodule::SwitchEventProfile, openfmb::switchmodule::SwitchEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<essmodule::ESSReadingProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSReadingProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSReadingProfile> topic{dds_publisher->participant(), "openfmb.essmodule.ESSReadingProfile"};
        return std::make_shared<DDSPublisher<essmodule::ESSReadingProfile, openfmb::essmodule::ESSReadingProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarControlProfile> topic{dds_publisher->participant(), "openfmb.solarmodule.SolarControlProfile"};
        return std::make_shared<DDSPublisher<solarmodule::SolarControlProfile, openfmb::solarmodule::SolarControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<essmodule::ESSStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSStatusProfile> topic{dds_publisher->participant(), "openfmb.essmodule.ESSStatusProfile"};
        return std::make_shared<DDSPublisher<essmodule::ESSStatusProfile, openfmb::essmodule::ESSStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<essmodule::ESSEventProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<essmodule::ESSEventProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSEventProfile> topic{dds_publisher->participant(), "openfmb.essmodule.ESSEventProfile"};
        return std::make_shared<DDSPublisher<essmodule::ESSEventProfile, openfmb::essmodule::ESSEventProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<resourcemodule::ResourceStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<resourcemodule::ResourceStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::resourcemodule::ResourceStatusProfile> topic{dds_publisher->participant(), "openfmb.resourcemodule.ResourceStatusProfile"};
        return std::make_shared<DDSPublisher<resourcemodule::ResourceStatusProfile, openfmb::resourcemodule::ResourceStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<solarmodule::SolarStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<solarmodule::SolarStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarStatusProfile> topic{dds_publisher->participant(), "openfmb.solarmodule.SolarStatusProfile"};
        return std::make_shared<DDSPublisher<solarmodule::SolarStatusProfile, openfmb::solarmodule::SolarStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserStatusProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserStatusProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserStatusProfile> topic{dds_publisher->participant(), "openfmb.reclosermodule.RecloserStatusProfile"};
        return std::make_shared<DDSPublisher<reclosermodule::RecloserStatusProfile, openfmb::reclosermodule::RecloserStatusProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<regulatormodule::RegulatorControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<regulatormodule::RegulatorControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorControlProfile> topic{dds_publisher->participant(), "openfmb.regulatormodule.RegulatorControlProfile"};
        return std::make_shared<DDSPublisher<regulatormodule::RegulatorControlProfile, openfmb::regulatormodule::RegulatorControlProfile>>(logger, dds_publisher, topic);
    }
};

template<>
struct PublisherFactory<reclosermodule::RecloserControlProfile>
{
    static std::shared_ptr<api::ISubscriptionHandler<reclosermodule::RecloserControlProfile>> build(const api::Logger& logger, std::shared_ptr<::dds::pub::Publisher> dds_publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserControlProfile> topic{dds_publisher->participant(), "openfmb.reclosermodule.RecloserControlProfile"};
        return std::make_shared<DDSPublisher<reclosermodule::RecloserControlProfile, openfmb::reclosermodule::RecloserControlProfile>>(logger, dds_publisher, topic);
    }
};

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

