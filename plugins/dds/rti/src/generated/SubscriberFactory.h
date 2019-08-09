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
struct SubscriberFactory<generationmodule::GenerationStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationStatusProfile> topic{dds_subscriber->participant(), "openfmb.generationmodule.GenerationStatusProfile"};
        return std::make_unique<DDSSubscriber<generationmodule::GenerationStatusProfile, openfmb::generationmodule::GenerationStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSControlProfile> topic{dds_subscriber->participant(), "openfmb.essmodule.ESSControlProfile"};
        return std::make_unique<DDSSubscriber<essmodule::ESSControlProfile, openfmb::essmodule::ESSControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorEventProfile> topic{dds_subscriber->participant(), "openfmb.regulatormodule.RegulatorEventProfile"};
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorEventProfile, openfmb::regulatormodule::RegulatorEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarEventProfile> topic{dds_subscriber->participant(), "openfmb.solarmodule.SolarEventProfile"};
        return std::make_unique<DDSSubscriber<solarmodule::SolarEventProfile, openfmb::solarmodule::SolarEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<breakermodule::BreakerReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerReadingProfile> topic{dds_subscriber->participant(), "openfmb.breakermodule.BreakerReadingProfile"};
        return std::make_unique<DDSSubscriber<breakermodule::BreakerReadingProfile, openfmb::breakermodule::BreakerReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadEventProfile> topic{dds_subscriber->participant(), "openfmb.loadmodule.LoadEventProfile"};
        return std::make_unique<DDSSubscriber<loadmodule::LoadEventProfile, openfmb::loadmodule::LoadEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<breakermodule::BreakerEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerEventProfile> topic{dds_subscriber->participant(), "openfmb.breakermodule.BreakerEventProfile"};
        return std::make_unique<DDSSubscriber<breakermodule::BreakerEventProfile, openfmb::breakermodule::BreakerEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserReadingProfile> topic{dds_subscriber->participant(), "openfmb.reclosermodule.RecloserReadingProfile"};
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserReadingProfile, openfmb::reclosermodule::RecloserReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchStatusProfile> topic{dds_subscriber->participant(), "openfmb.switchmodule.SwitchStatusProfile"};
        return std::make_unique<DDSSubscriber<switchmodule::SwitchStatusProfile, openfmb::switchmodule::SwitchStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorStatusProfile> topic{dds_subscriber->participant(), "openfmb.regulatormodule.RegulatorStatusProfile"};
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorStatusProfile, openfmb::regulatormodule::RegulatorStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchReadingProfile> topic{dds_subscriber->participant(), "openfmb.switchmodule.SwitchReadingProfile"};
        return std::make_unique<DDSSubscriber<switchmodule::SwitchReadingProfile, openfmb::switchmodule::SwitchReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserDiscreteControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserDiscreteControlProfile> topic{dds_subscriber->participant(), "openfmb.reclosermodule.RecloserDiscreteControlProfile"};
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserDiscreteControlProfile, openfmb::reclosermodule::RecloserDiscreteControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarReadingProfile> topic{dds_subscriber->participant(), "openfmb.solarmodule.SolarReadingProfile"};
        return std::make_unique<DDSSubscriber<solarmodule::SolarReadingProfile, openfmb::solarmodule::SolarReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<breakermodule::BreakerStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerStatusProfile> topic{dds_subscriber->participant(), "openfmb.breakermodule.BreakerStatusProfile"};
        return std::make_unique<DDSSubscriber<breakermodule::BreakerStatusProfile, openfmb::breakermodule::BreakerStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadReadingProfile> topic{dds_subscriber->participant(), "openfmb.loadmodule.LoadReadingProfile"};
        return std::make_unique<DDSSubscriber<loadmodule::LoadReadingProfile, openfmb::loadmodule::LoadReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<generationmodule::GenerationReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationReadingProfile> topic{dds_subscriber->participant(), "openfmb.generationmodule.GenerationReadingProfile"};
        return std::make_unique<DDSSubscriber<generationmodule::GenerationReadingProfile, openfmb::generationmodule::GenerationReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<metermodule::MeterReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::metermodule::MeterReadingProfile> topic{dds_subscriber->participant(), "openfmb.metermodule.MeterReadingProfile"};
        return std::make_unique<DDSSubscriber<metermodule::MeterReadingProfile, openfmb::metermodule::MeterReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserEventProfile> topic{dds_subscriber->participant(), "openfmb.reclosermodule.RecloserEventProfile"};
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserEventProfile, openfmb::reclosermodule::RecloserEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchControlProfile> topic{dds_subscriber->participant(), "openfmb.switchmodule.SwitchControlProfile"};
        return std::make_unique<DDSSubscriber<switchmodule::SwitchControlProfile, openfmb::switchmodule::SwitchControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchDiscreteControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchDiscreteControlProfile> topic{dds_subscriber->participant(), "openfmb.switchmodule.SwitchDiscreteControlProfile"};
        return std::make_unique<DDSSubscriber<switchmodule::SwitchDiscreteControlProfile, openfmb::switchmodule::SwitchDiscreteControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<generationmodule::GenerationControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationControlProfile> topic{dds_subscriber->participant(), "openfmb.generationmodule.GenerationControlProfile"};
        return std::make_unique<DDSSubscriber<generationmodule::GenerationControlProfile, openfmb::generationmodule::GenerationControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadControlProfile> topic{dds_subscriber->participant(), "openfmb.loadmodule.LoadControlProfile"};
        return std::make_unique<DDSSubscriber<loadmodule::LoadControlProfile, openfmb::loadmodule::LoadControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<breakermodule::BreakerDiscreteControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::breakermodule::BreakerDiscreteControlProfile> topic{dds_subscriber->participant(), "openfmb.breakermodule.BreakerDiscreteControlProfile"};
        return std::make_unique<DDSSubscriber<breakermodule::BreakerDiscreteControlProfile, openfmb::breakermodule::BreakerDiscreteControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorReadingProfile> topic{dds_subscriber->participant(), "openfmb.regulatormodule.RegulatorReadingProfile"};
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorReadingProfile, openfmb::regulatormodule::RegulatorReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<resourcemodule::ResourceReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::resourcemodule::ResourceReadingProfile> topic{dds_subscriber->participant(), "openfmb.resourcemodule.ResourceReadingProfile"};
        return std::make_unique<DDSSubscriber<resourcemodule::ResourceReadingProfile, openfmb::resourcemodule::ResourceReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<generationmodule::GenerationEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::generationmodule::GenerationEventProfile> topic{dds_subscriber->participant(), "openfmb.generationmodule.GenerationEventProfile"};
        return std::make_unique<DDSSubscriber<generationmodule::GenerationEventProfile, openfmb::generationmodule::GenerationEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<loadmodule::LoadStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::loadmodule::LoadStatusProfile> topic{dds_subscriber->participant(), "openfmb.loadmodule.LoadStatusProfile"};
        return std::make_unique<DDSSubscriber<loadmodule::LoadStatusProfile, openfmb::loadmodule::LoadStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<switchmodule::SwitchEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::switchmodule::SwitchEventProfile> topic{dds_subscriber->participant(), "openfmb.switchmodule.SwitchEventProfile"};
        return std::make_unique<DDSSubscriber<switchmodule::SwitchEventProfile, openfmb::switchmodule::SwitchEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSReadingProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSReadingProfile> topic{dds_subscriber->participant(), "openfmb.essmodule.ESSReadingProfile"};
        return std::make_unique<DDSSubscriber<essmodule::ESSReadingProfile, openfmb::essmodule::ESSReadingProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarControlProfile> topic{dds_subscriber->participant(), "openfmb.solarmodule.SolarControlProfile"};
        return std::make_unique<DDSSubscriber<solarmodule::SolarControlProfile, openfmb::solarmodule::SolarControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSStatusProfile> topic{dds_subscriber->participant(), "openfmb.essmodule.ESSStatusProfile"};
        return std::make_unique<DDSSubscriber<essmodule::ESSStatusProfile, openfmb::essmodule::ESSStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<essmodule::ESSEventProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::essmodule::ESSEventProfile> topic{dds_subscriber->participant(), "openfmb.essmodule.ESSEventProfile"};
        return std::make_unique<DDSSubscriber<essmodule::ESSEventProfile, openfmb::essmodule::ESSEventProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<resourcemodule::ResourceStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::resourcemodule::ResourceStatusProfile> topic{dds_subscriber->participant(), "openfmb.resourcemodule.ResourceStatusProfile"};
        return std::make_unique<DDSSubscriber<resourcemodule::ResourceStatusProfile, openfmb::resourcemodule::ResourceStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<solarmodule::SolarStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::solarmodule::SolarStatusProfile> topic{dds_subscriber->participant(), "openfmb.solarmodule.SolarStatusProfile"};
        return std::make_unique<DDSSubscriber<solarmodule::SolarStatusProfile, openfmb::solarmodule::SolarStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserStatusProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserStatusProfile> topic{dds_subscriber->participant(), "openfmb.reclosermodule.RecloserStatusProfile"};
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserStatusProfile, openfmb::reclosermodule::RecloserStatusProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<regulatormodule::RegulatorControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::regulatormodule::RegulatorControlProfile> topic{dds_subscriber->participant(), "openfmb.regulatormodule.RegulatorControlProfile"};
        return std::make_unique<DDSSubscriber<regulatormodule::RegulatorControlProfile, openfmb::regulatormodule::RegulatorControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

template<>
struct SubscriberFactory<reclosermodule::RecloserControlProfile>
{
    static std::unique_ptr<IDDSSubscriber> build(const api::Logger& logger, std::shared_ptr<::dds::sub::Subscriber> dds_subscriber, api::publisher_t publisher)
    {
        ::dds::topic::Topic<openfmb::reclosermodule::RecloserControlProfile> topic{dds_subscriber->participant(), "openfmb.reclosermodule.RecloserControlProfile"};
        return std::make_unique<DDSSubscriber<reclosermodule::RecloserControlProfile, openfmb::reclosermodule::RecloserControlProfile>>(logger, dds_subscriber, topic, publisher);
    }
};

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

