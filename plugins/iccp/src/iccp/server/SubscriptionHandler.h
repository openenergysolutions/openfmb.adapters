// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

//
// Created by cory on 2/10/21.
//

#ifndef OPENFMB_ADAPTER_ICCP_SERVER_SUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_ICCP_SERVER_SUBSCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-util/ProfileInfo.h>
#include <adapter-api/Logger.h>

#include "iccp/server/SubscriptionTypes.h"

namespace adapter {
namespace iccp {
    namespace server {

        template <class T>
        class SubscriptionHandler final : public api::ISubscriptionHandler<T> {

            const std::string mRID;
            const update_handler_vec_t<T> handlers;

        public:
            SubscriptionHandler(std::string mRID, update_handler_vec_t<T> handlers);

        protected:
            bool matches(const T& message) const override;

            void process(const T& message) override;
        };

        template <class T>
        SubscriptionHandler<T>::SubscriptionHandler(std::string mRID, update_handler_vec_t<T> handlers)
            : mRID(std::move(mRID))
            , handlers(std::move(handlers))
        {
        }

        template <class T>
        bool SubscriptionHandler<T>::matches(const T& message) const
        {
            return this->mRID == util::profile_info<T>::get_conducting_equip(message).mrid();
        }

        template <class T>
        void SubscriptionHandler<T>::process(const T& message)
        {
        }
    }
}
}

#endif //OPENFMB_ADAPTER_ICCP_SERVER_SUBSCRIPTIONHANDLER_H
