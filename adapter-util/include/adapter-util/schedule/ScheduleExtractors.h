// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_SCHEDULEEXTRACTORS_H
#define OPENFMB_ADAPTER_SCHEDULEEXTRACTORS_H

#include <proto-api/breakermodule/breakermodule.pb.h>
#include <proto-api/capbankmodule/capbankmodule.pb.h>
#include <proto-api/circuitsegmentservicemodule/circuitsegmentservicemodule.pb.h>
#include <proto-api/essmodule/essmodule.pb.h>
#include <proto-api/generationmodule/generationmodule.pb.h>
#include <proto-api/loadmodule/loadmodule.pb.h>
#include <proto-api/reclosermodule/reclosermodule.pb.h>
#include <proto-api/regulatormodule/regulatormodule.pb.h>
#include <proto-api/solarmodule/solarmodule.pb.h>
#include <proto-api/switchmodule/switchmodule.pb.h>

namespace adapter
{
namespace util
{

template <typename T>
struct schedule_extractor;

template <>
struct schedule_extractor<breakermodule::BreakerDiscreteControlProfile>
{
    static void set_source_mrid(breakermodule::BreakerDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_breaker()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(breakermodule::BreakerDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(breakermodule::BreakerDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<capbankmodule::CapBankControlProfile>
{
    static void set_source_mrid(capbankmodule::CapBankControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_capbanksystem()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(capbankmodule::CapBankControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(capbankmodule::CapBankControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(capbankmodule::CapBankControlProfile& profile)
    {
        return profile.mutable_capbankcontrol()->mutable_capbankcontrolfscc()->mutable_controlfscc();
    }

    using custom_point_t = capbankmodule::CapBankPoint;

    static bool has_custom_points(const capbankmodule::CapBankControlProfile& profile)
    {
        return profile.capbankcontrol().capbankcontrolfscc().capbankcontrolschedulefsch().has_valcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(capbankmodule::CapBankControlProfile& profile)
    {
        return profile.mutable_capbankcontrol()->mutable_capbankcontrolfscc()->mutable_capbankcontrolschedulefsch()->mutable_valcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<capbankmodule::CapBankDiscreteControlProfile>
{
    static void set_source_mrid(capbankmodule::CapBankDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_capbanksystem()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(capbankmodule::CapBankDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(capbankmodule::CapBankDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<circuitsegmentservicemodule::CircuitSegmentControlProfile>
{
    static void set_source_mrid(circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_applicationsystem()->set_mrid(mrid);
    }

    static void set_message_mrid(circuitsegmentservicemodule::CircuitSegmentControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(circuitsegmentservicemodule::CircuitSegmentControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }
};

template <>
struct schedule_extractor<essmodule::ESSControlProfile>
{
    static void set_source_mrid(essmodule::ESSControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(essmodule::ESSControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(essmodule::ESSControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(essmodule::ESSControlProfile& profile)
    {
        return profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc();
    }

    using custom_point_t = essmodule::ESSPoint;

    static bool has_custom_points(const essmodule::ESSControlProfile& profile)
    {
        return profile.esscontrol().esscontrolfscc().esscontrolschedulefsch().has_valdcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(essmodule::ESSControlProfile& profile)
    {
        return profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_esscontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<essmodule::ESSDiscreteControlProfile>
{
    static void set_source_mrid(essmodule::ESSDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_ess()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(essmodule::ESSDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(essmodule::ESSDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<generationmodule::GenerationControlProfile>
{
    static void set_source_mrid(generationmodule::GenerationControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_generatingunit()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(generationmodule::GenerationControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(generationmodule::GenerationControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(generationmodule::GenerationControlProfile& profile)
    {
        return profile.mutable_generationcontrol()->mutable_generationcontrolfscc()->mutable_controlfscc();
    }

    using custom_point_t = generationmodule::GenerationPoint;

    static bool has_custom_points(const generationmodule::GenerationControlProfile& profile)
    {
        return profile.generationcontrol().generationcontrolfscc().generationcontrolschedulefsch().has_valdcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(generationmodule::GenerationControlProfile& profile)
    {
        return profile.mutable_generationcontrol()->mutable_generationcontrolfscc()->mutable_generationcontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<generationmodule::GenerationDiscreteControlProfile>
{
    static void set_source_mrid(generationmodule::GenerationDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_generatingunit()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(generationmodule::GenerationDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(generationmodule::GenerationDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<interconnectionmodule::InterconnectionPlannedScheduleProfile>
{
    static void set_source_mrid(interconnectionmodule::InterconnectionPlannedScheduleProfile& profile, const std::string& mrid)
    {
        profile.mutable_requestercircuitsegmentservice()->set_mrid(mrid);
    }

    static void set_message_mrid(interconnectionmodule::InterconnectionPlannedScheduleProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(interconnectionmodule::InterconnectionPlannedScheduleProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(interconnectionmodule::InterconnectionPlannedScheduleProfile& profile)
    {
        return profile.mutable_interconnectionschedule()->mutable_interconnectionschedulefscc()->mutable_controlfscc();
    }

    using custom_point_t = interconnectionmodule::InterconnectionPoint;

    static bool has_custom_points(const interconnectionmodule::InterconnectionPlannedScheduleProfile& profile)
    {
        return profile.interconnectionschedule().interconnectionschedulefscc().has_controlfscc();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(interconnectionmodule::InterconnectionPlannedScheduleProfile& profile)
    {
        // TODO:: Handle multiple dim array, assume only the first interconnectioncontrolschedulefsch is used
        return profile.mutable_interconnectionschedule()->mutable_interconnectionschedulefscc()->mutable_interconnectioncontrolschedulefsch()->mutable_data()[0]->mutable_valdcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<interconnectionmodule::InterconnectionRequestedScheduleProfile>
{
    static void set_source_mrid(interconnectionmodule::InterconnectionRequestedScheduleProfile& profile, const std::string& mrid)
    {
        profile.mutable_requestercircuitsegmentservice()->set_mrid(mrid);
    }

    static void set_message_mrid(interconnectionmodule::InterconnectionRequestedScheduleProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(interconnectionmodule::InterconnectionRequestedScheduleProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(interconnectionmodule::InterconnectionRequestedScheduleProfile& profile)
    {
        return profile.mutable_interconnectionschedule()->mutable_interconnectionschedulefscc()->mutable_controlfscc();
    }

    using custom_point_t = interconnectionmodule::InterconnectionPoint;

    static bool has_custom_points(const interconnectionmodule::InterconnectionRequestedScheduleProfile& profile)
    {
        return profile.interconnectionschedule().interconnectionschedulefscc().has_controlfscc();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(interconnectionmodule::InterconnectionRequestedScheduleProfile& profile)
    {
        // TODO:: Handle multiple dim array, assume only the first interconnectioncontrolschedulefsch is used
        return profile.mutable_interconnectionschedule()->mutable_interconnectionschedulefscc()->mutable_interconnectioncontrolschedulefsch()->mutable_data()[0]->mutable_valdcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<loadmodule::LoadControlProfile>
{
    static void set_source_mrid(loadmodule::LoadControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_energyconsumer()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(loadmodule::LoadControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(loadmodule::LoadControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(loadmodule::LoadControlProfile& profile)
    {
        return profile.mutable_loadcontrol()->mutable_loadcontrolfscc()->mutable_controlfscc();
    }

    using custom_point_t = loadmodule::LoadPoint;

    static bool has_custom_points(const loadmodule::LoadControlProfile& profile)
    {
        return profile.loadcontrol().loadcontrolfscc().loadcontrolschedulefsch().has_valdcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(loadmodule::LoadControlProfile& profile)
    {
        return profile.mutable_loadcontrol()->mutable_loadcontrolfscc()->mutable_loadcontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<reclosermodule::RecloserDiscreteControlProfile>
{
    static void set_source_mrid(reclosermodule::RecloserDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_recloser()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(reclosermodule::RecloserDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(reclosermodule::RecloserDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<regulatormodule::RegulatorControlProfile>
{
    static void set_source_mrid(regulatormodule::RegulatorControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_regulatorsystem()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(regulatormodule::RegulatorControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(regulatormodule::RegulatorControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(regulatormodule::RegulatorControlProfile& profile)
    {
        return profile.mutable_regulatorcontrol()->mutable_regulatorcontrolfscc()->mutable_controlfscc();
    }

    using custom_point_t = regulatormodule::RegulatorPoint;

    static bool has_custom_points(const regulatormodule::RegulatorControlProfile& profile)
    {
        return profile.regulatorcontrol().regulatorcontrolfscc().regulatorcontrolschedulefsch().has_valdcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(regulatormodule::RegulatorControlProfile& profile)
    {
        return profile.mutable_regulatorcontrol()->mutable_regulatorcontrolfscc()->mutable_regulatorcontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<regulatormodule::RegulatorDiscreteControlProfile>
{
    static void set_source_mrid(regulatormodule::RegulatorDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_regulatorsystem()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(regulatormodule::RegulatorDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(regulatormodule::RegulatorDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<reservemodule::ReserveAvailabilityProfile>
{
    static void set_source_mrid(reservemodule::ReserveAvailabilityProfile& profile, const std::string& mrid)
    {
        profile.mutable_requestercircuitsegmentservice()->set_mrid(mrid);
    }

    static void set_message_mrid(reservemodule::ReserveAvailabilityProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(reservemodule::ReserveAvailabilityProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }
};

template <>
struct schedule_extractor<reservemodule::ReserveRequestProfile>
{
    static void set_source_mrid(reservemodule::ReserveRequestProfile& profile, const std::string& mrid)
    {
        profile.mutable_requestercircuitsegmentservice()->set_mrid(mrid);
    }

    static void set_message_mrid(reservemodule::ReserveRequestProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(reservemodule::ReserveRequestProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }
};

template <>
struct schedule_extractor<resourcemodule::ResourceDiscreteControlProfile>
{
    static void set_source_mrid(resourcemodule::ResourceDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(resourcemodule::ResourceDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(resourcemodule::ResourceDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<solarmodule::SolarControlProfile>
{
    static void set_source_mrid(solarmodule::SolarControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_solarinverter()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(solarmodule::SolarControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(solarmodule::SolarControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    static commonmodule::ControlFSCC* get_control_fscc(solarmodule::SolarControlProfile& profile)
    {
        return profile.mutable_solarcontrol()->mutable_solarcontrolfscc()->mutable_controlfscc();
    }

    using custom_point_t = solarmodule::SolarPoint;

    static bool has_custom_points(const solarmodule::SolarControlProfile& profile)
    {
        return profile.solarcontrol().solarcontrolfscc().solarcontrolschedulefsch().has_valdcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(solarmodule::SolarControlProfile& profile)
    {
        return profile.mutable_solarcontrol()->mutable_solarcontrolfscc()->mutable_solarcontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
    }
};

template <>
struct schedule_extractor<solarmodule::SolarDiscreteControlProfile>
{
    static void set_source_mrid(solarmodule::SolarDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_solarinverter()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(solarmodule::SolarDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(solarmodule::SolarDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

template <>
struct schedule_extractor<switchmodule::SwitchDiscreteControlProfile>
{
    static void set_source_mrid(switchmodule::SwitchDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_protectedswitch()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(switchmodule::SwitchDiscreteControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(switchmodule::SwitchDiscreteControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No control FSCC

    // No custom points
};

}
}

#endif //OPENFMB_ADAPTER_SCHEDULEEXTRACTORS_H
