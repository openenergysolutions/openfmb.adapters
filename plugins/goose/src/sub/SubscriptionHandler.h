// SPDX-FileCopyrightText: 2021 Open Energy Solutions Inc
//
// SPDX-License-Identifier: Apache-2.0

#ifndef OPENFMB_ADAPTER_SUB_SUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_SUB_SUBSCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>
#include <adapter-api/Logger.h>

#include "adapter-util/ProfileInfo.h"

#include "BuildingFunction.h"

#include "goose-cpp/control_block/IControlBlockPublisher.h"
#include "goose-cpp/messages/Dataset.h"
#include <memory>
#include <string>

namespace adapter {
namespace goose {

    template <class T>
    class SubscriptionHandler final : public api::ISubscriptionHandler<T> {
    public:
        SubscriptionHandler(
            api::Logger logger,
            std::string uuid,
            std::shared_ptr<goose_cpp::IControlBlockPublisher> cb_publisher,
            building_fn_t<T> builder)
            : m_logger{ logger }
            , m_uuid{ std::move(uuid) }
            , m_cb_publisher{ std::move(cb_publisher) }
            , m_builder{ std::move(builder) }
        {
        }

        bool matches(const T& message) const final
        {
            return util::profile_info<T>::get_conducting_equip(message).mrid() == m_uuid;
        }

    protected:
        void process(const T& message) final
        {
            try {
                auto dataset = std::make_unique<goose_cpp::Dataset>();
                m_builder(message, *dataset);
                m_cb_publisher->publish(std::move(dataset));
            } catch (const api::Exception& e) {
                m_logger.warn("Cannot publish GOOSE message: {}", e.what());
            }
        }

    private:
        api::Logger m_logger;
        const std::string m_uuid;
        building_fn_t<T> m_builder;
        std::shared_ptr<goose_cpp::IControlBlockPublisher> m_cb_publisher;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_SUB_SUBSCRIPTIONHANDLER_H
