#ifndef OPENFMB_ADAPTER_SCHEDULEEXTRACTORS_H
#define OPENFMB_ADAPTER_SCHEDULEEXTRACTORS_H

#include <proto-api/breakermodule/breakermodule.pb.h>
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

    // No schedule points

    // No custom points
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

    static bool has_schedule_points(const essmodule::ESSControlProfile& profile)
    {
        return profile.esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().has_valacsg();
    }

    static google::protobuf::RepeatedPtrField<commonmodule::SchedulePoint>* get_schedule_points(essmodule::ESSControlProfile& profile)
    {
        return profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
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

    static bool has_schedule_points(const generationmodule::GenerationControlProfile& profile)
    {
        return profile.generationcontrol().generationcontrolfscc().controlfscc().controlschedulefsch().has_valacsg();
    }

    static google::protobuf::RepeatedPtrField<commonmodule::SchedulePoint>* get_schedule_points(generationmodule::GenerationControlProfile& profile)
    {
        return profile.mutable_generationcontrol()->mutable_generationcontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
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

    static bool has_schedule_points(const loadmodule::LoadControlProfile& profile)
    {
        return profile.loadcontrol().loadcontrolfscc().controlfscc().controlschedulefsch().has_valacsg();
    }

    static google::protobuf::RepeatedPtrField<commonmodule::SchedulePoint>* get_schedule_points(loadmodule::LoadControlProfile& profile)
    {
        return profile.mutable_loadcontrol()->mutable_loadcontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
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
struct schedule_extractor<reclosermodule::RecloserControlProfile>
{
    static void set_source_mrid(reclosermodule::RecloserControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_recloser()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(reclosermodule::RecloserControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(reclosermodule::RecloserControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No schedule points

    using custom_point_t = commonmodule::SwitchPoint;

    static bool has_custom_points(const reclosermodule::RecloserControlProfile& profile)
    {
        return profile.reclosercontrol().reclosercontrolfscc().switchcontrolschedulefsch().has_valdcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(reclosermodule::RecloserControlProfile& profile)
    {
        return profile.mutable_reclosercontrol()->mutable_reclosercontrolfscc()->mutable_switchcontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
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

    // No schedule points

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

    static bool has_schedule_points(const regulatormodule::RegulatorControlProfile& profile)
    {
        return profile.regulatorcontrol().regulatorcontrolfscc().controlfscc().controlschedulefsch().has_valacsg();
    }

    static google::protobuf::RepeatedPtrField<commonmodule::SchedulePoint>* get_schedule_points(regulatormodule::RegulatorControlProfile& profile)
    {
        return profile.mutable_regulatorcontrol()->mutable_regulatorcontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
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

    static bool has_schedule_points(const solarmodule::SolarControlProfile& profile)
    {
        return profile.solarcontrol().solarcontrolfscc().controlfscc().controlschedulefsch().has_valacsg();
    }

    static google::protobuf::RepeatedPtrField<commonmodule::SchedulePoint>* get_schedule_points(solarmodule::SolarControlProfile& profile)
    {
        return profile.mutable_solarcontrol()->mutable_solarcontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts();
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
struct schedule_extractor<switchmodule::SwitchControlProfile>
{
    static void set_source_mrid(switchmodule::SwitchControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_protectedswitch()->mutable_conductingequipment()->set_mrid(mrid);
    }

    static void set_message_mrid(switchmodule::SwitchControlProfile& profile, const std::string& mrid)
    {
        profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(mrid);
    }

    static commonmodule::Timestamp* get_message_timestamp(switchmodule::SwitchControlProfile& profile)
    {
        return profile.mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
    }

    // No schedule points

    using custom_point_t = commonmodule::SwitchPoint;

    static bool has_custom_points(const switchmodule::SwitchControlProfile& profile)
    {
        return profile.switchcontrol().switchcontrolfscc().switchcontrolschedulefsch().has_valdcsg();
    }

    static google::protobuf::RepeatedPtrField<custom_point_t>* get_custom_points(switchmodule::SwitchControlProfile& profile)
    {
        return profile.mutable_switchcontrol()->mutable_switchcontrolfscc()->mutable_switchcontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts();
    }
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

    // No schedule points

    // No custom points
};

}
}

#endif //OPENFMB_ADAPTER_SCHEDULEEXTRACTORS_H
