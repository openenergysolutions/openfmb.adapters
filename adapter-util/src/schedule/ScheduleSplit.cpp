

#include "adapter-util/schedule/ScheduleSplit.h"

#include "adapter-util/util/Time.h"

#include <boost/uuid/uuid_io.hpp>


namespace adapter
{

namespace util
{

    SplitSchedule<essmodule::ESSControlProfile> split(const essmodule::ESSControlProfile& source, boost::uuids::random_generator& rg)
    {
        const auto has_schedule_points = source.esscontrol().esscontrolfscc().controlfscc().controlschedulefsch().has_valacsg();
        const auto has_ess_points = source.esscontrol().esscontrolfscc().esscontrolschedulefsch().has_valdcsg();

        // make a mutable copy
        auto copy = std::make_unique<essmodule::ESSControlProfile>(source);

        // iterate over each schedule point, building a map of new profiles
        schedule_map_t<essmodule::ESSControlProfile> later;

        auto add_schedule_point = [](const commonmodule::SchedulePoint& point, essmodule::ESSControlProfile& profile)
        {
            const auto new_point = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts()->Add();
            new_point->MergeFrom(point);
        };

        auto add_ess_point = [](const essmodule::ESSPoint& point, essmodule::ESSControlProfile& profile)
        {
            const auto new_point = profile.mutable_esscontrol()->mutable_esscontrolfscc()->mutable_esscontrolschedulefsch()->mutable_valdcsg()->mutable_crvpts()->Add();
            new_point->MergeFrom(point);
        };

        if(has_schedule_points)
        {
            // loop over the common module schedules
            for(const auto& point: copy->mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->schpts())
            {
                const auto timestamp = time::get(point.starttime());

                auto existing = later.find(timestamp);

                // a profile at that time already exists
                if(existing != later.end())
                {
                    add_schedule_point(point, *existing->second);
                }
                else
                {
                    // we have to allocate a new profile
                    auto new_profile = std::make_unique<essmodule::ESSControlProfile>();

                    // copy the source mRID
                    new_profile->mutable_ess()->mutable_conductingequipment()->set_mrid(source.ess().conductingequipment().mrid());
                    // generate a fresh message mRID
                    new_profile->mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));
                    {
                        // set the message timestamp to the point timestamp, as this is when it will be published
                        const auto ts = new_profile->mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
                        ts->set_seconds(point.starttime().seconds());
                        ts->set_fraction(point.starttime().fraction());
                    }
                    add_schedule_point(point, *new_profile);

                    later.insert({ timestamp, std::move(new_profile) });
                }
            }
        }

        if(has_ess_points)
        {
            // loop over ESS specific points
            for(const auto& point: copy->mutable_esscontrol()->mutable_esscontrolfscc()->mutable_esscontrolschedulefsch()->mutable_valdcsg()->crvpts())
            {
                const auto timestamp = time::get(point.starttime());

                auto existing = later.find(timestamp);

                // a profile at that time already exists
                if(existing != later.end())
                {
                    add_ess_point(point, *existing->second);
                }
                else
                {
                    // we have to allocate a new profile
                    auto new_profile = std::make_unique<essmodule::ESSControlProfile>();
                    // copy the source mRID
                    new_profile->mutable_ess()->mutable_conductingequipment()->set_mrid(source.ess().conductingequipment().mrid());
                    // generate a fresh message mRID
                    new_profile->mutable_controlmessageinfo()->mutable_messageinfo()->mutable_identifiedobject()->mutable_mrid()->set_value(boost::uuids::to_string(rg()));
                    {
                        // set the message timestamp to the point timestamp, as this is when it will be published
                        const auto ts = new_profile->mutable_controlmessageinfo()->mutable_messageinfo()->mutable_messagetimestamp();
                        ts->set_seconds(point.starttime().seconds());
                        ts->set_fraction(point.starttime().fraction());
                    }
                    add_ess_point(point, *new_profile);

                    later.insert({ timestamp, std::move(new_profile) });
                }
            }
        }

        // check that the points exist so that we don't create a useless structure just to delete them
        if(has_schedule_points) {
            copy->mutable_esscontrol()->mutable_esscontrolfscc()->mutable_controlfscc()->mutable_controlschedulefsch()->mutable_valacsg()->clear_schpts();
        }

        // check that the points exist so that we don't create a useless structure just to delete them
        if(has_ess_points) {
            copy->mutable_esscontrol()->mutable_esscontrolfscc()->mutable_esscontrolschedulefsch()->mutable_valdcsg()->clear_crvpts();
        }

        return { std::move(copy), std::move(later) };
    }

}
}


