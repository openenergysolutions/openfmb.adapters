// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/10/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_SERVER_SUBSCRIPTIONTYPE_H
#define OPENFMB_ADAPTER_ICCP_SERVER_SUBSCRIPTIONTYPE_H

#include <functional>
#include <vector>

namespace adapter {
namespace iccp {
    namespace server {

        template <class T>
        using update_handler_t = std::function<void(const T& profile)>;

        template <class T>
        using update_handler_vec_t = std::vector<update_handler_t<T>>;
    }
}
}

#endif //OPENFMB_ADAPTER_ICCP_SERVER_SUBSCRIPTIONTYPE_H
