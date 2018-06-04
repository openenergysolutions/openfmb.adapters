
#include "adapter-api/util/Time.h"

namespace adapter
{
    namespace time
    {
        void set(const std::chrono::system_clock::time_point& time, commonmodule::Timestamp& timestamp)
        {
            const auto elapsed = time.time_since_epoch();
            const auto seconds = std::chrono::duration_cast<std::chrono::seconds>(elapsed).count();
            const auto millisec = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count() % 1000;

            timestamp.set_seconds(static_cast<uint64_t>(seconds));
            // fractional seconds are scaled as a percentage of a second to the full range of a uint32_t
            timestamp.set_fraction(
                static_cast<uint32_t>((millisec / 1000.0)*std::numeric_limits<uint32_t>::max())
            );
        }
    }
}


