
#include "adapter-util/util/Time.h"

namespace adapter {
namespace util {
    namespace time {

        const uint32_t fraction_to_millisec_ratio = std::numeric_limits<uint32_t>::max() / 1000;

        template <typename T>
        void set_generic(const std::chrono::system_clock::time_point& time, T& timestamp)
        {
            const auto elapsed = time.time_since_epoch();
            const auto seconds = std::chrono::duration_cast<std::chrono::seconds>(elapsed).count();
            const auto millisec = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count() % 1000;

            timestamp.set_seconds(static_cast<uint64_t>(seconds));
            // fractional seconds are scaled as a percentage of a second to the full range of a uint32_t
            timestamp.set_fraction(
                static_cast<uint32_t>((millisec / 1000.0) * std::numeric_limits<uint32_t>::max()));
        }

        void set(const std::chrono::system_clock::time_point& time, commonmodule::Timestamp& timestamp)
        {
            set_generic(time, timestamp);
        }

        void set(const std::chrono::system_clock::time_point& time, commonmodule::ControlTimestamp& timestamp)
        {
            set_generic(time, timestamp);
        }

        std::chrono::system_clock::time_point get(uint64_t seconds, uint32_t fraction)
        {
            std::chrono::seconds sec { seconds };
            std::chrono::milliseconds ms {fraction / fraction_to_millisec_ratio };

            return std::chrono::time_point<std::chrono::system_clock>() + sec + ms;
        }

        std::chrono::system_clock::time_point get(const commonmodule::Timestamp& timestamp)
        {
            return get(timestamp.seconds(), timestamp.fraction());
        }

        std::chrono::system_clock::time_point get(const commonmodule::ControlTimestamp& timestamp)
        {
            return get(timestamp.seconds(), timestamp.fraction());
        }


    }
}
}
