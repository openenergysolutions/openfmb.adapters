#ifndef OPENFMB_ADAPTER_SCHEDULESPLIT_H
#define OPENFMB_ADAPTER_SCHEDULESPLIT_H

#include <chrono>
#include <map>
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

template <typename T, typename S>
static void extract_points(T& profile, schedule_map_t<T>& later, boost::uuids::random_generator& rg, std::chrono::system_clock::duration tolerance,
        google::protobuf::RepeatedPtrField<S>* points, std::function<void(const S& point, T& profile)> add_point_fn)
{
    if(points->size() > 0)
    {
        bool is_first_point = true;
        bool move_first_point = false;
        std::chrono::system_clock::time_point last_timestamp;
        for(const auto point: *points)
        {
            if(!point.has_starttime())
            {
                throw api::Exception("Schedule point is missing a timestamp");
            }

            auto timestamp = time::get(point.starttime());

            // a profile at that time already exists
            auto it = later.find(timestamp);
            if(it != later.end())
            {
                add_point_fn(point, *it->second);
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
                    ts->set_nanoseconds(point.starttime().nanoseconds());
                }
                add_point_fn(point, *new_profile);

                auto result = later.insert({timestamp, std::move(new_profile)});
                it = result.first;
            }

            // Timestamp validation
            if(is_first_point)
            {
                auto diff = timestamp - std::chrono::system_clock::now();
                diff = diff >= diff.zero() ? diff : -diff;
                if(diff > tolerance)
                {
                    throw api::Exception("First schedule point not within tolerance");
                }
                if(timestamp <= std::chrono::system_clock::now())
                {
                    // Copy to to now profile
                    move_first_point = true;
                }
                is_first_point = false;
            }
            else
            {
                if(timestamp < last_timestamp)
                {
                    throw api::Exception("Schedule points not in order");
                }
            }
            last_timestamp = timestamp;
        }

        points->Clear();

        if(move_first_point)
        {
            auto it = later.begin();
            profile.MergeFrom(*it->second);
            later.erase(it);
        }
    }
}

template <typename T, typename U = int>
struct SchedulePointSplitter
{
    static void extract(T& profile, schedule_map_t<T>& later, boost::uuids::random_generator& rg, std::chrono::system_clock::duration tolerance)
    {
        // Do nothing
    }
};

template <typename T>
struct SchedulePointSplitter<T, decltype((void) schedule_extractor<T>::get_control_fscc, 0)>
{
    static void extract(T& profile, schedule_map_t<T>& later, boost::uuids::random_generator& rg, std::chrono::system_clock::duration tolerance)
    {
        auto control_fscc = schedule_extractor<T>::get_control_fscc(profile);

        extract_points<T, commonmodule::SchedulePoint>(profile, later, rg, tolerance,
                                                       control_fscc->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts(),
                                                       [](const commonmodule::SchedulePoint& point, T& profile) {
            if(point.scheduleparameter_size() == 0)
            {
                throw api::Exception("Schedule point does not have a value associated with a timestamp");
            }
            const auto new_point = schedule_extractor<T>::get_control_fscc(profile)->mutable_controlschedulefsch()->mutable_valacsg()->mutable_schpts()->Add();
            new_point->MergeFrom(point);
        });

        extract_points<T, commonmodule::SchedulePoint>(profile, later, rg, tolerance,
                                                       control_fscc->mutable_islandcontrolschedulefsch()->mutable_valacsg()->mutable_schpts(),
                                                       [](const commonmodule::SchedulePoint& point, T& profile) {
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
    static void extract(T& profile, schedule_map_t<T>& later, boost::uuids::random_generator& rg, std::chrono::system_clock::duration tolerance)
    {
        // Do nothing
    }
};

template <typename T>
struct CustomPointSplitter<T, decltype((void) schedule_extractor<T>::has_custom_points, 0)>
{
    static void extract(T& profile, schedule_map_t<T>& later, boost::uuids::random_generator& rg, std::chrono::system_clock::duration tolerance)
    {
        extract_points<T, typename schedule_extractor<T>::custom_point_t>(profile, later, rg, tolerance,
                                                       schedule_extractor<T>::get_custom_points(profile),
                                                       [](const typename schedule_extractor<T>::custom_point_t& point, T& profile) {
            const auto new_point = schedule_extractor<T>::get_custom_points(profile)->Add();
            new_point->MergeFrom(point);
        });
    }
};

template <typename T>
class ScheduleSplit
{
public:
    ScheduleSplit(std::chrono::system_clock::duration tolerance) : tolerance(tolerance)
    {}

    SplitSchedule<T> split(const T& profile)
    {
        // make a mutable copy
        auto copy = std::make_unique<T>(profile);

        // This is just to make sure we have a template specialization for each type
        schedule_extractor<T>::get_message_timestamp(*copy);

        // iterate over each schedule point, building a map of new profiles
        schedule_map_t<T> later;

        // Extract SchedulePoints (if necessary)
        SchedulePointSplitter<T>::extract(*copy, later, rg, tolerance);

        // Extract custom points (if necessary)
        CustomPointSplitter<T>::extract(*copy, later, rg, tolerance);

        return { std::move(copy), std::move(later) };
    }

private:
    boost::uuids::random_generator rg;
    std::chrono::system_clock::duration tolerance;
};

}
}

#endif //OPENFMB_ADAPTER_SCHEDULESPLIT_H
