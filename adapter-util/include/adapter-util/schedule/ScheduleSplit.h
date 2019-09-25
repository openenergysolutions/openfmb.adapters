#ifndef OPENFMB_ADAPTER_SCHEDULESPLIT_H
#define OPENFMB_ADAPTER_SCHEDULESPLIT_H

#include <proto-api/essmodule/essmodule.pb.h>

#include <memory>
#include <chrono>

#include <boost/uuid/random_generator.hpp>

#include "adapter-util/ProfileInfo.h"
#include "adapter-util/schedule/ScheduleSplitProfile.h"

namespace adapter
{
namespace util
{

template <typename T>
using schedule_map_t = std::map<std::chrono::system_clock::time_point, std::unique_ptr<T>>;

/**
 * The type returned when schedules are split for differed processing
 *
 * @tparam T profile type
 */
template <typename T>
struct SplitSchedule {
    std::unique_ptr<T> now;
    schedule_map_t<T> later;
};

template <typename T>
SplitSchedule<T> split(const T& profile, boost::uuids::random_generator& rg)
{
    const auto has_schedule_points = schedule_extractor<T>::has_schedule_points(profile);
    const auto has_custom_points = schedule_extractor<T>::has_custom_points(profile);

    // make a mutable copy
    auto copy = std::make_unique<T>(profile);

    // iterate over each schedule point, building a map of new profiles
    schedule_map_t<T> later;

    auto add_schedule_point = [](const commonmodule::SchedulePoint& point, T& profile)
    {
        const auto new_point = schedule_extractor<T>::get_schedule_points(profile)->Add();
        new_point->MergeFrom(point);
    };

    auto add_custom_point = [](const schedule_extractor<T>::custom_point_t& point, T& profile)
    {
        const auto new_point = schedule_extractor<T>::get_custom_points(profile)->Add();
        new_point->MergeFrom(point);
    };

    if(has_schedule_points)
    {
        // loop over the common module schedules
        auto points = schedule_extractor<T>::get_schedule_points(*copy);
        for(const auto point: *points)
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
                auto new_profile = std::make_unique<T>();

                // copy the source mRID
                schedule_extractor<T>::set_source_mrid(*new_profile, profile_info<T>::get_conducting_equip(*copy).mrid());
                // generate a fresh message mRID
                schedule_extractor<T>::set_message_mrid(*new_profile, boost::uuids::to_string(rg()));
                {
                    // set the message timestamp to the point timestamp, as this is when it will be published
                    auto ts = schedule_extractor<T>::get_message_timestamp(*new_profile);
                    ts->set_seconds(point.starttime().seconds());
                    ts->set_fraction(point.starttime().fraction());
                }
                add_schedule_point(point, *new_profile);

                later.insert({ timestamp, std::move(new_profile) });
            }
        }

        points->Clear();
    }

    if(has_custom_points)
    {
        // loop over ESS specific points
        auto points = schedule_extractor<T>::get_custom_points(*copy);
        for(const auto& point: *points)
        {
            const auto timestamp = time::get(point.starttime());

            auto existing = later.find(timestamp);

            // a profile at that time already exists
            if(existing != later.end())
            {
                add_custom_point(point, *existing->second);
            }
            else
            {
                // we have to allocate a new profile
                auto new_profile = std::make_unique<T>();
                // copy the source mRID
                schedule_extractor<T>::set_source_mrid(*new_profile, profile_info<T>::get_conducting_equip(*copy).mrid());
                // generate a fresh message mRID
                schedule_extractor<T>::set_message_mrid(*new_profile, boost::uuids::to_string(rg()));
                {
                    // set the message timestamp to the point timestamp, as this is when it will be published
                    auto ts = schedule_extractor<T>::get_message_timestamp(*new_profile);
                    ts->set_seconds(point.starttime().seconds());
                    ts->set_fraction(point.starttime().fraction());
                }
                add_custom_point(point, *new_profile);

                later.insert({ timestamp, std::move(new_profile) });
            }
        }

        points->Clear();
    }

    return { std::move(copy), std::move(later) };
}

}
}

#endif //OPENFMB_ADAPTER_SCHEDULESPLIT_H
