// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_TIME_H
#define OPENFMB_ADAPTER_TIME_H

#include <chrono>
#include <proto-api/commonmodule/commonmodule.pb.h>

namespace adapter {
namespace util {

    namespace time {

        void set(const std::chrono::system_clock::time_point& time, commonmodule::Timestamp& timestamp);

        void set(const std::chrono::system_clock::time_point& time, commonmodule::ControlTimestamp& timestamp);

        std::chrono::system_clock::time_point get(const commonmodule::Timestamp& timestamp);

        std::chrono::system_clock::time_point get(const commonmodule::ControlTimestamp& timestamp);
    }
}
}

#endif
