#ifndef OPENFMB_ADAPTER_SCHEDULESPLITPROFILE_H
#define OPENFMB_ADAPTER_SCHEDULESPLITPROFILE_H

#include <proto-api/essmodule/essmodule.pb.h>

namespace adapter
{
namespace util
{

template <typename T>
struct schedule_extractor;

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

}
}

#endif //OPENFMB_ADAPTER_SCHEDULESPLITPROFILE_H
