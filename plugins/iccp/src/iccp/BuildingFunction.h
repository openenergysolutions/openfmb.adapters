// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_ICCP_BUILDINGFUNCTION_H
#define OPENFMB_ADAPTER_ICCP_BUILDINGFUNCTION_H

#include <functional>

namespace adapter {
namespace iccp {    

    template <typename T>
    using meas_fn_t = std::function<void(const T&)>;

} 
}

#endif
