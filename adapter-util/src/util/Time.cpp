// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#include "adapter-util/util/Time.h"

namespace adapter {
namespace util {
    namespace time {

        template <typename T>
        void set_generic(const std::chrono::system_clock::time_point& time, T& timestamp)
        {
            const auto elapsed = time.time_since_epoch();
            const auto seconds = std::chrono::duration_cast<std::chrono::seconds>(elapsed).count();
            const auto nanos = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count() % 1'000'000'000;

            timestamp.set_seconds(static_cast<uint64_t>(seconds));
            timestamp.set_nanoseconds(static_cast<uint32_t>(nanos));
        }

        void set(const std::chrono::system_clock::time_point& time, commonmodule::Timestamp& timestamp)
        {
            set_generic(time, timestamp);
        }

        void set(const std::chrono::system_clock::time_point& time, commonmodule::ControlTimestamp& timestamp)
        {
            set_generic(time, timestamp);
        }

        std::chrono::system_clock::time_point get(uint64_t seconds, uint32_t nanoseconds)
        {
            std::chrono::seconds sec { seconds };
            std::chrono::nanoseconds ns { nanoseconds };
            auto result = std::chrono::system_clock::time_point() + sec + ns;

            return std::chrono::time_point_cast<std::chrono::system_clock::duration>(result);
        }

        std::chrono::system_clock::time_point get(const commonmodule::Timestamp& timestamp)
        {
            return get(timestamp.seconds(), timestamp.nanoseconds());
        }

        std::chrono::system_clock::time_point get(const commonmodule::ControlTimestamp& timestamp)
        {
            return get(timestamp.seconds(), timestamp.nanoseconds());
        }


    }
}
}
