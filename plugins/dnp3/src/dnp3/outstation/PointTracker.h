
#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_POINTTRACKER_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_POINTTRACKER_H

#include <cstdint>
#include <set>

#include <opendnp3/outstation/DatabaseSizes.h>

namespace adapter {
namespace dnp3 {
    namespace outstation {

        /**
         * Tracks which DNP3 points have been mapped during initialization
         * so that the shape of the outstation's database can be determined
         */
        class PointTracker {
        public:
            PointTracker() = default;

            void add_binary(uint16_t index);
            void add_analog(uint16_t index);
            void add_counter(uint16_t index);

            opendnp3::DatabaseSizes get_sizes() const;

        private:
            std::set<uint16_t> binaries;
            std::set<uint16_t> analogs;
            std::set<uint16_t> counters;
        };
    }
}
}

#endif
