

#ifndef OPENFMB_ADAPTER_SCHEDULESPLIT_H
#define OPENFMB_ADAPTER_SCHEDULESPLIT_H

#include <proto-api/essmodule/essmodule.pb.h>

#include <memory>
#include <chrono>

#include <boost/uuid/random_generator.hpp>

namespace adapter
{

namespace util
{

template <class T>
using schedule_map_t = std::map<std::chrono::system_clock::time_point, std::unique_ptr<T>>;

/**
 * The type returned when schedules are split for differed processing
 *
 * @tparam T profile type
 */
template <class T>
struct SplitSchedule {
    std::unique_ptr<T> now;
    schedule_map_t<T> later;
};

SplitSchedule<essmodule::ESSControlProfile> split(const essmodule::ESSControlProfile& profile, boost::uuids::random_generator& rg);

}

}

#endif //OPENFMB_ADAPTER_SCHEDULESPLIT_H
