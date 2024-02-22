// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 3/12/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_CLIENT_ITRANSACTION_H
#define OPENFMB_ADAPTER_ICCP_CLIENT_ITRANSACTION_H

#include "IccpClient.h"

#include <chrono>
#include <functional>
#include <memory>

namespace adapter {
namespace iccp {
    namespace client {

        using client_t = std::shared_ptr<IccpClient>;

        class ITransaction {
        public:
            virtual ~ITransaction() = default;

            using callback_t = std::function<void(bool success)>;

            virtual std::string get_description() const = 0;

            virtual void start(client_t client, const callback_t& callback) = 0;

            virtual bool is_periodic() const
            {
                return false;
            }

            virtual std::chrono::steady_clock::duration get_period() const
            {
                return std::chrono::steady_clock::duration::max();
            }
        };

    }
}
}

#endif //OPENFMB_ADAPTER_ICCP_CLIENT_ITRANSACTION_H
