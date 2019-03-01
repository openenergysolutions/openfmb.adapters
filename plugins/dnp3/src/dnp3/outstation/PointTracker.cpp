
#include "PointTracker.h"
#include <adapter-api/Exception.h>
#include <limits>

namespace adapter {
namespace dnp3 {
    namespace outstation {

        uint16_t get_point_count(const std::set<uint16_t>& set)
        {
            if (set.empty()) {
                return 0;
            } else {
                return static_cast<uint16_t>(*set.rbegin() + 1);
            }
        }

        void PointTracker::add_binary(uint16_t index)
        {
            if (index == std::numeric_limits<uint16_t>::max()) {
                throw api::Exception("Outstation only supports binary indices [0,65534]");
            }

            this->binaries.insert(index);
        }

        void PointTracker::add_analog(uint16_t index)
        {
            if (index == std::numeric_limits<uint16_t>::max()) {
                throw api::Exception("Outstation only supports analog indices [0,65534]");
            }

            this->analogs.insert(index);
        }

        void PointTracker::add_counter(uint16_t index)
        {
            if (index == std::numeric_limits<uint16_t>::max()) {
                throw api::Exception("Outstation only supports counter indices [0,65534]");
            }

            this->counters.insert(index);
        }

        opendnp3::DatabaseSizes PointTracker::get_sizes() const
        {
            return {
                get_point_count(this->binaries),
                0,
                get_point_count(this->analogs),
                get_point_count(this->counters),
                0,
                0,
                0,
                0
            };
        }
    }
}
}
