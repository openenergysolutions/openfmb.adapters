// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_DNP3_OUTSTATION_SUBSCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>

#include <opendnp3/outstation/IOutstation.h>

#include "SubscriptionTypes.h"

namespace adapter {
namespace dnp3 {
    namespace outstation {

        template <class T>
        class SubscriptionHandler final : public api::ISubscriptionHandler<T> {

            const std::string mRID;
            const std::shared_ptr<opendnp3::IOutstation> outstation;
            const update_handler_vec_t<T> handlers;

        public:
            SubscriptionHandler(std::string mRID, std::shared_ptr<opendnp3::IOutstation> outstation, update_handler_vec_t<T> handlers);

        protected:
            bool matches(const T& message) const override;

            void process(const T& message) override;
        };

        template <class T>
        SubscriptionHandler<T>::SubscriptionHandler(std::string mRID, std::shared_ptr<opendnp3::IOutstation> outstation, update_handler_vec_t<T> handlers)
            : mRID(std::move(mRID))
            , outstation(std::move(outstation))
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
            opendnp3::UpdateBuilder builder;
            for (const auto& handler : this->handlers) {
                handler(builder, message);
            }
            outstation->Apply(builder.Build());
        }
    }
}
}

#endif
