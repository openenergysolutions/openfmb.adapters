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

#ifndef OPENFMB_DDSFILTERFACTORY_H
#define OPENFMB_DDSFILTERFACTORY_H

#include <string>

#include "circuitsegmentservicemodule/circuitsegmentservicemodule.pb.h"
#include "generationmodule/generationmodule.pb.h"
#include "loadmodule/loadmodule.pb.h"
#include "metermodule/metermodule.pb.h"
#include "resourcemodule/resourcemodule.pb.h"
#include "reclosermodule/reclosermodule.pb.h"
#include "interconnectionmodule/interconnectionmodule.pb.h"
#include "solarmodule/solarmodule.pb.h"
#include "breakermodule/breakermodule.pb.h"
#include "capbankmodule/capbankmodule.pb.h"
#include "switchmodule/switchmodule.pb.h"
#include "essmodule/essmodule.pb.h"
#include "regulatormodule/regulatormodule.pb.h"
#include "reservemodule/reservemodule.pb.h"

namespace adapter {

namespace dds {

namespace rti {

template<typename T>
struct DdsFilterFactory;

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerDiscreteControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerDiscreteControlProfile> build(const ::dds::topic::Topic<openfmb::breakermodule::BreakerDiscreteControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"breaker.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerDiscreteControlProfile>{topic, "breakermodule::BreakerDiscreteControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerEventProfile> build(const ::dds::topic::Topic<openfmb::breakermodule::BreakerEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"breaker.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerEventProfile>{topic, "breakermodule::BreakerEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerReadingProfile> build(const ::dds::topic::Topic<openfmb::breakermodule::BreakerReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"breaker.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerReadingProfile>{topic, "breakermodule::BreakerReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::breakermodule::BreakerStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerStatusProfile> build(const ::dds::topic::Topic<openfmb::breakermodule::BreakerStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"breaker.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::breakermodule::BreakerStatusProfile>{topic, "breakermodule::BreakerStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::capbankmodule::CapBankControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankControlProfile> build(const ::dds::topic::Topic<openfmb::capbankmodule::CapBankControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"capBankSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankControlProfile>{topic, "capbankmodule::CapBankControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::capbankmodule::CapBankDiscreteControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankDiscreteControlProfile> build(const ::dds::topic::Topic<openfmb::capbankmodule::CapBankDiscreteControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"capBankSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankDiscreteControlProfile>{topic, "capbankmodule::CapBankDiscreteControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::capbankmodule::CapBankEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankEventProfile> build(const ::dds::topic::Topic<openfmb::capbankmodule::CapBankEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"capBankSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankEventProfile>{topic, "capbankmodule::CapBankEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::capbankmodule::CapBankReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankReadingProfile> build(const ::dds::topic::Topic<openfmb::capbankmodule::CapBankReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"capBankSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankReadingProfile>{topic, "capbankmodule::CapBankReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::capbankmodule::CapBankStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankStatusProfile> build(const ::dds::topic::Topic<openfmb::capbankmodule::CapBankStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"capBankSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::capbankmodule::CapBankStatusProfile>{topic, "capbankmodule::CapBankStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::circuitsegmentservicemodule::CircuitSegmentControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::circuitsegmentservicemodule::CircuitSegmentControlProfile> build(const ::dds::topic::Topic<openfmb::circuitsegmentservicemodule::CircuitSegmentControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"applicationSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::circuitsegmentservicemodule::CircuitSegmentControlProfile>{topic, "circuitsegmentservicemodule::CircuitSegmentControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::circuitsegmentservicemodule::CircuitSegmentEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::circuitsegmentservicemodule::CircuitSegmentEventProfile> build(const ::dds::topic::Topic<openfmb::circuitsegmentservicemodule::CircuitSegmentEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"applicationSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::circuitsegmentservicemodule::CircuitSegmentEventProfile>{topic, "circuitsegmentservicemodule::CircuitSegmentEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::circuitsegmentservicemodule::CircuitSegmentStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::circuitsegmentservicemodule::CircuitSegmentStatusProfile> build(const ::dds::topic::Topic<openfmb::circuitsegmentservicemodule::CircuitSegmentStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"applicationSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::circuitsegmentservicemodule::CircuitSegmentStatusProfile>{topic, "circuitsegmentservicemodule::CircuitSegmentStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSCapabilityOverrideProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSCapabilityOverrideProfile> build(const ::dds::topic::Topic<openfmb::essmodule::ESSCapabilityOverrideProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"ess.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSCapabilityOverrideProfile>{topic, "essmodule::ESSCapabilityOverrideProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSCapabilityProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSCapabilityProfile> build(const ::dds::topic::Topic<openfmb::essmodule::ESSCapabilityProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"ess.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSCapabilityProfile>{topic, "essmodule::ESSCapabilityProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSControlProfile> build(const ::dds::topic::Topic<openfmb::essmodule::ESSControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"ess.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSControlProfile>{topic, "essmodule::ESSControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSEventProfile> build(const ::dds::topic::Topic<openfmb::essmodule::ESSEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"ess.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSEventProfile>{topic, "essmodule::ESSEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSReadingProfile> build(const ::dds::topic::Topic<openfmb::essmodule::ESSReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"ess.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSReadingProfile>{topic, "essmodule::ESSReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::essmodule::ESSStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSStatusProfile> build(const ::dds::topic::Topic<openfmb::essmodule::ESSStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"ess.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::essmodule::ESSStatusProfile>{topic, "essmodule::ESSStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationCapabilityOverrideProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationCapabilityOverrideProfile> build(const ::dds::topic::Topic<openfmb::generationmodule::GenerationCapabilityOverrideProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"generatingUnit.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationCapabilityOverrideProfile>{topic, "generationmodule::GenerationCapabilityOverrideProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationCapabilityProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationCapabilityProfile> build(const ::dds::topic::Topic<openfmb::generationmodule::GenerationCapabilityProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"generatingUnit.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationCapabilityProfile>{topic, "generationmodule::GenerationCapabilityProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationControlProfile> build(const ::dds::topic::Topic<openfmb::generationmodule::GenerationControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"generatingUnit.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationControlProfile>{topic, "generationmodule::GenerationControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationDiscreteControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationDiscreteControlProfile> build(const ::dds::topic::Topic<openfmb::generationmodule::GenerationDiscreteControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"generatingUnit.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationDiscreteControlProfile>{topic, "generationmodule::GenerationDiscreteControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationEventProfile> build(const ::dds::topic::Topic<openfmb::generationmodule::GenerationEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"generatingUnit.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationEventProfile>{topic, "generationmodule::GenerationEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationReadingProfile> build(const ::dds::topic::Topic<openfmb::generationmodule::GenerationReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"generatingUnit.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationReadingProfile>{topic, "generationmodule::GenerationReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::generationmodule::GenerationStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationStatusProfile> build(const ::dds::topic::Topic<openfmb::generationmodule::GenerationStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"generatingUnit.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::generationmodule::GenerationStatusProfile>{topic, "generationmodule::GenerationStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::interconnectionmodule::PlannedInterconnectionScheduleProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::interconnectionmodule::PlannedInterconnectionScheduleProfile> build(const ::dds::topic::Topic<openfmb::interconnectionmodule::PlannedInterconnectionScheduleProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"requesterCircuitSegmentService.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::interconnectionmodule::PlannedInterconnectionScheduleProfile>{topic, "interconnectionmodule::PlannedInterconnectionScheduleProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::interconnectionmodule::RequestedInterconnectionScheduleProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::interconnectionmodule::RequestedInterconnectionScheduleProfile> build(const ::dds::topic::Topic<openfmb::interconnectionmodule::RequestedInterconnectionScheduleProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"requesterCircuitSegmentService.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::interconnectionmodule::RequestedInterconnectionScheduleProfile>{topic, "interconnectionmodule::RequestedInterconnectionScheduleProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadControlProfile> build(const ::dds::topic::Topic<openfmb::loadmodule::LoadControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"energyConsumer.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadControlProfile>{topic, "loadmodule::LoadControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadEventProfile> build(const ::dds::topic::Topic<openfmb::loadmodule::LoadEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"energyConsumer.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadEventProfile>{topic, "loadmodule::LoadEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadReadingProfile> build(const ::dds::topic::Topic<openfmb::loadmodule::LoadReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"energyConsumer.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadReadingProfile>{topic, "loadmodule::LoadReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::loadmodule::LoadStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadStatusProfile> build(const ::dds::topic::Topic<openfmb::loadmodule::LoadStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"energyConsumer.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::loadmodule::LoadStatusProfile>{topic, "loadmodule::LoadStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::metermodule::MeterReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::metermodule::MeterReadingProfile> build(const ::dds::topic::Topic<openfmb::metermodule::MeterReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"meter.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::metermodule::MeterReadingProfile>{topic, "metermodule::MeterReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserDiscreteControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserDiscreteControlProfile> build(const ::dds::topic::Topic<openfmb::reclosermodule::RecloserDiscreteControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"recloser.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserDiscreteControlProfile>{topic, "reclosermodule::RecloserDiscreteControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserEventProfile> build(const ::dds::topic::Topic<openfmb::reclosermodule::RecloserEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"recloser.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserEventProfile>{topic, "reclosermodule::RecloserEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserReadingProfile> build(const ::dds::topic::Topic<openfmb::reclosermodule::RecloserReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"recloser.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserReadingProfile>{topic, "reclosermodule::RecloserReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::reclosermodule::RecloserStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserStatusProfile> build(const ::dds::topic::Topic<openfmb::reclosermodule::RecloserStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"recloser.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::reclosermodule::RecloserStatusProfile>{topic, "reclosermodule::RecloserStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorDiscreteControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorDiscreteControlProfile> build(const ::dds::topic::Topic<openfmb::regulatormodule::RegulatorDiscreteControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"regulatorSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorDiscreteControlProfile>{topic, "regulatormodule::RegulatorDiscreteControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorControlProfile> build(const ::dds::topic::Topic<openfmb::regulatormodule::RegulatorControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"regulatorSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorControlProfile>{topic, "regulatormodule::RegulatorControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorEventProfile> build(const ::dds::topic::Topic<openfmb::regulatormodule::RegulatorEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"regulatorSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorEventProfile>{topic, "regulatormodule::RegulatorEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorReadingProfile> build(const ::dds::topic::Topic<openfmb::regulatormodule::RegulatorReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"regulatorSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorReadingProfile>{topic, "regulatormodule::RegulatorReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::regulatormodule::RegulatorStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorStatusProfile> build(const ::dds::topic::Topic<openfmb::regulatormodule::RegulatorStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"regulatorSystem.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::regulatormodule::RegulatorStatusProfile>{topic, "regulatormodule::RegulatorStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::reservemodule::ReserveAvailabilityProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::reservemodule::ReserveAvailabilityProfile> build(const ::dds::topic::Topic<openfmb::reservemodule::ReserveAvailabilityProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"requesterCircuitSegmentService.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::reservemodule::ReserveAvailabilityProfile>{topic, "reservemodule::ReserveAvailabilityProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::reservemodule::ReserveRequestProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::reservemodule::ReserveRequestProfile> build(const ::dds::topic::Topic<openfmb::reservemodule::ReserveRequestProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"requesterCircuitSegmentService.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::reservemodule::ReserveRequestProfile>{topic, "reservemodule::ReserveRequestProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::resourcemodule::ResourceDiscreteControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceDiscreteControlProfile> build(const ::dds::topic::Topic<openfmb::resourcemodule::ResourceDiscreteControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"conductingEquipment.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceDiscreteControlProfile>{topic, "resourcemodule::ResourceDiscreteControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::resourcemodule::ResourceEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceEventProfile> build(const ::dds::topic::Topic<openfmb::resourcemodule::ResourceEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"conductingEquipment.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceEventProfile>{topic, "resourcemodule::ResourceEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::resourcemodule::ResourceReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceReadingProfile> build(const ::dds::topic::Topic<openfmb::resourcemodule::ResourceReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"conductingEquipment.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceReadingProfile>{topic, "resourcemodule::ResourceReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::resourcemodule::ResourceStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceStatusProfile> build(const ::dds::topic::Topic<openfmb::resourcemodule::ResourceStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"conductingEquipment.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::resourcemodule::ResourceStatusProfile>{topic, "resourcemodule::ResourceStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarCapabilityOverrideProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarCapabilityOverrideProfile> build(const ::dds::topic::Topic<openfmb::solarmodule::SolarCapabilityOverrideProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"solarInverter.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarCapabilityOverrideProfile>{topic, "solarmodule::SolarCapabilityOverrideProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarCapabilityProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarCapabilityProfile> build(const ::dds::topic::Topic<openfmb::solarmodule::SolarCapabilityProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"solarInverter.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarCapabilityProfile>{topic, "solarmodule::SolarCapabilityProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarControlProfile> build(const ::dds::topic::Topic<openfmb::solarmodule::SolarControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"solarInverter.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarControlProfile>{topic, "solarmodule::SolarControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarEventProfile> build(const ::dds::topic::Topic<openfmb::solarmodule::SolarEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"solarInverter.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarEventProfile>{topic, "solarmodule::SolarEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarReadingProfile> build(const ::dds::topic::Topic<openfmb::solarmodule::SolarReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"solarInverter.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarReadingProfile>{topic, "solarmodule::SolarReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::solarmodule::SolarStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarStatusProfile> build(const ::dds::topic::Topic<openfmb::solarmodule::SolarStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"solarInverter.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::solarmodule::SolarStatusProfile>{topic, "solarmodule::SolarStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchDiscreteControlProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchDiscreteControlProfile> build(const ::dds::topic::Topic<openfmb::switchmodule::SwitchDiscreteControlProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"protectedSwitch.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchDiscreteControlProfile>{topic, "switchmodule::SwitchDiscreteControlProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchEventProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchEventProfile> build(const ::dds::topic::Topic<openfmb::switchmodule::SwitchEventProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"protectedSwitch.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchEventProfile>{topic, "switchmodule::SwitchEventProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchReadingProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchReadingProfile> build(const ::dds::topic::Topic<openfmb::switchmodule::SwitchReadingProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"protectedSwitch.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchReadingProfile>{topic, "switchmodule::SwitchReadingProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

template<>
struct DdsFilterFactory<openfmb::switchmodule::SwitchStatusProfile>
{
    static ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchStatusProfile> build(const ::dds::topic::Topic<openfmb::switchmodule::SwitchStatusProfile>& topic, const std::string& mRID)
    {
        std::string filter_string{"protectedSwitch.mRID = '" + mRID + "'"};
        return ::dds::topic::ContentFilteredTopic<openfmb::switchmodule::SwitchStatusProfile>{topic, "switchmodule::SwitchStatusProfile - " + mRID, ::dds::topic::Filter{filter_string}};
    }
};

} // end namespace rti

} // end namespace dds

} // end namespace adapter

#endif

