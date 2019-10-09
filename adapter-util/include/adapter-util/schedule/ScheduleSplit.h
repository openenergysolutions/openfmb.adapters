#ifndef OPENFMB_ADAPTER_SCHEDULESPLIT_H
#define OPENFMB_ADAPTER_SCHEDULESPLIT_H

#include <chrono>
#include <deque>
#include <memory>

#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>

#include "adapter-util/ProfileInfo.h"
#include "adapter-util/schedule/ScheduleExtractors.h"
#include "adapter-util/util/Time.h"

namespace adapter
{
namespace util
{

template <typename T>
using schedule_vector_t = std::deque<std::pair<std::chrono::system_clock::time_point, std::unique_ptr<T>>>;

/**
 * The type returned when schedules are split for differed processing
 *
 * @tparam T profile type
 */
template <typename T>
struct SplitSchedule {
    std::unique_ptr<T> now;
    schedule_vector_t<T> later;
};

template <typename T, typename U = int>
struct SchedulePointSplitter
{
    static void extract(T& profile, schedule_vector_t<T>& later, boost::uuids::random_generator& rg)
    {
        // Do nothing
    }
};

template <typename T>
struct SchedulePointSplitter<T, decltype((void) schedule_extractor<T>::get_control_fscc, 0)>
{
private:
    static void extract_points(const T& profile, schedule_vector_t<T>& later, boost::uuids::random_generator& rg,
        commonmodule::ControlScheduleFSCH* schedule, std::function<void(const commonmodule::SchedulePoint& point, T& profile)> add_point_fn)
    {
        if(schedule->has_valacsg())
        {
            auto points = schedule->valacsg().schpts();
            for(const auto point: points)
            {
                if(!point.has_starttime())
                {
                    throw api::Exception("Schedule point is missing a timestamp");
                }

                auto timestamp = time::get(point.starttime());

                // a profile at that time already exists
                if(!later.empty() && timestamp == later.back().first)
                {
                    add_point_fn(point, *later.back().second);
                }
                else
                {
                    // we have to allocate a new profile
                    auto new_profile = std::make_unique<T>();

                    // copy the source mRID
                    schedule_extractor<T>::set_source_mrid(*new_profile, profile_info<T>::get_conducting_equip(profile).mrid());
                    // generate a fresh message mRID
                    schedule_extractor<T>::set_message_mrid(*new_profile, boost::uuids::to_string(rg()));
                    {
                        // set the message timestamp to the point timestamp, as this is when it will be published
                        auto ts = schedule_extractor<T>::get_message_timestamp(*new_profile);
                        ts->set_seconds(point.starttime().seconds());
                        ts->set_fraction(point.starttime().fraction());
                    }
                    add_point_fn(point, *new_profile);

                    later.emplace_back(timestamp, std::move(new_profile));
                }
            }

            schedule->Clear();
        }
    }

public:
    static void extract(T& profile, schedule_vector_t<T>& later, boost::uuids::random_generator& rg)
    {
        auto control_fscc = schedule_extractor<T>::get_control_fscc(profile);

        extract_points(profile, later, rg, control_fscc->mutable_controlschedulefsch(), [](const commonmodule::SchedulePoint& point, T& profile) {
            if(point.scheduleparameter_size() == 0)
            {
                throw api::Exception("Schedule point does not have a value associated with a timestamp");
            }
            const auto new_point = schedule_extractor<T>::get_control_fscc(profile)->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts()->Add();
            new_point->MergeFrom(point);
        });

        extract_points(profile, later, rg, control_fscc->mutable_islandcontrolschedulefsch(), [](const commonmodule::SchedulePoint& point, T& profile) {
            if(point.scheduleparameter_size() == 0)
            {
                throw api::Exception("Schedule point does not have a value associated with a timestamp");
            }
            const auto new_point = schedule_extractor<T>::get_control_fscc(profile)->mutable_islandcontrolschedulefsch()->mutable_valacsg()->mutable_schpts()->Add();
            new_point->MergeFrom(point);
        });
    }
};

template <typename T, typename U = int>
struct CustomPointSplitter
{
    static void extract(T& profile, schedule_vector_t<T>& later, boost::uuids::random_generator& rg)
    {
        // Do nothing
    }
};

template <typename T>
struct CustomPointSplitter<T, decltype((void) schedule_extractor<T>::has_custom_points, 0)>
{
    static void extract(T& profile, schedule_vector_t<T>& later, boost::uuids::random_generator& rg)
    {
        if(schedule_extractor<T>::has_custom_points(profile))
        {
            auto add_custom_point = [](const typename schedule_extractor<T>::custom_point_t& point, T& profile)
            {
                const auto new_point = schedule_extractor<T>::get_custom_points(profile)->Add();
                new_point->MergeFrom(point);
            };

            // loop over the common module schedules
            auto points = schedule_extractor<T>::get_custom_points(profile);
            for(const auto point: *points)
            {
                if(!point.has_starttime())
                {
                    throw api::Exception("Schedule point is missing a timestamp");
                }

                auto timestamp = time::get(point.starttime());

                // a profile at that time already exists
                if(!later.empty() && timestamp == later.back().first)
                {
                    add_custom_point(point, *later.back().second);
                }
                else
                {
                    // we have to allocate a new profile
                    auto new_profile = std::make_unique<T>();

                    // copy the source mRID
                    schedule_extractor<T>::set_source_mrid(*new_profile, profile_info<T>::get_conducting_equip(profile).mrid());
                    // generate a fresh message mRID
                    schedule_extractor<T>::set_message_mrid(*new_profile, boost::uuids::to_string(rg()));
                    {
                        // set the message timestamp to the point timestamp, as this is when it will be published
                        auto ts = schedule_extractor<T>::get_message_timestamp(*new_profile);
                        ts->set_seconds(point.starttime().seconds());
                        ts->set_fraction(point.starttime().fraction());
                    }
                    add_custom_point(point, *new_profile);

                    later.emplace_back(timestamp, std::move(new_profile));
                }
            }

            points->Clear();
        }
    }
};

template <typename T>
class ScheduleSplit
{
public:
    ScheduleSplit(const boost::uuids::random_generator& rg, std::chrono::system_clock::duration tolerance)
        : rg(rg), tolerance(tolerance)
    {}

    SplitSchedule<T> split(const T& profile)
    {
        // make a mutable copy
        auto copy = std::make_unique<T>(profile);

        // This is just to make sure we have a template specialization for each type
        schedule_extractor<T>::get_message_timestamp(*copy);

        // iterate over each schedule point, building a map of new profiles
        schedule_vector_t<T> later;

        // Extract SchedulePoints (if necessary)
        SchedulePointSplitter<T>::extract(*copy, later, rg);

        // Extract custom points (if necessary)
        CustomPointSplitter<T>::extract(*copy, later, rg);

        // Timestamp validations
        bool is_first_point = true;
        bool remove_first_point = false;
        std::chrono::system_clock::time_point last_timestamp;
        for(auto& it : later)
        {
            if(is_first_point)
            {
                auto diff = it.first - std::chrono::system_clock::now();
                diff = diff >= diff.zero() ? diff : -diff;
                if(diff > tolerance)
                {
                    throw api::Exception("First schedule point not within tolerance");
                }
                if(it.first <= std::chrono::system_clock::now())
                {
                    copy->MergeFrom(*it.second);
                    remove_first_point = true;
                }
                is_first_point = false;
            }
            else
            {
                if(it.first < last_timestamp)
                {
                    throw api::Exception("Schedule points not in order");
                }
            }
            last_timestamp = it.first;
        }

        if(remove_first_point)
        {
            later.pop_front();
        }

        return { std::move(copy), std::move(later) };
    }

private:
    boost::uuids::random_generator rg;
    std::chrono::system_clock::duration tolerance;
};

}
}

#endif //OPENFMB_ADAPTER_SCHEDULESPLIT_H
