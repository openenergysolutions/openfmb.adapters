#ifndef OPENFMB_ADAPTER_MODBUS_SUBSCRIPTIONHANDLER_H
#define OPENFMB_ADAPTER_MODBUS_SUBSCRIPTIONHANDLER_H

#include <adapter-api/ISubscriptionHandler.h>

#include <modbus/server/db/InMemoryDatabase.h>

#include "outstation/SubscriptionTypes.h"

namespace adapter {
namespace modbus {
namespace outstation {

    template <class T>
    class SubscriptionHandler final : public api::ISubscriptionHandler<T> {

        const std::string mRID;
        const std::shared_ptr<::modbus::InMemoryDatabase> db;
        const update_handler_vec_t<T> handlers;

    public:
        SubscriptionHandler(std::string mRID, std::shared_ptr<::modbus::InMemoryDatabase> db, update_handler_vec_t<T> handlers);

    protected:
        bool matches(const T& message) const override;

        void process(const T& message) override;
    };

    template <class T>
    SubscriptionHandler<T>::SubscriptionHandler(std::string mRID, std::shared_ptr<::modbus::InMemoryDatabase> db, update_handler_vec_t<T> handlers)
        : mRID(std::move(mRID))
        , db(std::move(db))
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
        this->db->execute_transaction([&](::modbus::IDatabase& db) {
            for (const auto& handler : this->handlers) {
                handler(db, message);
            }
        });
    }

}
}
}

#endif
