// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_SUB_BUILDINGFUNCTION_H
#define OPENFMB_ADAPTER_SUB_BUILDINGFUNCTION_H

#include "goose-cpp/messages/Dataset.h"
#include <functional>

namespace adapter {
namespace goose {

    using action_t = std::function<void()>;

    template <typename T>
    using building_fn_t = std::function<void(const T&, goose_cpp::Dataset&)>;

    template <typename T>
    using meas_fn_t = std::function<void(const T&)>;

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_SUB_BUILDINGFUNCTION_H
