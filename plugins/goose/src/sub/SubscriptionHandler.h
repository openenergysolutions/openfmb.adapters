#ifndef OPENFMB_ADAPTER_SUB_SUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_SUB_SUBSCRIPTIONHANDLER_H

#include "sub/BuildingFunction.h"
#include "adapter-api/ISubscriptionHandler.h"
#include "adapter-api/Logger.h"
#include "adapter-api/ProfileInfo.h"
#include "goose-cpp/control_block/IControlBlockPublisher.h"
#include "goose-cpp/messages/Dataset.h"
#include <string>
#include <memory>

namespace adapter {
namespace goose {

    template <class T>
    class SubscriptionHandler final : public ISubscriptionHandler<T> {
    public:
        SubscriptionHandler(
                Logger logger,
                std::string uuid,
                std::shared_ptr<goose_cpp::IControlBlockPublisher> cb_publisher,
                building_fn_t<T> builder)
                : m_logger{logger}
                , m_uuid{std::move(uuid)}
                , m_cb_publisher{std::move(cb_publisher)}
                , m_builder{std::move(builder)}
        {
        }

        bool matches(const T& message) const final
        {
            return profile_info<T>::get_conducting_equip(message).mrid() == m_uuid;
        }

    protected:
        void process(const T& message) final
        {
            try
            {
                auto dataset = std::make_unique<goose_cpp::Dataset>();
                m_builder(message, *dataset);
                m_cb_publisher->publish(std::move(dataset));
            }
            catch(Exception& e)
            {
                m_logger.warn("Cannot publish GOOSE message: {}", e.what());
            }
        }

    private:
        Logger m_logger;
        const std::string m_uuid;
        building_fn_t<T> m_builder;
        std::shared_ptr<goose_cpp::IControlBlockPublisher> m_cb_publisher;
    };

} // namespace goose
} // namespace adapter

#endif //OPENFMB_ADAPTER_SUB_SUBSCRIPTIONHANDLER_H
